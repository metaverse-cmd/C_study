#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int Func(int n, int k)
//{
//	if (k == 1)
//	{
//		return n;
//	}
//	return n * Func(n, k - 1);
//}
//int main()
//{
//	printf("%d\n", Func(2, 3));
//	return 0;
//}


//int DigitSum(n)
//{
//	if (n < 10)
//	{
//		return  n;
//	}
//	else
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	printf("%d\n", DigitSum(n));
//	return 0;
//}

//int fac(int n)
//{
//	int ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	int ret = fac(a);
//	printf("%d\n",ret);
//	return 0;
//}

//int fac2(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	return n * fac2(n - 1);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = fac2(a);
//	printf("%d\n", ret);
//	return 0;
//}

//void Print(int n)
//{
//	if (n < 10)
//	{
//		printf("%d ", n);
//	}
//	else
//	{
//		Print(n / 10);
//		printf("%d ", n % 10);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	Print(a);
//	return 0;
//}

//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = fib(n);
//	printf("%d\n", r);
//	return 0;
//}

//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	while (n>2)
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
//	int r = fib(n);
//	printf("%d\n", r);
//	return 0;
//} 

//int  Func(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	return n * Func(n, k - 1) ;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	int num = Func(n, k);
//	printf("%d\n", num);
//	return 0;
//}



//00001001
//00000011
//00001010
//
//00001100
//00000101
//00000100


//int Func(int arr[], int len)
//{
//	int ret = 0;
//	for (int i = 0; i < len; i++)
//	{
//		ret ^= arr[i];
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,4,3,2,1 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", Func(arr, len));
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前：a =%d b = %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后：a =%d b = %d\n", a, b);
//	return 0;
//}
////当a和b特别大时，会超出整形的最大值

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前：a =%d b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b; 
//	a = a ^ b;
//	printf("交换后：a =%d b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int count = 0;
//	while (a)
//	{
//		if ((a % 2) == 1)
//			count++;
//		a / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int count = 0;
//	scanf("%d", &a);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//			count++;
//	}
//	printf("%d\n", count);
//
//	return 0;
//} 


//int main()
//{
//	int a = 0;
//	int count = 0;
//	scanf("%d", &a);
//	int i = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	printf("%d\n", count);
//
//	return 0;
//} 

//void Func(int n)
//{
//	printf("奇数位：");
//
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位：");
//
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	Func(a);
//	return 0;
//}

//int func(int m, int n)
//{
//	int ret = m ^ n;
//	int count = 0;
//	while (ret != 0)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	printf("%d", func(m, n));
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}

#include <string.h>
//void Reserve(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char str[10000] = { 0 };
//	while (gets(str))
//	{
//		Reserve(str);
//		printf("%s\n", str);
//	}
//	return 0;
//}

//void leftRound(char* str, int k)
//{
//	int len = strlen(str);
//	int time = k % len;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < time; i++)
//	{
//		char tmp = str[0];
//		for (j = 0; j < len - 1; j++)
//		{
//			str[j] = str[j + 1];
//		}
//		str[j] = tmp;
//	}
//}
//int main()
//{
//	char str[] = "abcdef";
//	leftRound(str,2);
//	printf("%s\n", str);
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


//void func(int arr[], int len)
//{
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		while (left < right && arr[left] % 2 != 0)
//		{
//			left++;
//		}
//		while (left < right && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//	}
//}
//void print(int arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	func(arr, len);
//	print(arr, len);
//	return 0;
//}

#include <assert.h>
//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	assert(str);
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zu\n", len);
//	return 0;
//}

//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	assert(str);
//	const char* start = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zu\n", len);
//	return 0;
//}

size_t my_strlen(const char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + my_strlen(str + 1);
	}
}
int main()
{
	char arr[] = "abcdef";
	size_t len = my_strlen(arr);
	printf("%zu\n", len);
	return 0;
}