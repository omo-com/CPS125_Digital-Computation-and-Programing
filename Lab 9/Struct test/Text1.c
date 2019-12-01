/* An example of structures */

#include <stdio.h>

/* the planets structure */
typedef struct 
{
	char name [10];
	double diameter;
	int moons;
	double orbit, rotation;
} planets_t;
 
/* the solar systems structure contains a planets type element */
typedef struct 
{
	double diameter;
	planets_t the_planets[8];
	char galaxy [10];
} solar_systems_t;

int
main(void)
{
planets_t planet = {"Earth", 1000, 1, 1.0, 24.0};
solar_systems_t solarsystem;
 
printf ("The planet %s has %d moon(s).\n", planet.name, planet.moons);
 
solarsystem.the_planets[2] = planet;
 
strcpy (planet.name, "Jupiter");
planet.diameter = 142980;
planet.moons = 16;
planet.orbit = 11.9;
planet.rotation = 9.925;
 
printf ("Planet %s has %d moon(s).\n", planet.name, planet.moons);
printf ("Planet %s has %d moon(s).\n", solarsystem.the_planets[2].name, 
					solarsystem.the_planets[2].moons);
 
return(0);
 
}
