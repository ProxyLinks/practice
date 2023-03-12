#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char fname[20], lname[20];

	printf("Enter your first name:\n");
	scanf("%s", fname);
	printf("Enter your last name:\n");
        scanf("%s", lname);
	printf("Your name is %s %s\n", fname, lname);

	return 0;
}
