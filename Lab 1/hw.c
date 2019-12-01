#include <stdio.h>
#define pi 3.14159

int
main (void)
{
	double r,area;
	printf("Please enter the radius of the circle (metres):");
	scanf("%lf", &r);
	area = pi*r*r;
	printf("Area of Circle is: %lf m^2", area);
	return (0);
}
