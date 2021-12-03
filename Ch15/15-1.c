#include <stdio.h>

int main(void) {
	double grade = 4.5;
	double* pg = &grade;
	double** ppg = &pg;
	
	printf("%.1lf\n", **ppg);
	printf("%u\n", &ppg);
	printf("%u\n", *pg);
	printf("%u\n", *ppg);
	printf("%u\n", &*ppg);

	return 0;
}
/*		//15-2.c
int a = 10, b = 20;
int* pa = &a, * pb = &b;
int** ppa = &pa, ** ppb = &pb;
int* pt;

pt = *ppa;
*ppa = *ppb;
*ppb = pt;

printf("a:%d, b:%d\n", a, b);
printf("*pa:%d, *pb:%d\n", *pa, *pb);
*/