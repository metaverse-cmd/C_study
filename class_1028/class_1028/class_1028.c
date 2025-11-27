#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main()
{
	int a = 10;
	char c = 'w';
	void* pa = &a;
	pa = &c;
	printf("%c\n", *(char*)pa);
	//pa + 1;//err
	//*pa;//err
	return 0;
}


//int main()
//{
//	int a = 10;
//	int*  pa = &a;
//	char* pc = &a;//int*
//
//	printf("pa   = %p\n", pa);
//	printf("pa+1 = %p\n", pa+1);
//
//	printf("pc   = %p\n", pc);
//	printf("pc+1 = %p\n", pc+1);
//
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	char* pa = &a;//int*
//	*pa = 0;
//
//	return 0;
//}

//int main()
//{
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(long*));
//	printf("%zu\n", sizeof(long long*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	printf("%zu\n", sizeof(pa));
//
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%zu\n", sizeof(pc));
//
//	return 0;
//}

//%p -- 用来打印地址的信息，是以16进制的形式打印

//int main()
//{
//	int a = 10;
//	//printf("%p\n", &a);
//
//	int * pa = &a;//pa就是我们需要的指针变量
//	*pa = 100;//* -- 解引用操作符
//
//	a = 100;
//
//	printf("%d\n", a);//100
//
//	return 0;
//}



//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    printf("i = %d\n", i);
//    return 0;
//}


//int fun()
//{
//    static int count = 1;
//    return ++count;
//}
////2 3 4 5 6
//
//int main()
//{
//    int answer;
//    answer = fun() - fun() * fun();
//    printf("%d\n", answer);//输出多少？
//    return 0;
//}


