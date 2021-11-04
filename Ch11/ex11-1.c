#include <stdio.h>

int main(void)
{
	char small, cap = 'G';

	if ((cap >= 'A') && (cap <= 'Z'))
	{
		small = cap + ('a' - 'A');
	}
	printf("대문자 : %c %c", cap, '\n');
	printf("소문자 : %c", small);

	return 0;
}
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void){		
	char ch;
	printf("문자 입력 : ");
	scanf("%c", &ch);
	printf("%c 문자 => 아스키값 %d \n", ch, ch);

	return 0;
}*/