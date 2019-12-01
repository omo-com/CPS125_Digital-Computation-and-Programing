#include <stdio.h>

double yards, miles;
main(void)
{
/*Part 6
6) Write another C program on paper (do not use the computer for this step) that creates a table of
distance equivalents in yards and miles for 100 m, 200 m, 400 m, and 800 m. You would input each
value into a variable and then convert it first to yards and then to miles by multiplying it by the
appropriate conversion factor. A meter is equivalent to 1.094 yards and 0.0006215 miles.
Your program should right justify all the numbers (see your printf notes from the
lectures), aligning them nicely in a column (table) form
Have the GA briefly inspect your program before starting to write it on the computer.
Once accepted, give yourself 1 accomplishment point.

7) Now enter your C program into Quincy, and run it. You could encounter two aspects where
corrections need to be made. First, it is possible that the quick GA check might not catch all of any
logic errors you might have created (programming which simply does not make sense or does not
properly cover the requirements the program is supposed to address); such errors are much easier to
spot once the code is actually in the machine. Second, although your coding on paper might be fine,
you may have introduced syntax errors as you typed in the program.
Removing both kinds of errors is known as "debugging", and you will almost certainly need to
"debug" your program. Programs without bugs are rarely, if ever, produced as a first attempt - and
certainly not once a certain level of complexity is present.



*/
	yards = 1.094;
	miles = 0.0006215;
	printf("       	    Conversion Table\n\n");
	printf("Metres (m)   100      200       400      800\n");
	printf("Yards (yd)   %0.1lf    %0.1lf     %0.1lf    %0.1lf\n", (yards*100),(yards*200),(yards*400),(yards*800));
	printf("Miles	     %0.4lf   %0.4lf    %0.4lf   %0.4lf", (miles*100),(miles*200),(miles*400),(miles*800));
	
}
