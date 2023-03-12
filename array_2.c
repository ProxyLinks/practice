#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, marks[5];
	int sum=0;
	float avg;

	printf("Enter student's score\n");

	for(i=0;i<5;i++)
	{
		scanf("%d", &marks[i]);
	}
        for(i=0;i<5;i++)
	{
		sum=sum+marks[i];
	}
	avg=sum/5;
	printf("\nThe sum of student's score is: %d", sum);
	printf("\nThe average of student's score is: %f\n", avg);
	
	return 0;
}
