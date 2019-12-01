#include <stdio.h>
int
main(void)
{	

	int x_arr[25], xhigh, xlow, n, x_second_arr[25], min, max;
	double norm_x_arr[25], total;
/*Part 1*/
	FILE *in;
	in = fopen("lab7.txt", "r");
	n=0;
	while(n<25)
	{
		fscanf(in, "%d", &x_arr[n]);
		n++;
	}
	for(n=0;n<25;n++)
	{
		printf("%d ", x_arr[n]);
	}
/*Part 2 & 3*/
xhigh = 0;
	for(n=0;n<25;n++)
	{
		if(xhigh<= x_arr[n])	   
		{
				xhigh = x_arr[n];
		}
	}
xlow = xhigh;
	for(n=0;n<25;n++)
	{
		if(xlow>= x_arr[n])
		{
			xlow = x_arr[n];
		}
	}
	printf("\n%d is the highest integer in the array.\n%d is the lowest integer in the array", xhigh, xlow);
/*Part 4*/
	printf("\nArray 1:");
	for(n=0;n<25;n++)
	{
		printf("%d ", x_arr[n]);
		x_second_arr[n] = 3*x_arr[n];
	}
	printf("\nArray 2:");
	for(n=0;n<25;n++)
	{
		printf("%d ", x_second_arr[n]);
	}
	
/*Part 5*/
	max = 1000;/*setting own personal set of max and min*/
	min = 0;
	printf("\nNormalized Array 1 with max of 1000 and min of 0:\n");
	for(n=0;n<25;n++)
	{
		norm_x_arr[n] =  (min + ((x_arr[n]*1.0)*(max-min)*1.0/(xhigh-xlow)*1.0));
		printf("%0.2lf ", norm_x_arr[n]);
	}
	fclose(in);
}


