#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char fruit[20] = "strawberry";

	printf("%s\n", fruit);
	strcpy(fruit, "banana");
	printf("%s\n", fruit);

} /*
char 배열에 문자열 저장 프로그램 예제 3-6,64
char fruit[20] = " starawberry";

	printf("딸기 : %s\n", fruit);
	printf("딸기잼 : %s %s\n", fruit, "jam");

	return 0;
*/