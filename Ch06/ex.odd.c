#include <stdio.h>

int main(void)
{
	int i, j;		// ±¸±¸´Ü
	for (i = 2; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("------------------\n");
	}

	return 0;
}