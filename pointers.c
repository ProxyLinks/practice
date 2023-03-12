#include <stdio.h>

int main(){
	
	int a;
	int b;
	
	int *p = &a;
	int *p2 = &b;
	printf("The memory address of variable 'a' is %p\n", &a);
	printf("The memory address of variable 'b' is  %p\n", &b);
	
	return 0;

}
