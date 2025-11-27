#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
//#define NDEBUG
#include <assert.h>

void Swap2(int* pa, int* pb)
{
	int z = 0;
	z = *pa;//z = a;
	*pa = *pb;//a = b
	*pb = z;//b = z
}

int Add(int x, int y)
{
	return x + y;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	//交换
	printf("交换前:a=%d b=%d\n", a, b);
	Swap2(&a, &b);
	printf("交换后:a=%d b=%d\n", a, b);
	return 0;
}


//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//交换
//	printf("交换前:a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("交换后:a=%d b=%d\n", a, b);
//	return 0;
//}


//
//size_t my_strlen(const char* p)
//{
//	size_t count = 0;
//	assert(p != NULL);
//	while (*p)
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zu\n", len);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	scanf("%d", &a);
//	assert(a > 0);
//
//	return 0;
//}

//int main()
//{
//	int*p = NULL;
//
//	//...
//	assert(p != NULL);
//	printf("hehe\n");
//
//	//int n = 10;
//	//int* p = &n;
//
//	////...
//	//assert(p != NULL);
//	//printf("hehe\n");
//
//	return 0;
//}


//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int* p = &arr[0];
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        *(p++) = i;
//    }
//    //此时p已经越界了，可以把p置为NULL
//    p = NULL;
//    //下次使用的时候，判断p不为NULL的时候再使用
//    //...
//    p = &arr[0];//重新让p获得地址
//    if (p != NULL) //判断
//    {
//        //...
//    }
//    return 0;
//}


//int main()
//{
//	int m = 100;
//	int * p1 = &m; //直接初始化
//
//	int* p2 = NULL;
//	
//
//	return 0;
//}

//int* test()
//{
//	int m = 100;
//	printf("m = %d\n", m);
//	return &m;//int*
//}
//
//int main()
//{
//	int*p = test();
//	printf("*p = %d\n", *p);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = 0;
//		p++;
//	}
//
//	return 0;
//}



//
//int main()
//{
//	int* p;
//	*p = 20;
//
//	return 0;
//}

//int main()
//{
//	int m = 100;
//	int* p = &m;
//	*p;
//	return 0;
//}


//int main()
//{
//	const int m = 10;
//
//	int n = 100;
//
//	const int* const p = &m;
//	//const 修饰指针变量的时候
//	//const 如果放在*的右边和右边，表示：不可以通过指针变量来修改指针变量指向的内容
//	//指针变量本身也是不可以修改的
//	*p = 0;//err
//	p = &n;//err
//
//	return 0;
//}


//int main()
//{
//	const int m = 10;
//
//	int n = 100;
//
//	int* const p = &m;
//	//const 修饰指针变量的时候
//	//const 如果放在*的右边，表示：可以通过指针变量来修改指针变量指向的内容
//	//但是指针变量本身是不可以修改的
//	*p = 0;//ok
//	p = &n;//err
//
//	return 0;
//}



//int main()
//{
//	const int m = 10;
//
//	int n = 100;
//
//	const int* p = &m;
//	//const 修饰指针变量的时候
//	//const 如果放在*的左边，表示：不能通过指针变量来修改指针变量指向的内容
//	//但是指针变量本身是可以修改的
//	*p = 0;//err
//	p = &n;//ok
//
//	return 0;
//}



//int main()
//{
//	const int m = 10;
//	int* p = &m;
//	*p = 0;//m = 0
//	printf("%d\n", m);//0
//
//	return 0;
//}



//int main()
//{
//	const int m = 0;//m变成了一个常变量,m的本质还是变量，但是具有常量的属性，不能被修改了
//	int arr[m];
//
//	//m = 20;
//	//printf("%d\n", m);
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;//p拿到了首元素的地址
//	//数组名arr在这里是首元素的地址
//	//&arr[0] == arr
//	//打印数组的所有元素
//	while (p < arr + sz)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];//p拿到了首元素的地址
//
//	//打印数组的所有元素
//	while (p < &arr[0] + sz)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//
//	return 0;
//}



//size_t my_strlen(char* p)
//{
//	size_t count = 0;
//	while (*p)
//	{
//		count++;
//		p++;
//	}
//	return count;
//}

//size_t my_strlen(char* p)
//{
//	char* q = p;
//	while (*p)
//	{
//		p++;
//	}
//	return p - q;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	//abcdef\0
//	size_t len = my_strlen(arr); //数组名是其实是数组首元素的地址
//	//strlen 是求字符串的长度，本质上是统计这个字符串中\0之前的字符个数
//	
//	printf("%zu\n", len);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[0] - &arr[9]);//?
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];//p拿到了首元素的地址
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *p++);
//	}
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[sz];//p拿到了首元素的地址
//
//	for (int i = 0; i < sz; i++)
//	{
//		p--;
//		printf("%d ", *p);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];//p拿到了首元素的地址
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;//p = p+1
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];//p拿到了首元素的地址
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}