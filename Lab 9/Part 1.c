#include <stdio.h>
#include <math.h>

#define pi 3.1415926


typedef struct
{
	float line;
	float radius;
	float areacircle;
	float areacylinder;
	float volumecylinder;
}cylinder;


int main(void)
{


	cylinder shape;
	float rad, length, areaC1,areaC2, volume;
	printf("Enter the radius of the cylinder: ");
	scanf("%lf", &rad);
	printf("Enter the length of the cylinder: ");
	scanf("%lf", &length);
	
	areaC1 = 2*(pow(rad,2))*pi;
	areaC2 = 4*(pow(rad,2))*pi + 4*rad*pi*length;
	volume = 2*pow(rad,2)*pi*length;
	
	/*This declaration should work, I jsut don't know what the error is
	shape = {length, rad, areaC1, areaC2, volume};
	*/
	
	/*Figure out why argument type is wrong
	strcpy(shape.line, length);
	*/
	shape.line = length;
	shape.radius = rad;
	shape.areacircle = areaC1;
	shape.areacylinder = areaC2;
	shape.volumecylinder = volume;
	
	printf("The Surface Area of the Circle is: %0.3lf\n", shape.areacircle);
	printf("The Surface Area of the Cylinder is: %0.3lf\n", shape.areacylinder);
	printf("The Volume of the Cylinder is: %0.3lf\n\n", shape.volumecylinder);
	
	
}
