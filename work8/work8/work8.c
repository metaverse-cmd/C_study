#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//void print(int arr[])
//{
//	int* p = arr;
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d", *(p + i));
//
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	print(arr);
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//
//}
//int main()
//{
//	//int arr[] = { 10,3,9,1,0,5,4,7,6,2 };
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	print_arr(arr, sz);
//	return 0;
//}

//void leftRound(char* str, int k)
//{
//	char tmp[256] = { 0 };
//	int len = strlen(str);
//	int time = k % len;
//	strcpy(tmp, str + time);
//	strncat(tmp, str, time);
//	strcpy(str, tmp);
//}
//int main()
//{
//	char str[] = "abcdef";
//	leftRound(str,2);
//	printf("%s\n", str);
//
//	return 0;
//}


////src =AABCD find = BCDAA
//char* Func(char* src, char* find)
//{
//	char* tmp[256] = { 0 };
//	strcpy(tmp, src);
//	strcat(tmp, src);
//	return strstr(tmp, find);
//	
//}
//
//int main()
//{
//	char* str1 = "AABCD";
//	char* str2 = "BCDAA";
//	char* ret = Func(str1, str2);
//	if (ret != NULL)
//	{
//		printf("找到了");
//	}
//	else
//	{
//		printf("没找到");
//	}
//	return 0;
//}

#include <string.h>
//int FindRound(char* str, char* find)
//{
//	int len = strlen(str);
//	//int time = k % len;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < len; i++)
//	{
//		char tmp = str[0];
//		for (j = 0; j < len - 1; j++)
//		{
//			str[j] = str[j + 1];
//		}
//		str[j] = tmp;
//		if (strcmp(str, find) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char str1[] = "AABCD";
//	char* str2 = "BCDAA";
//	int ret = FindRound(str1,str2);
//	printf("%d\n", ret);
//	return 0;
//}

//int Findnum(int arr[][3], int x, int y, int key)
//{
//	int i = 0;
//	int j = y - 1;
//	while (i < x && j >= 0)
//	{
//		if (arr[i][j] < key)
//		{
//			i++;
//		}
//		else if (arr[i][j] > key)
//		{
//			j--;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[][3] = { {1,2,3,},{4,5,6},{7,8,9} };
//	int ret = Findnum(arr, 3, 3, 8);
//	printf("%d\n", ret);
//	return 0;
//}


//void Findkiller()
//{
//	char killer = 'a';
//	for (; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer != 'd') + (killer =='d') == 3)
//		{
//			printf("凶手是：%c\n", killer);
//			return;
//		}
//	}
//}
//int main()
//{
//	Findkiller();
//	return 0;
//}


void yanghuiTriAngle(int arr[][4],int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || i == j)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];

			}
		}
	}
}
int main()
{
	int arr[4][4] = { 0 };
	yanghuiTriAngle(arr, 4);
	for (int i = 0; i  <4; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}