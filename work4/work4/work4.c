#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//
//    int i = 0;
//    while (i <= 20)
//    {
//        scanf("%d", &i);
//        int left = 0;
//        int right = i - 1;
//        while (left <= right)
//        {
//            char arr1[] = { "                    \0" };
//            char arr2[] = { "********************\0" };
//            arr1[left] = arr2[left];
//            arr1[right] = arr2[right];
//            printf("%s\n", arr1);
//            left++;
//            right--;
//        }
//        int b = 0;
//        int a = 0;
//        if (i % 2 == 0)
//        {
//            a = ((i - 1) / 2);
//            b = ((i - 1) / 2) + 1;
//        }
//        else if (i % 2 == 1)
//        {
//            a = ((i - 1) / 2) - 1;
//            b = ((i - 1) / 2) + 1;
//        }
//        while (b <= i)
//        {
//            char arr1[] = { "                    \0" };
//            char arr2[] = { "********************\0" };
//            if (i % 2 == 0)
//            {
//                //a = ((i - 1) / 2);
//                //b = ((i - 1) / 2) + 1;
//                arr1[a] = arr2[a];
//                arr1[b] = arr2[b];
//                printf("%s\n", arr1);
//                a--;
//                b++;
//            }
//            else if (i % 2 == 1)
//            {
//                //a = ((i - 1) / 2)-1;
//                //b = ((i - 1) / 2)+1;
//                arr1[a] = arr2[a];
//                arr1[b] = arr2[b];
//                printf("%s\n", arr1);
//                a--;
//                b++;
//            }
//            if (a < 0)
//            {
//                break;
//            }
//        }
//        i++;
//    }
//    return 0;
//
//}
//int main()
//{
//	
//    int i = 0;
//    scanf("%d", &i);
//    int left = 0;
//    int right = i-1;
//    while (left <= right)
//    {
//        char arr1[] = { "                    \0" };
//        char arr2[] = { "********************\0" };
//        arr1[left] = arr2[left];
//        arr1[right] = arr2[right];
//        printf("%s\n", arr1);
//        left++;
//        right--;
//    }
//    int b = 0;
//    int a = 0;
//    if (i % 2 == 0)
//    {
//        a = ((i - 1) / 2);
//        b = ((i - 1) / 2) + 1;
//    }
//    else if (i % 2 == 1)
//    {
//        a = ((i - 1) / 2) - 1;
//        b = ((i - 1) / 2) + 1;
//    }
//    while (b <= i)
//    {
//        char arr1[] = { "                    \0" };
//        char arr2[] = { "********************\0" };
//        if (i % 2 == 0)
//        {
//            //a = ((i - 1) / 2);
//            //b = ((i - 1) / 2) + 1;
//            arr1[a] = arr2[a];
//            arr1[b] = arr2[b];
//            printf("%s\n", arr1);
//            a--;
//            b++;
//        }
//        else if (i % 2 == 1)
//        {
//            //a = ((i - 1) / 2)-1;
//            //b = ((i - 1) / 2)+1;
//            arr1[a] = arr2[a];
//            arr1[b] = arr2[b];
//            printf("%s\n", arr1);
//            a--;
//            b++;
//        }
//        if (a < 0)
//        {
//            break;
//        }
//     }
//    
//    return 0;
//
//}

//int main()
//{
//	char arr1[41] = { "                                        \0" };
//	char arr2[41] = { "****************************************\0" };
//	int i = 0;
//	while (i <= 20)
//	{
//		scanf("%d", &i);
//		int left = 0;
//		int right = (2 * i) - 2;
//		while (left <= right)
//		{
//			arr1[left] = arr2[left];
//			arr1[right] = arr2[right];
//			left += 2;
//			right -= 2;
//		}
//		printf("%s\n", arr1);
//		int num = 1;
//		while (num <= (i - 2))
//		{
//			char arr1[41] = { "                                        \0" };
//			char arr2[41] = { "****************************************\0" };
//			int left = 0;
//			int right = (2 * i) - 2;
//			arr1[left] = arr2[left];
//			arr1[right] = arr2[right];
//			printf("%s\n", arr1);
//
//			num++;
//		}
//		printf("%s\n", arr1);
//		i++;
//	}
//	return 0;
//}

//void printf_arr(int arr[][10], int r, int c)//打印输入的数组
//{
	//int i = 0;
	//for (i = 0; i < r; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j < c; j++)
	//	{
	//		printf("%d ", arr[i][j]);
	//	}
	//	printf("\n");
	//}
//}

//int main()
//{
//	int r = 0;
//	int c = 0;
//	scanf("%d%d", &r, &c);
//	int n = r * c;
//	
//	int arr[10][10] = { 0 };
//
//
//		for (int i = 0; i < r; i++)
//		{
//			for (int j = 0; j < c; j++)
//			{
//				scanf("%d", &arr[i][j]);
//			}
//		}
//	
//	
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
//	return 0;
//}


