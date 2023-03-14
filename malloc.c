#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, n;
	printf("Input your numbers: \n");
	scanf("%d", &n);

	int *ptr = (int *)malloc(5*sizeof(int));

	if(ptr == NULL)
	{
	printf("There is no enough memory available\n");
	}

	for(i=0; i<5; i++)
	{
		printf("Input your value: \n");
		scanf("%d", ptr+i);
	}

	for(i=0; i<5; i++)
	{
		printf("You have entered 1 number at index %d which is %d\n", i,*ptr+i);
	}

	return (0);
}
