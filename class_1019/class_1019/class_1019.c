#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int  main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	int k = 0;
//	scanf("%d", &k);
//
//	int flag = 0;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if(arr[mid] == k)
//		{
//			printf("找到了，小标是：%d\n", mid);
//			flag = 1;
//			break;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			left = mid + 1;
//		}
//
//	}
//	if (flag == 0)
//	{
//		printf("找不到");
//	}
//	return 0;
//}

//int main()
//{
//	int mid = (a + b) / 2;
//	int mid = (a - b) / 2 + b;
//	return 0;
//}

//Add(int x, int y)//形式参数
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//int sum = a + b;
//	//实际参数
//	 int sum = Add(a, b);//函数调用
//	printf("%d\n", sum);
//	return 0;
//}

void printf_arr(int arr1[10], int sz1)
{
	int i = 0;
	for (i = 0; i <= sz1; i++)
	{

		printf("%d ", arr1[i]);
	}
	printf("\n");

}

void set_arr(int arr1[10], int sz2)
{
	int i = 0;
	for (i = 0; i <= sz2; i++)
	{
		arr1[i] = -1;
	}

}
int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	set_arr(arr, sz);

	printf_arr(arr,sz);
	return 0;
}