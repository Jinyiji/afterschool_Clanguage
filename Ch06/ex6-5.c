#include <stdio.h>

int main(void)
{
	int i, j;	//test6-2.c

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("Be happy~\n");
			if (j == 2) break;
		}
	}

	return 0;
}
/* int i;	//ex 6-5.c
	int sum = 0;

	for (i = 1; i <= 10; i++)
	{
		sum += i;
		if (sum > 30) break;
	}
	printf("누적한 값 : %d\n", sum);
	printf("마지막으로 더한 값 : %d\n", i);

	return 0;


	int i, sum = 0;		// ex 6-odd.c 1~10까지 홀수만 더하기

	for (i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		sum = sum + i;
		printf("ing.. i = %d\n", i, sum);
		printf("마지막으로 더한 값 : %d\n", i);
	}

	return 0;
*/