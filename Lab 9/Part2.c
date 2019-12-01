#include <stdio.h>
#include <math.h>
/*
huge outputign error i never figured out


*/
#define E 30000000
#define pi 3.14529

typedef struct
{
	float p;
	float d;
	float stress;
	float strain;
}strength;

int main(void)
{
	strength thing;
	float load, dia, s1, s2, area;
	printf("Enter the compression load: ");
	scanf("%lf", &load);
	printf("Enter the diameter of the column: ");
	scanf("%lf", &dia);
	area=pi*pow(dia,2)/4;
	s1 = load/area;
	s2 = s1/E;
	
	thing.p = load;
	thing.d = dia;
	thing.stress = s1/*load/((pi*pow(dia,2))/4)*/;
	thing.strain = s2;/*thing.stress/E;/*experimenting with different intializations*/


	printf("Load:%0.3lf\n", thing.p);
	printf("Diameter: %.3lf\n", thing.d);
	printf("Stress: %.3lf\n", thing.stress);
	printf("Strain: %.3lf\n", thing.strain);


}
