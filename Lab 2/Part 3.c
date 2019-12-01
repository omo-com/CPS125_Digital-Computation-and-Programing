#include <stdio.h>

main(void)
{
/*Find the formula of the ellipse on the internet and write and run another C program that asks the user for both the long and short radiuses and then calculates and displays the circumference of the ellipse.
   A = Pi*a*b, Where a and b are the 2 different lengths fro mthe center of the eclipse.
*/
	double a,b,area;
	printf("Please enter the long and short radius (metres): ");
	scanf("%lf %lf", &a, &b);
	area = (3.14159*a*b);
	printf("Long Radius:     %7.2lf m\nShort Radius:    %7.2lf m\nArea of Ellipse: %7.2lf m^2", a, b, area); 	 
}
