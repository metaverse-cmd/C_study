#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h> 
//int main()
//{
//	printf("%d\n",INT_MAX);
//	return 0;
//}

//变量
//int c = 10;
//int main()
//{
//	int a = -100;
//	unsigned int b = 100;
//	printf("%d\n", a);
//	printf("%u\n", b);
//	printf("%u\n", a);  //负整形会出现错误
//	printf("%c\n", c);
//	{
//		int d = 23;
//		printf("%d\n", d);
//
//	}
//	return 0;
//}

//算术操作符
//int main()
//{
//	printf("%f\n", 3 * 1.5);
//	printf("%d\n", 6 / 4);		wrong
//	printf("%f\n", 6 / 4);		wrong
//	printf("%1f\n", 6 / 4.0);
//
//	return 0;
//}

//单目操作符
//int main()
//{
//	int a = 10;
//	int b = a++;
//	int c = ++a;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//
//	return 0;
//}

//scanf()
//int main()
//{
//	int score = 0;
//	scanf("%d", &score);
//	printf("%d\n", score);
//	return 0;
//}

//占位符
int main()
{
	printf("%4d\n",1234);
	printf("%-7d---\n",1234);
	printf("%.2f\n",12.345);
	printf("%+d\n",1234);
	printf("%.3s","abcdef");
	return 0;
}