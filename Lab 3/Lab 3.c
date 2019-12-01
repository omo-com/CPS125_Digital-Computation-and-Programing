#include <stdio.h>
#include <math.h>
int num1, num2, num3, num4, sum;
double q5;
int main (void)
{
/*Lab 3
1) Using Quincy, write a C program that will use a prompt (it will print out a line to ask the
user) to input 4 numbers into 4 integer variables (choose sensible names for these, eg num1, num2,
etc). Give yourself 1 accomplishment point.


*/
	printf("1) Please enter 4 integers (sepearte the integers with spaces then press enter): ");
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
	
/*
2) Next have your program produce and output the sum of those four numbers. Be sure the
output has a label which tells the user what the output value represents. (eg: Sum of the four
values is: 23) Give yourself 1 accomplishment point.
Always label output in this manner and be sure to prompt for all input values (unless explicitly
*/

	sum=num1+num2+num3+num4;
	printf("2) The sum of the 4 integers is: %d", sum);
	
/*
3) Next have your program output the sum of the first two numbers minus the sum of the last
two. As this is not a huge step forward, give yourself just 0.5 accomplishment points.
*/
	sum=(num1+num2) - (num3+num4);
	printf("\n3) %d", sum);
	
/*
4) Next have your program produce and output the sum of the squares of the four numbers. For
the same reason give yourself only another 0.5 accomplishment points.
*/

	sum = pow(num1,2) + pow(num2, 2) + pow(num3, 2) + pow(num4, 2);
	printf("\n4) The sum of integers to the power of 2 is: %d", sum);
	
/*
5) Next have your program produce and output the exact quotient (a real number with a decimal
point - a double) of the square root of the sum of the squares of the numbers, divided by the sum
of all the numbers. eg for input values 3 4 5 6 this is 0.51 [square root of (9+16+25+36) divided by
18]. Show the output with two decimal digits of accuracy.


*/
	q5 = sqrt(sum)/(num1 + num2 + num3 + num4);
	printf("\n5) The square root of the sum of the integers squared, all divided by the sum is: %0.2lf", q5);
}
	

