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
//		printf("%d������\n", n);
//	else
//		printf("%d��ż��\n", n);
//	return 0;
//}
int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age < 18)
		printf("δ����\n");
	else if (age <= 44)
		printf("����\n");
	else if (age <= 59)
		printf("������\n");
	else if (age <= 89)
		printf("����\n");
	else
		printf("������\n");
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
