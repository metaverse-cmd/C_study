#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main() {
//    int arr1[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//    printf("%d", arr1[0][0]); // 使用数组，避免被优化
//    return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	//printf("%d\n", arr[5]);
//	//arr[5] = 70;
//	//printf("%d\n", arr[5]);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i <= 9;i++)
//	{
//		scanf("%d", &arr[i]);
//
//	}
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("arr[%d] = %p\n", i,&arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//
//	} 
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum += arr[i];
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	//int arr1[1][2];
//	//float  math[10][30];
//	int arr1[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//
//	return 0;
//}

//int main()
//{
//	int arr1[3][5] = { {1,2},{3,4},{5,6,} };
//	int arr2[][5] = { {1,2},{3,4},{5,6} };
//	int arr3[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	printf("%d ", arr3[1][3]);
//	return 0;
//}

//int main()
//{
//	int arr[3][5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[3][5] = { 0 };
//
//		for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d] = %p \n",i,j, &arr[i][j]);
//		}
//
//	} 
//	return 0;
//}

#include <string.h>
#include <windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "*******************";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	//int right = sizeof(arr1) / sizeof(arr1[0] - 2);
//	while (left <= right) 
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//
//	printf("%s\n", arr2);
//
//	return 0;
//
//}


int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 7;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (n == arr[i])
		{
			printf("找到了下标是：%d", i);
			break;
		}
	}
	if (i == sz)
	{
		printf("找不到");
	}
	return 0;
}