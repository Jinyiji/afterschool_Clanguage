#include <stdio.h>

int main(void) {

	int arr1[] = { 2, 3, 0, 0, 4, 0, 6 };
	int n = sizeof(arr1) / sizeof(arr1[0]);

	int arr2[7];
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr1[i] != 0) {
			arr2[j] = arr1[i];
			j = j + 1;
		}
	}
	for (int i = j; i < n; i++)
	{
		arr2[i] = 0;
	}
	for (int i = 0; i < n; i++)
		printf("%d", arr2[i]);

	return 0;
}