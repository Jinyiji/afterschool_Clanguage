#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, res; //4-12.C (108쪽)

	res = (a > b) ? a : b;
	printf("큰 값 : %d\n", res);

	return 0;
}
//int a = 10, b = 20; //4-11.C (106쪽)

//int res;
//res = (++a, ++b);
//printf("a:%d, b:%d\n", a, b);
//printf("res:%d\n", res);
//return 0;
