#include <stdio.h>
#include "Add.h"
int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	int sum = Add(a, b);
	printf("%d\n", sum);

	return 0;
}

