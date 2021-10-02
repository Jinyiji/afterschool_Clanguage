#include <stdio.h>
/*
작성자 : 진이지
작성일 : 2021년 3월 25일
중첩 반복문을 사용한 별 출력,
구구단 작성 프로그램
*/
int main(void)
{
	int i, j;	// ex 6-4.c

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
/* int a = 1;	// ex 6-1.c

while (a < 10)
{
	a = a * 2;
}
printf("a : %d\n", a);

return 0;


int a = 1;	// ex 6-2.c

	int i;
	for (i = 0; i < 3; i++)
	{
		a = a * 2;
	}

	printf("a : %d\n", a);

	return 0;
*/