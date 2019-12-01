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
largest = max_of_3(a, b, c);
smallest = min_of_3(a, b, c);
printf("%d is largest.\n%d is smallest.", largest, smallest);
return(0);
}

int max_of_3(int x, int y, int z)
{
int larger, largest;
	if(x>y)/*Part 3: Note this code assumes a and b are nto the same integer values*/
	{
		
		larger = x;/*Part 4*/
	}
	else
	{
		
		larger = y;
	}
	
	
	if(larger>z)/*Part 5: Note this code assumes larger and c are nto the same integer values*/
	{
	
		return larger;
	}
	else
	{
		
		return z;
	}
}
/*Part 10*/
int min_of_3(int x, int y, int z)
{
int smaller, smallest;
	if(x<y)/*Part 3: Note this code assumes a and b are not the same integer values*/
	{
	
		smaller = x;/*Part 4*/
	}
	else
	{
		
		smaller = y;
	}
	
	
	if(smaller<z)/*Part 5: Note this code assumes smaller and c are to the same integer values*/
	{
		
		return smaller;
	}
	else
	{
		
		return z;
	}
}

