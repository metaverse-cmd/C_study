#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void is_prime(int x)
{
	int  a = 0;
	for (a = 2; a < x; a++)
	{
		if (x % a != 0)
		{
			printf("%d ", x);
			break;
		}
		else
		{		
			break;
		}
	}
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		is_prime(i);
	}
	return 0;
}
//int bin_search(int arr[10], int left, int right, int key)
//{
//	while (left <= right)
//	{
//		if (arr[left] < key)
//		{
//			left++;
//		}
//		else
//			return left;
//	}
//	if (left > right)
//		return -1;
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int left = 0;
//	int right = (sizeof(arr) / sizeof(arr[0])) - 1;
//	int key = 0;
//	scanf("%d", &key);
//	int k = bin_search(arr, left, right, key);
//	printf("%d", k);
//	return 0;
//}