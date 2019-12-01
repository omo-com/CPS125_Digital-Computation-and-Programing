/* Using functions with structures */
#include <stdio.h>
#include <string.h>
 
typedef struct
{
        char name [20];
        double diameter;
        int moons;
        double orbit;
        double spin;
} planets_t;
 
 
/* structure sent to function */
void
print_planet (planets_t p)
{
        printf ("------------------------------------------------------\n");
        printf ("%s\n", p.name);
        printf ("Diameter: %.1f km\n", p.diameter);
        printf ("Number of moons: %d\n", p.moons);
        printf ("Time to complete one orbit around the sun: %.1f years\n", p.orbit);
        printf ("Time to complete one rotation on the axis: %.1f hours\n", p.spin);
        printf ("------------------------------------------------------\n\n");
}
 
 
/* structure returned by value */
planets_t
get_planet (void)
{
        
        planets_t pl;
        
        printf ("Enter the planet's name: ");
        scanf ("%s", pl.name);
        printf ("Enter the planet's diameter in km: ");
        scanf ("%lf", &pl.diameter);
        printf ("How many moons orbit this planet? ");
        scanf ("%d", &pl.moons);
        printf ("How many years does it take for this planet to orbit the sun? ");
        scanf ("%lf", &pl.orbit);
        printf ("How many hours for one rotation around the axis? ");
        scanf ("%lf", &pl.spin);
 
        return (pl);
}
 
int
main (void)
{
        planets_t planet, planets[10];
 
        /* filling planet variable */
        planet =  get_planet ();
 
        /* filling cell 2 of planets array */
        planets[2] = get_planet ();
 
        /* displaying record of planet 2 */
        print_planet (planets[2]);

        /* displaying record of planet variable */
        print_planet (planet);

        /* copying planet variable into planet 0 */
        planets[0] = planet;

        /* displaying record of planet 0 */
        print_planet (planets[0]);
 
        return(0);
}
