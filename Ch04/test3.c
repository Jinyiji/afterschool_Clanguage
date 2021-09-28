#include <stdio.h>

int main(void)
{
	int hour, min, sec;
	double time = 3.76;

	hour = (int)time;
	time = time - hour;
	time = time * 60;
	min = (int)time;
	time = time - min;
	time = time * 60;
	sec = (int)time;
	printf("3.76시간은 %d시 %d분 %d초\n", hour, min, sec)

	return 0;
}