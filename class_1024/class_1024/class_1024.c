#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int n = 0;
//	//scanf("%d", &n);
//	int i = 0; 
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			ret = 1;
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int Fac(int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	//printf("hehe\n");
//	//main();
//	int n = 0;
//	scanf("%d", &n);
//	int r = Fac(n);
//	printf("r = %d", r);
//	return 0;
//}

void Print(int n)
{
	if (n > 9)
	{
		Print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	Print(n);
	return 0;
}