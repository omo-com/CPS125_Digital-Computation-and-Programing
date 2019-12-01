#include <stdio.h>
#include <math.h>

#define pi 3.141592654
int num;
double n;
main (void)
{
/*Discovery Activity:
Using your text book, or an Internet search (do not ask friends or TA) or simply by experimenting with Quincy,
explain in a few sentences the differences between the division (/) and the remainder (%) operators.

	/ is divisions, which tells you how many times a number fits into another. % is modulus which gives you the remainder.
*/

/*Homework:
*/
	
	printf("Enter a the number to be factoraled: ");
	scanf("%d", &num);
	printf("%d!: ",num);
	n = (pow(num,num)*exp(-num))*sqrt((2*num + 1.0/3.0)*pi);/*small not, watch out for 1/3 vs. 1.0/3.0*/
	printf("%0.5lf", n);

}
