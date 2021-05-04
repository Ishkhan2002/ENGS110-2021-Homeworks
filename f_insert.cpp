#include <stdio.h>

int main()
{
	int array[100];
	int index, size, element, i;
	printf("Enter array size : ");
	scanf("%d", &size);
	for(i=0; i<=size-1; i++)
	{
		array[i]=i;
		printf("%d ", array[i]);
	}
	printf("\n");
	printf("Enter element to insert : ");
	scanf("%d", &element);
	printf("Enter index for element : ");
	scanf("%d", &index);
	for(i=size; i>=index+1; i--);
	{
		array[i]=array[i-1];
	}
	printf("\n");
	array[index]=element;
	size++;
	for(i=0; i<size; i++)
	{
		printf("%d ", array[i]);
	}
}
