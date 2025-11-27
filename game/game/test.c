#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void menu()
{
	printf("****************************\n");
	printf("********  1. play   ********\n");
	printf("********  0. exit   ********\n");
	printf("****************************\n");
}

void game()
{
	//游戏的逻辑
	char mine[ROWS][COLS] = { 0 };//存放雷的信息,最开始都是'0'  该棋盘用布置雷
	char show[ROWS][COLS] = { 0 };//存放排查出的雷的信息,最开始都是'*'   该棋盘用于排查雷
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');//'0'，用'0'表示无雷位置，用'1'表示有雷位置
	InitBoard(show, ROWS, COLS, '*');//'*'，用'*'表示未知棋盘位置，用'0，1，2，3，4，5，6，7，8'表示该位置周围有几个雷
	//打印棋盘
	DisplayBoard(show, ROW, COL);

	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

	//排查雷
	//是在mine数组中排查，在show数组中存储信息
	FindMine(mine, show, ROW, COL);
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();//打印菜单
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,请选择1/0\n");
			break;
		}
	} while (input);
	return 0;
}

