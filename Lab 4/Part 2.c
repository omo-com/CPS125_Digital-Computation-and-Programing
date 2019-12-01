#include <stdio.h>
main(void)
{
/*
Find the error(s), if any, in each of these statements:
if (x = 1) printf ("x is 1");
if (x = 1);
if (x == 1) printf ("x is 1);
if (x == 1) if (x>100) printf ("OK");
if (x == 1) j=i;
if (x == 1) {j=j+x;k=100/j;}

if(x == 1) printf("x is 1");

if(x == 1)

if(x == 1) printf("x is 1");

if(x == 1)
else if(x>100) printf("OK");

if(x == 1) j=i;           <<<<<<<not sure if theres and problems here

if(x == 1) {j=j+x;k=100/j;}

to run, need to declare these varibles*/


/*
On paper only, write a complete C program that will ask a user for 3 integer numbers and will print out on the screen the two smallest values of the 3.
Show your solution to your TA.
Try your program in Quincy
*/
	int num1, num2, num3,i, o , temp;
	printf("Enter 3 integers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	if(num1==num2&&num2==num3)
	{
		printf("%d, %d, and %d are equal.", num1, num2, num3);
	}
	else if(num1<=num3&&num2<=num3)
	{
		printf("%d and %d", num1, num2);
	}
	else if(num1<=num2&&num3<=num2)
	{
		printf("%d and %d", num1, num3);
	}
	else if(num2<=num1&&num3<=num1)
	{
		printf("%d and %d", num2, num3);
	}
}
