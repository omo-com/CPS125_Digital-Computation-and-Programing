#include <stdio.h>

main (void)
{/*Write and run in Quincy a C program that does this:
Ask the user for a real number (like 316,501.6735) and display the rounded number to the nearest hundredth, and the nearest thousandth.
*/
	double num;
	printf("Enter a real decmial number (e.g 316,501.6735): ");
	scanf("%lf", &num);
	printf("Rounded - Hundredth:  %7.2lf\n        - Thousandth: %7.3lf", num, num);
	

}
