#include <stdio.h>

int main()

{
	int a;
	int b;

	printf("input the first number \n");
	scanf("%d", &a);
	printf("input the second number \n");
	scanf("%d", &b);
	int sum = a + b;
	printf("Sum of two numbers is %d\n", sum);
	return 0;
}
