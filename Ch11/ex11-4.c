#include <stdio.h>

void my_gets(char* str, int size);
int main(void)
{
	char ch;
	int i;

	for (i = 0; i < 3; i++)
	{
		scaanf("%c", &ch);
		printf("%c", ch);
	}
	return 0;
}
