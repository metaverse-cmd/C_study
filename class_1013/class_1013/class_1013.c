#define _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>
#include <stdlib.h>
#include <time.h>
//int main()
//{
//	int math, eng, chin;
//	printf("请输入math: english: chinese:");
//	scanf_s("%d%d%d", &math, &eng, &chin);
//	if (math < 60 || eng < 60 || chin < 60)
//		printf("1");
//	else
//		printf("0");
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//			if (flag == 1)
//			{
//				printf("%d", i);
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	printf("hehe");
//	goto end;
//	printf("haha");
//	end:
//	return 0;
//}

void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	//printf("%d\n", ret);

	while (1)
	{
		printf("请猜数字：>");
		scanf_s("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");

		}
		else if (guess > ret)
		{
			printf("猜大了\n");

		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}


int main()
{

	int input = 0;
	do
	{
		printf("*******************\n");
		printf("***1.play 0.exit***\n");
		printf("*******************\n");
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("猜数字游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重选\n");
			break;
		}
	} while (input);
	return 0;
}



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//void menu()
//{
//	printf("********    生死时速   ********\n");
//	printf("********     1.paly    ********\n");
//	printf("********     0.exit    ********\n");
//}
//
//void game()
//{
//	int guess = 0;
//	int ret = rand()%100+1;
//	//printf("%d\n", ret); 
//	system("shutdown -s -t 120");
//	printf("请注意，你的电脑将在120秒内关机，请猜出数字，就取消关机\n");
//  int count = 10;
//  int flag = 0; 
//	while (count)
//	{
//		printf("请猜数字：>");
//		count--;
//		scanf_s("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//			printf("请注意，你的电脑将在120秒内关机，请猜出数字，就取消关机\n");
//
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//			printf("请注意，你的电脑将在120秒内关机，请猜出数字，就取消关机\n");
//
//		}
//		else
//		{
//			int flag = 1;
//			system("shutdown -a");
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//		if (flag == 0)
//			printf("很遗憾，你的机会用完了\n\n\n");
//	}
//}
//int main() 
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf_s("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//} 