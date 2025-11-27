#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("*************计算器*************\n");
	printf("****** 1. add     2. sub  *****\n");
	printf("****** 3. mul     4. div  *****\n");
	printf("******      0. exit       *****\n");
	printf("*******************************\n");
}

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	//函数指针数组
	int (*pfArr[5])(int, int) = {NULL, Add, Sub, Mul, Div};
	//                           0     1    2    3    4
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		if (input < 0 || input>4)
		{
			printf("选择错误, 重新选择\n");
		}
		else if (input == 0)
		{
			printf("退出计算器\n");
		}
		else
		{
			printf("请输入两个操作数:");
			scanf("%d%d", &x, &y);
			ret = pfArr[input](x, y);
			printf("结果是: %d\n", ret);
		}
	} while (input);

	return 0;
}



//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:");
//			scanf("%d%d", &x, &y);
//			ret = Add(x, y);
//			printf("结果是: %d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数:");
//			scanf("%d%d", &x, &y);
//			ret = Sub(x, y);
//			printf("结果是: %d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数:");
//			scanf("%d%d", &x, &y);
//			ret = Mul(x, y);
//			printf("结果是: %d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数:");
//			scanf("%d%d", &x, &y);
//			ret = Div(x, y);
//			printf("结果是: %d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("输入错误，重新输入\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//
//int main()
//{
//	int (*p1)(int, int) = Add;
//	int (*p2)(int, int) = Sub;
//	int (*p3)(int, int) = Mul;
//	int (*p4)(int, int) = Div;
//
//	//pArr就是函数指针数组 - 存放函数指针的数组
//	int (*pArr[4])(int, int) = {Add, Sub, Mul, Div};
//	//                          0    1    2    3
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int r = pArr[i](8, 2);
//		printf("%d\n", r);
//	}
//	return 0;
//}
//
//
//

//typedef void(*pf_t)(int);
//int main()
//{
//	pf_t signal(int, pf_t);
//
//	//void (*signal(int, void(*)(int)))(int);
//
//	return 0;
//}

//typedef unsigned int uint;
//typedef unsigned long long ull;
//
//typedef int* pint;//建议使用这种
//#define PINT int*

//
//typedef int (*parr_t)[5];
//
//int main()
//{
//	int arr[5] = {0};
//	int (*p1)[5]  = &arr;
//	parr_t p2 = &arr;
//
//	//int *p1, p2, p3;//p1-int*, p2-int, p3-int
//	//int *p1, *p2, *p3;//
//	//PINT p1, p2, p3;//p1-int*, p2-int, p3-int
//	//pint p1, p2, p3;
//
//	//int a = 10;
//	//int* p1 = &a;
//	//pint p2 = &a;
//	//PINT p3 = &a;
//
//	//unsigned int num;
//	//uint num2;
//	//unsigned long long num3;
//	//ull num4;
//
//	return 0;
//}

//
//int main()
//{
//	//代码1
//	//(*( void (*)() )0)();
//	//void (*)() -- 函数指针类型
//	//(int)3.14
//	//(*  (  void (*)()  )0  ) ();//这是一次函数调用
//	//是在调用0地址处放的一个函数
//	//1. 把0强制类型转换成一个函数的地址，这个函数没有参数，返回类型是void
//	//   就意味着0地址处放着一个没有参数，返回类型是void的函数
//	//2. 调用0地址处的这个函数
//
//	//int Add(int, int);
//	//代码2
//	//void ( * signal(int, void(*)(int) ) )(int);
//	
//	//声明了一个函数，函数的名字叫：signal
//	//signal函数有2个参数，类型分别是：int， void(*)(int)
//	//剩下没有分析的部分，单独去看，就是signal函数的返回类型
//	//signal函数的返回类型也是函数指针类型
//	//
//	return 0;
//}


//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//
//	//int(*p)(int, int) = &Add;//函数指针变量p
//	int(* p)(int, int) = Add;
//	
//	int r1 = Add(3, 5);
//	printf("r1 = %d\n", r1);
//	
//	int r2 = p(3, 5);
//	printf("r2 = %d\n", r2);
//
//	return 0;
//}

//void print(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//void print(int (*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		//*(p + i)
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int (*p)[7] = &arr;
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	//*(p+0)==p[0]
//	return 0;
//}
//
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	//*(p+0)==p[0]
//	return 0;
//}
//
//

