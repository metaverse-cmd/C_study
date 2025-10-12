#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	//scanf("%[0-9]",&ch);
//	//printf("%s",ch);
//	printf("---%c---", ch);
//	return 0;
//} 
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 2 != 0)                
//		printf("%d是奇数\n", n);
//	else
//		printf("%d是偶数\n", n);
//	return 0;
//}
int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age < 18)
		printf("未成年\n");
	else if (age <= 44)
		printf("青年\n");
	else if (age <= 59)
		printf("中老年\n");
	else if (age <= 89)
		printf("老年\n");
	else
		printf("老寿星\n");
	return 0;
}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe");
//	else
//			printf("haha");
//	return 0;
//}
