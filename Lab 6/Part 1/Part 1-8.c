#include <stdio.h>
int
main(void)
{
int a, b, c, larger, largest, smaller, smallest;
printf("Enter 3 integers: ");/*Part 1*/
scanf("%d %d %d", &a, &b, &c);
printf("%d\n", a);
printf("%d\n", b);
printf("%d\n", c);/*Part 2*/
	if(a>b)/*Part 3: Note this code assumes a and b are nto the same integer values*/
	{
		printf("%d is larger than %d.\n", a, b);
		larger = a;/*Part 4*/
	}
	else
	{
		printf("%d is larger than %d.\n", b, a);
		larger = b;
	}
	
	
	if(larger>c)/*Part 5: Note this code assumes larger and c are nto the same integer values*/
	{
		printf("%d is largest.\n", larger);
		largest = larger;
	}
	else
	{
		printf("%d is largest.\n", c);
		largest = c;
	}
	
	/*Part 6*/
	if(a<b)/* Note this code assumes a and b are nto the same integer values*/
	{
		printf("%d is smaller than %d.\n", a, b);
		smaller = a;
	}
	else
	{
		printf("%d is smaller than %d.\n", b, a);
		smaller = b;
	}
	
	
	if(smaller<c)/* Note this code assumes larger and c are nto the same integer values*/
	{
		printf("%d is smallest.\n", smaller);
		smallest = smaller;
	}
	else
	{
		printf("%d is smallest.\n", c);
		smallest = c;
	}
/*Part 7*/
printf("Middle value: %d.\n", (a+b+c-smallest-largest));
/*Part 8*/
printf("%d, %d, %d.\n,", smallest, (a+b+c-smallest-largest), largest);


return(0);
}

