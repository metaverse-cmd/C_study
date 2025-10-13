#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    if ((a + b > c && a + c > b && b + c > a))
//    {
//        if (a == b == c)
//        {
//            printf("Equilateral triangle!");
//        }
//        else if (a == b || a == c || b == c)
//        {
//            printf("Isosceles triangle!");
//        }
//        else
//        {
//            printf("Ordinary triangle!");
//        }
//    }
//    else
//    {
//        printf("Not a triangle!");
//    }
//
//    return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (int i = 0; i <= 9; i++)
//	{
//		scanf("%d", &arr[i]);
//		// 按顺序将输入存储到数组中
//	}
//	int max = 0;
//
//	for (i = 0; i <= 9; i++)
//	{
//		if (arr[i] >= max)
//			max = arr[i];
//	}
//	printf("%d", max);
//
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int i = 1;
//	double sum = 0.0;
//	for (m = 1; m <= 100; m++)
//	{
//		sum = sum + ( 1.0 / m)*i;
//		i = -i;
//	}
//	printf("%f\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (((i - 9) % 10 == 0)||i/10==9)
//			n++;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//			printf("%d ", year);
//		else if (year % 400 == 0)
//			printf("%d ", year);
//	}
//	return 0;
//}

int main()
{
	int a, b, c;
	scanf("%d%d", &a, &b);
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("%d\n", a);
	return 0;
}