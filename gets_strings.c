#include<stdio.h>

int main()
{
	char text[30];
	printf("Enter text");
	fgets(text);
	printf("%s\n", text);
	puts(text);
}
