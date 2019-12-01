#include <stdio.h>
main(void)
{
	int a1, a2, t1, t2;
	double avg;
	char grade;
/*Part 1&2*/
	printf("Enter the 2 marks for the assignment: ");
	scanf("%d %d", &a1, &a2);
	printf("Enter the 2 marks for the test: ");
	scanf("%d %d", &t1, &t2);
	printf("\nAssgiment 1:	  %d", a1);
	printf("\nAssgiment 2:	  %d", a2);
	printf("\nTest 1:	  	  %d", t1);
	printf("\nTest 2:	  	  %d", t2);
/*Part 3&4*/
	avg = (a1+a2+t1+t2)/4.0;
/*Part 5-8*/
/*Part 9 Start*/
	if(a1<50||a2<50)
	{
		avg= avg-10;
	}
/*Part 9 End*/ 
/*Part 10 Start*/
	if(t1<50||t2<50)
	{
		avg = 49;
	}
/*Part 10 End*/
	if(avg<50)
	{
		grade = 'F';
	}
	else if(avg<60)
	{
		grade = 'D';
	}
	else if(avg<70)
	{
		grade = 'C';
	}
	else if(avg<80)
	{
		grade = 'B';
	}
	else if(avg<=100)
	{
		grade = 'A';
	}
	printf("\n%c", grade);
}

