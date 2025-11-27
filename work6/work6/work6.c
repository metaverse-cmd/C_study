#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int Drink(int m)
//{
//	if (m / 2 >= 1)
//	{
//		int d = m + Drink(m / 2);
//		return d;
//	}
//}
//int main()
//{
//	int m = 20;
//	//scanf("%d", &m);
//	int d = Drink(m);
//	printf("%d", d);
//	return 0;
//}




//void print(char arr[], int left,int right)
//{
//	char i = ' ';
//	int j = (left + right) / 2 ;
//	//printf("hehe\n");
//	for (left = 0, right = 12; left <= j, right >= j; left++, right--)
//	{
//		if (left < j)
//		{
//			arr[left] = i;
//			arr[right] = i;
//			for (int n = 0; n <= 12; n++)
//			{
//				printf("%c", arr[n]);
//			}
//			printf("\n");
//		}
//		else if (left = j)
//		{
//			break;
//		}
//
//	}
//}
//
//int main()
//{
//	char arr[13] = {"             "};
//	char m = '*';
//	int left = 0;
//	int right = 13;
//	int sz = (left + right) / 2;
//	arr[sz] = m;
//	for (left = sz - 1, right = sz + 1; left >= 0, right <= 13; left--, right++)
//	{
//		for (int n = 0; n <= 12; n++)
//		{
//			printf("%c", arr[n]);
//		}
//		printf("\n");
//		if (left >= 0)
//		{
//			arr[left] = m;
//			arr[right] = m;
//		}
//	}
//	print(arr,left,right);
//
//	
//	return 0;
//}



//int flower(int i)
//{
//	int a = 1;
//
//	while (i % 10)
//	{
//		a = a*(i % 10); 
//		i--;
//	}
//	int b = 0;
//	b = b + a;
//	if (i = b + flower(i / 10))
//	{
//		return b + flower(i / 10);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int Flo = 0;
//	for (i = 0; i <= 1; i++)
//	{
//		Flo = flower(i);
//		printf("%d ", Flo);
//	}
//	return 0;
//}


int  Total(int money)
{
	int total = money;
	int empty = money;
	
	while (empty > 1)
	{
		total = total + empty / 2;
		empty = empty / 2 + empty % 2;
	}
	return total;
}
int main()
{
	printf("%d\n", Total(20));
	return 0;
}

//void Func(int line)
//{
//
//	for (int i = 0; i < line; i++)
//	{
//		for (int j = 0; j < line - 1 -i; j++)
//		{
//			printf(" ");
//		}
//		for (int k = 0; k < 2 * i + 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < line - 1; i++)
//	{
//		for (int j = 0; j < i+1; j++)
//		{
//			printf(" ");
//		}
//		for (int k = 0; k < (line-1-i)*2 -1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	Func(7);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//void Func()
//{
//	for (int i = 0; i < 100000; i++)
//	{
//		int count = 0;
//		int tmp = i;
//		while (tmp != 0)
//		{
//			count++;
//			tmp /= 10;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp != 0)
//		{
//			sum += pow(tmp % 10,count);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d\n",i);
//		}
//	}
//}
//int main()
//{
//	Func();
//	return 0;
//}


//int Func(int n, int a)
//{
//	int sum = 0;
//	int tmp = 0;
//	for (int i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum += tmp;
//	}
//	return sum;
//}
//int main()
//{
//	printf(" %d\n", Func(5, 2));
//	return 0;
//}