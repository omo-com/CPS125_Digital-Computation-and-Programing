#include <stdio.h>

int
main (void)
{/*Lab # 2
	int a = 3; b = 4, e;
	Double f = 4, c, d;

	d = a + b;
	c = a / (f - b);
	printf (The value of d is %d"\n, d)
	return (0);
	*/
	int a, b, e;
	double f,c,d;
 	a = 3;
	b = 4;
	f = 4;
	d = a + b;
	c = a/(f - b);
	printf("The value of d is %0.2lf\n", d);
	return(0);
}
