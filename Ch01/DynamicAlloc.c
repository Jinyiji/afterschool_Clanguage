#define SIZE 1000000
#include <stdio.h>

int main(void)
{
	int n = 1000000;
	int* a = (int*)malloc(sizeof(int) * n);
	a[0] = 10;
	printf("%d\n", a[0]);
	free(a);

	return 0;
}