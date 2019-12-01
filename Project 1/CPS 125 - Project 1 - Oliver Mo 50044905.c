#include <stdio.h> 
#include <math.h>
main(void)
{
/*Part 1*/
	int sum, num, prev, square, num2, num21, check21;
	double gNum;
	num = 1;
	sum = 1;
	prev = 0;
	printf("%d", prev);
	while(sum<=1000000)
	{
		printf(", %d", sum);
		sum = sum+prev;
		prev = sum-prev;
		/*Part 2 Varible*/
		num++;
		/*Part 7 Varible*/
		if(num==21)
		{	
			check21 = 1;
			num21 = sum;
		}
	}
/*Part 2*/	 
	printf("\nThere are %d numbers.", num);
/*Part 3*/
printf("\n");
	square = 0;
	sum = 0;
	num2 = sqrt(sum);
		if(sum==pow(num2,2))
		{
			square++;
			/*Part 4*/
			printf("%d, ", sum);
		}
	sum = 1;
	prev = 0;
	while(sum<=1000000)
	{	
		num2 = sqrt(sum);
		if(sum==pow(num2,2))
		{
			square++;
			/*Part 4*/
			printf("%d, ", sum);
		}
		sum = sum+prev;
		prev = sum-prev;
	}
/*Part3*/printf("are perfect squares.");
	
/*Part4*/printf("\nThere are %d perfect squares.", square);
/*Part 5*/
printf("\n");
	sum = 1;
	prev = 0;
	while(sum<=1000000)
	{	
		sum = sum+prev;
		prev = sum-prev;
		/*Part 5*/
		if(prev>=1)
		{
			gNum = (double) sum/prev;
			printf("%0.4lf, ", gNum);
		}
	}
	/*Part 6*/
	printf("\nThe Golden Number is %0.3lf.", gNum);
	/*Part 7 (Refer to Part 1 to find the varible used for Part 7)*/
	printf("\n");
	if(check21==1)
	{
		printf("%d is the 21st number under 1000000 in the Fibonacci sequence.", num21);
	}
	else
	{
		printf("There are less than 21 numbers in the following sequence.");
	}
}
