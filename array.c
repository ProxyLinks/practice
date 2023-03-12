#include <stdio.h>

int main()
{
	int i;
	int array[5];

	printf("Enter the elements of the array:\n");

	for(i = 0; i < 5; i++)
	{
	scanf("%d", &array[i]);
	}

	for(i = 0; i < 5; i++)
	{
	printf("\nThe element at index %d is: %d\n",i,array[i]);
	}
	for(i = 4; i >= 0; i--)
        {
        printf("\nThe element at index %d is: %d\n",i,array[i]);
        }
return 0;
}
