#include <stdio.h>

main(void)
{/*Lab 2 Homework*/
	double reburst, start, end;
	printf("MILAGE REINBURSEMENT CALCULATOR\nEnter beginning odometer reading=> ");
	scanf("%lf", &start);
	printf("Enter ending odometer reading=> ");
	scanf("%lf", &end);
	reburst = (end-start)*0.35;
	printf("You traveled %0.1lf miles. At $0.35 per mile,\nyou reimbursement is $%0.2lf.", end-start, reburst);
	
}
