#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//int main()
//{
//	//int arr[10] = { 0 };//
//	//printf("%zu\n", strlen(arr));//err
//
//	char arr[20] = "abcdef";
//	printf("%zu\n", strlen(arr));//6
//	printf("%zu\n", sizeof(arr));//20
//
// 	return 0;
//}
//int main()
//{
//	int a = 0;
//	printf("%zu\n", sizeof(a));
//	printf("%zu\n", sizeof a);//ok
//	printf("%zu\n", sizeof(int));
//	//printf("%zu\n", sizeof int);//err
//	return 0;
//}

//
//void Swap(char* buf1, char* buf2, size_t width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)//交换这么多个字节
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
////升序
//void bubble_sort(void*base, size_t sz, size_t width, int (*cmp)(const void*p1, const void*p2))
//{
//	//趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟内部的排序 - 两两相邻的元素比较
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			//if (arr[j] > arr[j + 1])
//			if(cmp((char*)base + j * width, (char*)base + (j + 1) * width)>0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//
//void test3()
//{
//	int arr[] = { 2,1,5,8,0,4,6,3,9,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	print_arr(arr, sz);
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_name(const void*p1, const void* p2)
//{
//	return strcmp(((struct Stu*)p2)->name, ((struct Stu*)p1)->name);
//}
//
//int cmp_stu_by_age(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//}
//
//void test4()
//{
//	struct Stu arr[3] = { {"zhangsan", 20}, {"lisi", 35}, {"wangwu", 18}};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//}
//
//int main()
//{
//	test4();
//	//test3();
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct Stu s = {"zhangsan", 20};
//	struct Stu* ps = &s;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//
//	return 0;
//}


//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//void qsort(void* base, size_t num, size_t size, int (*compar)(const void*, const void*) );

//qsort函数是有4个参数
//第4个参数是：函数指针，可以指向一个函数，这个函数的参数是const void*, const void*，返回类型是int
//base: 是指针，指向待排序数组中的第一个数据的
//num：待排序数组中的元素个数
//size: 待排序数组中一个元素的大小
//compar: 是一个函数指针，这个函数指针指向的函数可以用来比较数组中的两个元素的大小
//对于qsort函数使用的时候，我们得自己创建一个函数，用来比较两个数据的大小关系
//

//测试qsort来排序结构体的数据
//struct Stu
//{
//	char name[20];
//	int age;
//};
//void test2()
//{
//	struct Stu arr[3] = { {"zhangsan", 20}, {"lisi", 35}, {"wangwu", 18}};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), );
//
//	print_arr(arr, sz);
//}

//测试qsort来排序整型类型的数据
//int cmp_int(const void*p1, const void*p2)
//{
//	if (*(int*)p1 > *(int*)p2)
//		return 1;
//	else if (*(int*)p1 < *(int*)p2)
//		return -1;
//	else
//		return 0;
//}
//
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
////
//void test1()
//{
//	int arr[] = { 2,1,5,8,0,4,6,3,9,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
////测试qsort来排序结构体的数据
//struct Stu
//{
//	char name[20];
//	int age;
//};

//
//p1, p2都指向了struct Stu类型的数据
//int cmp_stu_by_age(const void* p1, const void* p2)
//{
//	return (*(struct Stu*)p1).age - (*(struct Stu*)p2).age;
//}
//

//int cmp_stu_by_name(const void* p1, const void* p2)
//{
//	return strcmp( ((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//
//void test2()
//{
//	struct Stu arr[3] = { {"zhangsan", 20}, {"lisi", 35}, {"wangwu", 18}};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//}
//
//int main()
//{
//	test2();
//	return 0;
//}


////升序
//void bubble_sort(int arr[], int sz)
//{
//	//趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟内部的排序 - 两两相邻的元素比较
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 2,1,5,8,0,4,6,3,9,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}
//
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
//void menu()
//{
//	printf("*************计算器*************\n");
//	printf("****** 1. add     2. sub  *****\n");
//	printf("****** 3. mul     4. div  *****\n");
//	printf("******      0. exit       *****\n");
//	printf("*******************************\n");
//}
//
//void calc( int (*pf)(int, int) )
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入两个操作数:");
//	scanf("%d%d", &x, &y);
//	ret = pf(x, y);
//	printf("结果是: %d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
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
//
//
