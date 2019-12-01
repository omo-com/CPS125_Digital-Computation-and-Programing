#include <stdio.h>

main (void)
{
/*Part 4
1)  What is the difference between char and Char?

	char is a reserved word in C, while Char is not and can become an identifier.
	
2)  What is displayed by printf ("%d", 3/4); ?

	0 is displayed because printing %d outputs an rounded down integer. 3/4 = 0.75, therefor 
	it is roudned down to 0.
	
3)  Is printf ("%f", 50); valid?
	
	Valid, however, using %f to display 50 displays additional decmials.
	
4)  If you omit the ; at the end of a C statement, is it still working?

	No, you always need ; to run your code.
	
5)  What is the difference between %f and %lf?

	%lf is used for double, while %f is used for float.
	
6)  What happens when you attempt a division by zero in C?

	You get a compliing error that says division by zero, but will still allow the complier to 
	complete. Running the program creates an error saying there is a division by zero.
	
7)  Is the expression 35%15.3 valid?

	35%15.3 is not valid becasue you can not modulus an integer with a double. 
	
8)  Is there a difference between starting your program with main() instead of int main (void)?
	
	Both programs are still valid, but using void is considered technically better as it 
	clearly specifies that main can only be called without any parameter.
	
9)  What happens if you try to display an integer between 0 and 255 with a %c placeholder?

	The program will complie correctly, but the output of the coding will create an error 
	and display nothing because 
	the integer is not used for %c, a char.
	
10) Are the expressions 5/3, 5%3, 5.0/3 exactly the same?

	No. 5/3 outputs 1. 5%3 outputs 2. 5.0/3 outputs 1.66667 (double number).
	
	
	Part 5
	Using your text book or an Internet search (do not ask friends or TA!), explain in one sentence or two the difference between integer and double variables in C.
	
	Integers are a data type used to denote integer numbers, while doubles are a data type used to denote big floating numbers.
*/
}

