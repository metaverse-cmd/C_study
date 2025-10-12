#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	(a > 5) ? (b = 3) : (b = -3);
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int m = 0;
//	scanf("%d %d", &a, &b);
//
//	m = (a > b) ? a : b;
//	printf("较大值是：%d\n", m);
//
//	return 0;
//}

//int main()
//{
//	int flag = 0;
//	scanf("%d", &flag);
//	/*if (flag == 0)
//		printf("do some thing\n");*/
//	if (!flag == 0)
//		printf("do some thing\n");
//	return 0;
//}

//int main()
//{
//	//int age = 0;
//	//scanf("%d", &age);
//	//if (age >= 18 && age <= 45)
//	//	printf("成年");
//
//	int month = 0;
//	scanf("%d", &month);
//	if (month >= 3 && month <= 5)
//		printf("是春季");
//	return 0;
//}

//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month == 12 || month == 1 || month == 2)
//		printf("是冬季");
//	
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0)
//		printf("%d是闰年\n", year);
//	else if(year % 400 ==0)
//		printf("%d是闰年\n", year);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 3 == 1)
//		printf("余数是1\n");
//	else if (n % 3 == 2)
//		printf("余数是2\n");
//	else
//		printf("余数是0\n");
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n % 3)
//	{
//	    case 0:
//			printf("余数是1\n");
//			break;
//		case 1:
//			printf("余数是2\n");
//			break;
//		case 3:
//			printf("余数是0\n");
//			break;
//
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期7\n");
//		break;
//	default:
//		printf("输入错误\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while(n != 0)
//	{
//		printf("%d ", n % 10);
//		n /= 10;
//
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			sum += i;
//		}
//	}
//	printf("%d ", sum);
//
//	return 0;
//}
// 
// 
//算法优化
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	for (i = 3; i <= 100; i += 3)
//	{
//			sum += i;
//	}
//	printf("%d ", sum);
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

int main()
{
	int n = 0;
	int count = 0;
	scanf("%d", &n);
	do
	{
		count++;
		n /= 10;

	} while (n != 0);
	printf("%d\n", count);
	return 0;
}