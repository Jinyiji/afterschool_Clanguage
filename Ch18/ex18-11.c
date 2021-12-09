#include <stdio.h>

int main(void)
{
	FILE* afp, * bfp;
	int num = 10;
	int res;

	afp = fopen("a.txt", "wt");
	fpriintf(afp, "%d", num);

	bfp = fopen("b.txt", "wb");
	fwrite(&num, sizeof(num), 1, bfp);
	fclose(afp);
	fclose(bfp);

	bfp = fopen("b.txt", "rb");
	fread(&res, sizeof(res), 1, bfp);
	printf("%d", res);

	fclode(bfp);

	return 0;
}