#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	FILE *fp;
	int *ptr;
	int sum = 0;
	ptr = (int *) malloc(200 * sizeof(int));
	fp = fopen("data.txt", "r");

	if(fp == NULL)
	{
		printf("Error!");
		exit(1);
	}
	fscanf(fp, "%d" ,ptr );
	while(fscanf(fp, "%d" ,ptr ) != EOF )
	{
		sum = sum + *ptr;
	}
	printf("%d \n", sum);
	fclose(fp);
	free(ptr);
	fp = fopen("result.txt", "w+");
	fprintf(fp ,"%d \n", sum);
	fclose(fp);
}
