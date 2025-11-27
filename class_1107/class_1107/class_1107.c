#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#include <stdio.h>
int main()
{
    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    int* ptr1 = (int*)(&aa + 1);
    int* ptr2 = (int*)(*(aa + 1));

    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
    return 0;
}



//假设环境是x86环境，程序输出的结果是啥？
#include <stdio.h>

//int main()
//{
//    int a[5][5];
//
//    int(*p)[4];
//    p = a;
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//
//    return 0;
//}
//



//int main()
//{
//    //int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//    int a[3][2] = { 1,3,5 };
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);
//    return 0;
//}



//在X86环境下
//假设结构体的大小是20个字节
//程序输出的结果是啥？
//struct Test
//{
//    int Num;
//    char* pcName;
//    short sDate;
//    char cha[2];
//    short sBa[4];
//} * p = (struct Test*)0x100000;
////p是一个结构体指针变量
//
//int main()
//{
//    printf("%p\n", p + 0x1);
//    printf("%p\n", (unsigned long)p + 0x1);
//    printf("%p\n", (unsigned int*)p + 0x1);
//
//    return 0;
//}

//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//
//    return 0;
//}



//int main()
//{
//    int a[3][4] = { 0 };
//    printf("%zu\n", sizeof(a));//3*4*4 = 48，a虽然是二维数组的数组名，单独放在sizeof内部，表示的是整个数组，计算的是整个数组的大小
//    printf("%zu\n", sizeof(a[0][0]));//4
//    printf("%zu\n", sizeof(a[0]));//16，a[0]是第一行的数组名，a[0]单独放在sizeof内部，a[0]表示第一行这个一维数组，计算的是第一行的大小
//    printf("%zu\n", sizeof(a[0] + 1));//4/8, a[0]是第一行的数组名,但是没有单独放在sizeof内部，a[0]就是首元素的地址，就是a[0][0]的地址
//    //a[0] + 1 是第一行第二个元素（a[0][1]）的地址
//    printf("%zu\n", sizeof(*(a[0] + 1)));//4, *(a[0] + 1) == a[0][1]
//    printf("%zu\n", sizeof(a + 1));//4/8， a是数组名，但是并不是单独放在sizeof内部
//    //a就是首元素(第一行)的地址，a+1是第二行的地址
//    //int(*)[4]
//    printf("%zu\n", sizeof(*(a + 1)));//16, a + 1是第二行这个数组的地址，类型是int(*)[4]， 解引用访问16个字节
//    //*(a+1) == a[1]
//    printf("%zu\n", sizeof(&a[0] + 1));//4/8，&a[0]是第一行的地址，&a[0]+1是第二行的地址
//    printf("%zu\n", sizeof(*(&a[0] + 1)));//16
//    printf("%zu\n", sizeof(*a));//16, *a;    *a == *(a+0) == a[0]
//    printf("%zu\n", sizeof(a[300]));//16, siseof内部的表达式不会真实计算，只是类型的推导
//    //a[3] => arr[0] == int [4]
//    return 0;
//}



//int main()
//{
//    char* p = "abcdef";
//    printf("%zu\n", strlen(p));//6
//    printf("%zu\n", strlen(p + 1));//5
//    //printf("%zu\n", strlen(*p));//err
//    //printf("%zu\n", strlen(p[0]));//err
//    printf("%zu\n", strlen(&p));//未知数
//    printf("%zu\n", strlen(&p + 1));//未知数
//    printf("%zu\n", strlen(&p[0] + 1));//5
//    return 0;
//}


//int main()
//{
//    char* p = "abcdef";
//    printf("%zu\n", sizeof(p));//4/8, p是指针变量，sizeof(p)是计算指针变量的大小
//    printf("%zu\n", sizeof(p + 1));//4/8， p里边存放的是a的地址，p+1是b的地址
//    printf("%zu\n", sizeof(*p));//1, p的类型是char*,解引用就访问1个字节
//    printf("%zu\n", sizeof(p[0]));//1, p[0]==*(p+0)==*p
//    printf("%zu\n", sizeof(&p));//4/8, &p是指针变量p的地址，虽然是二级指针，但是依然是指针变量，大小都是4/8
//    printf("%zu\n", sizeof(&p + 1));//&p + 1是地址，是地址大小就是4/8
//    printf("%zu\n", sizeof(&p[0] + 1));//4/8, &p[0]是‘a’的地址，&p[0]+1是'b'的地址
//    return 0;
//}
//


//int main()
//{
//    char arr[] = "abcdef";
//    printf("%zu\n", strlen(arr));//6，arr是首元素的地址, 因为有\0
//    printf("%zu\n", strlen(arr + 0));//6, arr是首元素的地址,arr+0还是首元素的地址
//    //printf("%zu\n", strlen(*arr));//err
//    //printf("%zu\n", strlen(arr[1]));//err
//    printf("%zu\n", strlen(&arr));//6,&arr是数组的地址，但是数组的地址值也是首元素的地址值
//    //char(*)[7] ---> const char*
//    printf("%zu\n", strlen(&arr + 1));//未知数，&arr是数组的地址,&arr+1是跳过数组后的地址
//    printf("%zu\n", strlen(&arr[0] + 1));//5
//    return 0;
//}


