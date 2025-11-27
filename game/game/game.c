#define _CRT_SECURE_NO_WARNINGS

#include "game.h"


void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("--------扫雷--------\n");
	int i = 0;
	//列号的打印
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");//换行
	for (i = 1; i <= row; i++)//行
	{
		int j = 0;
		//行号的打印
		printf("%d ", i);
		for (j = 1; j <= col; j++)//列
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");

}


//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;//布置的雷的个数
	while (count)
	{
		//1. 生成随机坐标
		int x = rand() % row + 1;//1~9
		int y = rand() % col + 1;//1~9
		//2. 坐标处数据的判断
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';//成功设置雷
			count--;//
		}
	}
}

static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	/*return mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x + 1][y] +
		mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] + mine[x - 1][y] - 8 * '0';*/

	int i = 0;
	int c = 0;//个数
	for (i = -1; i <= 1; i++)
	{
		int j = 0;
		for (j = -1; j <= 1; j++)
		{
			c += (mine[x + i][y + j] - '0');
		}
	}
	return c;
}

//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0; //排查出的坐标个数
	while (win <  row * col - EASY_COUNT)
	{
		printf("请输入要排查的坐标:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//坐标合法
		{
			if (show[x][y] == '*')
			{
				if (mine[x][y] == '1')
				{
					printf("很遗憾，你被炸死了，游戏结束\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else
				{
					//统计mine数组中x,y坐标周围一圈有几个雷
					int count = get_mine_count(mine, x, y);
					//数据存放到show数组的x,y坐标处
					show[x][y] = count + '0';
					DisplayBoard(show, ROW, COL);
					win++;
				}
			}
			else
			{
				printf("该坐标已经被排查过了，重新输入坐标\n");
			}
		}
		else
		{
			printf("坐标非法，x和y是有范围的\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, ROW, COL);
	}
}

