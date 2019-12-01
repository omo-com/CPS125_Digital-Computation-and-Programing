#include <stdio.h>

int checkdiag (int **matrix, int size); /*Declaring Function prior to main function.(Required unless function is already placed before main*/

int 
main(void)
{
	
	int size, i, p;
	int **mat;
					/*Using pointer because you cannot declare an array with varibles, only with numbers. Since we must
					obtain the numbers from the txt file, point is used to allow us to declare the size of this array.
					Recall: You can only declare varibles in before any commands using C language. Thus you cannot 
					obtian the numbers form the file, then set the size of the array.*/

	FILE*in;
	in = fopen("matrix1.txt", "r");/*text files are: matrix1.txt   matrix2.txt  matrix3.txt  matrix4.txt */
	fscanf(in, "%d",&size);/*Obtaining size of array from txt file*/
	mat = (int**) calloc (size,sizeof(int*));/*Obtaining the row for the 2-D pointer array*/
	for(i=0;i<size;i++)
	{
		mat[i] = (int*) calloc (size, sizeof(int));/*Adding the amount of columns per row of the array*/
	}
	
	for(i=0;i<size;i++)
	{
		for(p=0;p<size;p++)
		{
			fscanf(in, "%d", &mat[i][p]);/*Scanning a single value to place into 2-Dimensional array*/
			printf("%d ", mat[i][p]); /*Outputting the value at the array's position*/
		}
		printf("\n");
	}
	for(i=0;i<size;i++)/*For using pointers. pointers are "*". Used to free space or something for 2-D arrays. Similiar to using fclose()*/
	{
		free(mat[i]);
	}
	if((checkdiag(mat, size))==1)
	{
		printf("\nThe matrix is a %dx%d and all the numbers on the main diagonal are the same.\n", size, size);
	}
	else
	{
		printf("\nThe matrix is a %dx%d and all the numbers on the main diagonal are not the same.\n", size, size);
	}	 
	free(mat);
	fclose(in);
	
}
int checkdiag (int **matrix, int size)
{
	int i, n;
	n = 0;
	if(size<=100)
	{
		for(i=0;i<size;i++)
		{
			if(matrix[i][i]==matrix[0][0])
			{
				n++;
			}
		}	
		if(n==size)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
