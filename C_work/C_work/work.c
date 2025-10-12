#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b && a > c)
//		if (b > c)
//			printf("%d>%d>%d", a, b, c);
//		else
//			printf("%d>%d>%d", a, c,b);
//	else if(b > a&& b > c)
//		if (a > c)
//			printf("%d>%d>%d", b, a, c);
//		else
//			printf("%d>%d>%d", b,c,a);
//	else if(c > a&& c > b)
//		if (a > b)
//			printf("%d>%d>%d", c, a, b);
//		else
//			printf("%d>%d>%d", c, b, a);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 3 == 0)
//			printf("%d ", a);
//	}
//
//	return 0;
//}


//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int c = a / b;
//    int d = a % b;
//    printf("%d %d", c, d);
//    return 0;
//}

//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        if (n >= 140)
//            printf("Genius");
//    }
//    return 0;
//}

//int main()
//{
//    int a = 0, b = 0;
//    while (scanf("%d%d", &a, &b) == 2)
//    {
//
//        if (a == b)
//            printf("%d=%d\n", a, b);
//        else if (a > b)
//            printf("%d>%d\n", a, b);
//        else
//        {
//            printf("%d<%d\n", a, b);
//            break;
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int M = 0;
//    scanf("%d", &M);
//    if (M % 5 == 0)
//        printf("YES");
//    else
//        printf("NO");
//    return 0;
//}

int main()
{
    int i = 0;
    while (scanf("%d", &i) == 1)
    {
        int a = 0;
        for (a = 1; a <= i; a++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}