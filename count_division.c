#include <stdio.h>

int main(void)
{
	int number = 500;
	int counter = 0;

	while(number > 1)
	{
		number = number / 2;
		counter++;
	}
	printf("2 will go in 500 %d times\n", counter);
return (0);
}
