#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number[10],i;
	int odd=0;
	int even=0;

	printf("Enter the numbers:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&number[i]);
	}
	for(i=0;i<10;i++)
	{
		if(number[i]%2==0)
			even++;
		else
			odd++;
	}
	printf("These are even numbers: %d", even);
	printf("\nThese are odd numbers: %d\n", odd);
return 0;	
}