//int main()
//{
//    char arr[] = "abcdef";
//    printf("%zu\n", sizeof(arr));//7，计算的是整个数组的大小
//    printf("%zu\n", sizeof(arr + 0));//4/8, arr是数组首元素的地址，arr+0还是数组首元素的地址
//    printf("%zu\n", sizeof(*arr));//1, arr是数组首元素的地址, *arr就是首元素
//    printf("%zu\n", sizeof(arr[1]));//1, arr[1]是第二个元素
//    printf("%zu\n", sizeof(&arr));//4/8, &arr是数组的地址，是地址大小就是4/8
//    printf("%zu\n", sizeof(&arr + 1));//4/8,&arr + 1是跳过数组后的地址，是地址大小就是4/8
//    printf("%zu\n", sizeof(&arr[0] + 1));//4/8, &arr[0]是首元素的地址，&arr[0]+1是第二个元素的地址
//    return 0;
//}


//int main()
//{
//    char arr[] = { 'a','b','c','d','e','f' };
//
//    printf("%zu\n", strlen(arr));//未知数，因为数组中没有\0,但是strlen通知的是\0之前字符的个数，strlen会一直往后找，直到遇到\0，结果就不可预知
//    printf("%zu\n", strlen(arr + 0));//未知数，arr是数组首元素的地址，arr+0还是数组首元素的地址
//    //printf("%zu\n", strlen(*arr));//err, *arr是首元素 = ‘a’ == 97, 这里相当于将97作为地址传递给strlen,strlen就会把97当做地址，从这个地址向后访问数据
//    //会出现访问内存出错情况
//    //printf("%zu\n", strlen(arr[1]));//err, arr[1] == 'b' == 98，分析同上
//    printf("%zu\n", strlen(&arr));//未知数，&arr是数组的地址，从数组的地址开始向后找\0
//    printf("%zu\n", strlen(&arr + 1));//未知数，&arr是数组的地址, &arr+1是跳过这个数组后的地址
//    printf("%zu\n", strlen(&arr[0] + 1));//未知数，&arr[0] + 1是第二个元素的地址，
//    return 0;
//}


//int main()
//{
//    char arr[] = { 'a','b','c','d','e','f' };
//    printf("%zu\n", sizeof(arr));//6, arr是单独放在sizeof中，arr是表示整个数组，sizeof(arr)计算的是整个数组的大小
//    printf("%zu\n", sizeof(arr + 0));//4/8，arr是数组首元素的地址，arr+0还是数组首元素的地址，计算的是数组的首元素地址的大小
//    printf("%zu\n", sizeof(*arr));//1, arr是数组首元素的地址,*arr就是首元素
//    printf("%zu\n", sizeof(arr[1]));//1，计算的是第二个元素的大小
//    printf("%zu\n", sizeof(&arr));//4/8, &arr是数组的地址，是地址，大小就是4/8
//    printf("%zu\n", sizeof(&arr + 1));//4/8，&arr是数组的地址,&arr+1是跳过这个数组后的地址，大小就是4/8
//    printf("%zu\n", sizeof(&arr[0] + 1));//4/8，&arr[0] + 1是第二个元素的地址，大小就是4/8
//    return 0;
//}


//int main()
//{
//    int a[] = { 1,2,3,4 };
//    printf("%zu\n", sizeof(a));//4*sizeof(int)=16,这里的数组名就是整个数组
//    printf("%zu\n", sizeof(a + 0));//这里的数组名a是数组首元素的地址，a+0还是数组首元素的地址，地址的大小是4/8
//    printf("%zu\n", sizeof(*a));//4,这里的数组名a是数组首元素的地址,*a就是首元素a[0],a[0]==*(a+0)==*a
//    printf("%zu\n", sizeof(a + 1));//4/8个字节，a是数组首元素的地址,a+1是第二个元素的地址
//    printf("%zu\n", sizeof(a[1]));//4， 计算的是第二个元素的大小
//    printf("%zu\n", sizeof(&a));//&a，a表示整个数组，&a是整个数组的地址，但是整个数组的地址也是地址呀，只要是地址大小就是4/8
//    printf("%zu\n", sizeof(*&a));//16,&a，a表示整个数组，&a是整个数组的地址,数组的地址类型是int(*)[4],对数组指针解引用是访问这个数组的
//    //&和*是可以抵消的，sizeof(a) == 16
//    printf("%zu\n", sizeof(&a + 1));//4/8, &a是整个数组的地址,&a+1是跳过这个数组后的地址,是地址就是4/8个字节的长度
//    printf("%zu\n", sizeof(&a[0]));//&a[0]是首元素的地址，大小是4/8
//    printf("%zu\n", sizeof(&a[0] + 1));//&a[0] + 1是第二个元素的地址，大小是4/8
//    return 0;
//}





