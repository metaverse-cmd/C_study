#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int count = 0;
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//		count++;
//	}
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	//if (n <= 2)
//	//{
//	//	return 1;
//	//}
//	while (n > 2)
//	{
//		c = a + b;
//		a = b; 
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Fib(n);
//	printf("%d", r);
//	//printf("count = %d", count);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	//00000000 00000000 00000000 00001010-----Ô­Âë
//	//00000000 00000000 00000000 00001010-----·´Âë
//	//00000000 00000000 00000000 00001010-----²¹Âë
//	int b = 0;
//	//10000000 00000000 00000000 00001010-----Ô­Âë
//	//10000000 00000000 00000000 00001010-----Ô­Âë
//	//11111111 11111111 11111111 11110110-----²¹Âë
//	return 0;
//

//int main()
//{
//	int a = 10;
//	int b = a << 1;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = -10;
//	int b = a << 1;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

int main()
{
	int a = -10;
	int b = a >> 1;
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}