//int main()
//{
//	int arr1[10] = { 0 };
//	int i = 0;
//	for (i = 0; i <= 9; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	int left = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int right = sz - 1;
//	int arr2[10] = {0};
//	for (int a = 0; a <= 9; a++)
//	{
//		arr2[a] = arr1[a];
//	}
//	while (left <= 9)
//	{
//		arr1[left] = arr2[right];
//		left++;
//		right--;
//	}
//	for (int a = 0; a <= 9; a++) 
//	{
//		printf("%d ", arr1[a]);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int arr1[1000];
//	int arr2[1000];
//	int arr3[1000];
//
//	for (int a = 0; a <= n; a++)
//	{
//		scanf("%d", &arr1[a]);
//	}
//	for (int b = 0; b <= m; b++)
//	{
//		scanf("%d", &arr2[b]);
//	}
//	for (int i = 0; i <= (n + m); i++)
//	{
//		int a = 0;
//		for (a = 0; a < n, a++)
//		{
//			int b = 0;
//		}
//	}
//
//	return 0;
//}


#include <stdio.h>

//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d%d", &n, &m);
//    int arr1[n];
//    int arr2[m];
//    for (int a = 0; a < n; a++)
//    {
//        scanf("%d", &arr1[a]);
//    }
//    for (int b = 0; b < m; b++)
//    {
//        scanf("%d", &arr2[b]);
//    }
//    //int i = n + m;
//    //int arr3[i];
//    //int j = 0;
//    //while (j < i)
//    //{
//    //    int a = 0;
//    //    for (a = 0; a < n; a++)
//    //    {
//    //        int b = 0;
//    //        for (b = 0; b < m; b++)
//    //        {
//    //            if (arr1[a] < arr2[b])
//    //            {
//    //                arr3[j] = arr1[a];
//    //            }
//    //            else
//    //            {
//    //                arr3[j] = arr2[b];
//    //            }
//    //            j++;
//    //        }
//    //    }
//
//    //}
//    int i = 0, j = 0, k = 0;
//    int arr3[n + m];
//    // 双指针合并（假设arr1和arr2已排序）
//    while (i < n && j < m) {
//        if (arr1[i] < arr2[j]) {
//            arr3[k++] = arr1[i++];
//        }
//        else {
//            arr3[k++] = arr2[j++];
//        }
//    }
//    // 处理剩余元素
//    while (i < n) arr3[k++] = arr1[i++];
//    while (j < m) arr3[k++] = arr2[j++];
//    for (int j = 0; j < (n+m); j++)
//    {
//        printf("%d ", arr3[j]);
//    }
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	float sum = 0.0;
//
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum = sum + arr[i];
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	float aver = sum / sz;
//	printf("%.2f", aver);
//	return 0;
//}

//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 11,22,33,44,55,66,77,88,99,100 };
//	int arr3[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		arr3[i] = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = arr3[i];
//	}
//	int j = 0;
//	for (int j = 0; j < 10; j++)
//	{
//		printf("%d ", arr1[j]);	
//	}
//	printf("\n");
//	for (int j = 0; j < 10; j++)
//	{
//		printf("%d ", arr2[j]);
//	}
//	return 0;
//}

//void mult(int x)
//{
//	
//	int sum = 0;
//	int n = 0;
//	for (n = 1; n <= x; n++)
//	{
//		int m = 0;
//		for (m = 1; m <= x; m++)
//		{
//			if (n <= m)
//			{
//				sum = n * m;
//				printf("%d×%d=%d	", n, m, sum);
//			}
//
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int i = 0;
//	printf("请输入你想打印几位乘法表:");
//	scanf("%d", &i);
//	mult(i);
//	
//	
//	return 0;
//}

//void Year(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0)
//		printf("%d是闰年\n", year);
//	else if (year % 400 == 0)
//		printf("%d是闰年\n", year);
//	else
//		printf("%d不是闰年\n", year);
//}
//int main()
//{
//
//	int year = 0;
//	scanf("%d", &year);
//	Year(year);
//	return 0;
//}


//int init(int arr[18], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return arr;
//}
//void print(int arr[18], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int reverse(int arr[18], int sz)
//{
//	int arr1[18] = { 0 };
//	for (int i = 0; i < sz; i++)
//	{
//		
//		arr1[i] = arr[i];
//	}
//	int n = sz - 1;
//
//	for (int j = 0; j < sz; j++)
//	{
//		arr[j] = arr1[n];
//		n--;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	return arr;
//}
//int main()
//{
//	int arr[] = { 12,332,4,23,12,3,123,1,3,125,5,86,54,7,8,569,6,98 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//
//	reverse(arr, sz);
//
//	init(arr, sz);
//
//	return 0;
//}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	for (int i = x - 1; i <= x + 1; i++)
	{
		for (int j = y - 1; j <= j + 1; j++)
		{
			int sum = 0;
			int  sum = sum + mine[i][j];

			int num = sum / 8 * "0";
		}
	}
}