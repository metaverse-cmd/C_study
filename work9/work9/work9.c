#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//menu()
//{
//	printf("*********************************\n");
//	printf("*******1.add      2.sub *********\n");
//	printf("*******3.mul      4.div *********\n");
//	printf("*******    0.exit *    **********\n");
//	printf("*********************************\n");
//
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	int (*pfArr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		if (input < 0 || input>4)
//		{
//			printf("选择错误，重新选择\n");
//		}
//		else if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else
//		{
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("结果是:%d\n", ret);
//		}
//		
//	} while(input);
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			int ret = Add(x, y);
//			printf("结果是:%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			int ret = Sub(x, y);
//			printf("结果是:%d\n", ret);
//
//			break;
//		case 3:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			int ret = Mul(x, y);
//			printf("结果是:%d\n", ret);
//
//			break;
//		case 4:			
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			int ret = Div(x, y);
//			printf("结果是:%d\n", ret);
//
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("输入错误，重新输入\n");
//			break;
//
//		}
//	} while(input);
//	return 0;
//}


//void FindNum(int arr[], int len, int* pNum1, int* pNum2)
//{
//	int tmp = 0;
//	for (int i = 0; i < len; i++)
//	{
//		tmp ^= arr[i];
//	}
//
//	int pos = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((tmp >> i) & 1 == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//
//	for (int i = 0; i < len; i++)
//	{
//		if ((arr[i] >> pos) & 1 == 1)
//		{
//			*pNum1 ^= arr[i];
//		}
//		else
//		{
//			*pNum2 ^= arr[i];
//		}
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	FindNum(arr, len, &a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int month = 0;
//	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d %d", &year, &month) != EOF)
//	{
//		int day = days[month - 1];
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			if (month == 2)
//			{
//				day += 1;
//			}
//		}
//		printf("%d\n", day);
//	}
//	return 0;
//}


#include <stdlib.h>
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//
//
//int cmp_int(const void* p1, const void* p2)
//{
//	//if (*(int*)p1 > *(int*)p2)
//	//{
//	//	return 1;
//	//}
//	//else if ((*(int*)p1 < *(int*)p2))
//	//{
//	//	return -1;
//	//}
//	//else
//	//	return 0;
//	return *(int*)p1 - *(int*)p2;
//}
//void test1()
//{
//	int arr[] = { 2,1,5,8,0,4,6,3,7,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz,sizeof(arr[0]),cmp_int);
//	print_arr(arr, sz);
//}
//int main()
//{
//	test1();
//	return 0;
//}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
}

void Swap(char* buf1,char* buf2,size_t width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void Bubble_sort(void* base, size_t sz, size_t width, int (*cmp)(const void*, const void*))
{
	int i = 0;
	for (i = 0; i < sz - 1 - i; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);

			}
		}

	}
}

cmp_int(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}

void test()
{
	int arr[] = { 2,1,5,8,0,4,6,3,7,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}
int main()
{
	test();
	return 0;
}