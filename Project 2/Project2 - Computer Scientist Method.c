/*
Oliver Mo
This Program uses the Computer Scientist anaylsis of 2 Dimensional Arrays.
Project #2 Assignment


*/

#include <stdio.h>

/*Must declare fuctions before the main function to avoid implicit declaration (calling something before it exist). Or, you can just put other methods before main*/
double getAverage(double **array, int r, int c);
double getCornersSum(double **array, int r, int c);
double getRow(double **array, int r, int c);
double getCol(double **array, int r, int c);
double getDiagonals(double **array, int r, int c);
double getBorders(double **array, int r, int c);

int
main(void)
{
	int row, col, i, p, num, rowF, colF;
	double **belly;/*Using pointer because you cannot declare an array with varibles, only with numbers. Since we must
					obtain the numbers from the txt file, point is used to allow us to declare the size of this array.
					Recall: You can only declare varibles in before any commands using C language. Thus you cannot 
					obtian the numbers form the file, then set the size of the array.*/
	
	FILE*in;
	in = fopen("Project2test1.txt", "r");/*text files are: Project2test1.txt & project2test2.txt */
	fscanf(in, "%d %d",&row, &col);/*Obtaining size of array from txt file*/
	
	belly= (double **) calloc (row,sizeof(double*));/*Obtaining the row for the 2-D pointer array*/
	for(i=0;i<row;i++)
	{
		belly[i] = (double*) calloc (col, sizeof(double));/*Adding the amount of columns per row of the array*/
	}
	
	for(i=0;i<row;i++)
	{
		for(p=0;p<col;p++)
		{
			fscanf(in, "%lf", &belly[i][p]);/*Scanning a single value to place into 2-Dimensional array*/
			printf("%7.3lf", belly[i][p]); /*Outputting the value at the array's position*/
		}
			printf("\n");
	}
	
	
		
	fscanf(in, "%d %d", &rowF, &colF);/*Intializing the specifc row and Columns to be used in the later functions*/

	do{/*[Optional]  Do while loop to ensure program continues to run until user no longer wants it to.*/
		
  	printf("\nEnter the one of the following numbers for the command.\n");
	printf("1) The average function calculates the average (mean) of all the numbers in the array.\n");
	printf("2) The corners function calculates the sum of the four corners of the array.\n");
	printf("3) The row function takes the array and a row number and returns the sum of all the numbers in that row.\n");
	printf("4) The column function takes the array and a column number and returns the average of all the numbers in that column.\n");
	printf("5) The diagonals function 'returns' the sum of all the numbers in the main diagonal and the sum of all the numbers in the anti-diagonal but only if the array is square (number of rows is the same as the number of columns).\n");
	printf("6) The borders function calculates the sum of all four borders (top row, bottom row, left column, right column).\n");
	printf("0) Exit Program\n\n");
	scanf("%d", &num);
	/*^ Outputting and intializing list of commands*/
	/*Using the inputed number, checks each case. If the number is valid, prints the return value of the following method*/
		if(num==1)
		{
			printf("\n1)%4.4lf\n", getAverage(belly, row, col));
		}
		else if(num==2)
		{
			printf("\n2)%4.3lf\n", getCornersSum(belly, row, col));
		}
		else if(num==3)
		{
			printf("\n3)Using Row #%d:%4.3lf\n", rowF, getRow(belly, rowF, col));
		}
		else if(num==4)
		{
			printf("\n4)Using Column #%d:%4.3lf\n", colF, getCol(belly, row, colF));
		}
		else if(num==5)/*Project ask user to get Diagonals only if array is a square*/
		{
			if(row==col)
			{
				printf("\n5)%4.3lf\n", getDiagonals(belly, row, col));
			}
			else
			{
				printf("\nArray is not a square, the following command is invalid.\n");
			}
		}
		else if(num==6)
		{
			printf("\n6)%4.3lf\n", getBorders(belly, row, col));
		}
		else if(num==0)
		{
			printf("\nYou think you hot shit eh boi? Yousaaa a ugry");/*random ending statment*/
		}
		else
		{
			printf("\nPlease input a valid command");
		}
	}while((num<=6&&num>0)||num!=0);/*If a inputed number is not 0, repeats the do while loop.*/
	
	
	for(i=0;i<row;i++)/*For using pointers. pointers are "*". Used to free space or something for 2-D arrays. Similiar to using fclose()*/
	{
		free(belly[i]);
	}
	
	free(belly);
	
	fclose(in);
	return 0;
}

double getAverage(double **array, int r, int c)
{

	int i, p;
	double avg=0;
	for(i=0;i<r;i++)
	{
		for(p=0;p<c;p++)
		{
			avg+= array[i][p];
		}
	}
	avg = avg/(r*c);
	return avg;
}

double getCornersSum(double **array, int r, int c)
{
	double sum= array[0][0] + array[0][c-1]+ array[r-1][0]+ array[r-1][c-1];/*Adds All Numbers, Top Left, Top Right, Bottem Left, Bottem Right*/	
	return sum;
}

double getRow(double **array, int r, int c)/*Let r be rowF from the list of varibles in the main function*/
{

	int p;
	double sum = 0;
	for(p=0;p<c;p++)
	{
		sum+= array[r-1][p];/*[r-1] because r is valued 1 greater thna a regular array*/
	}
	return sum;
}

double getCol(double **array, int r, int c)/*Let c be colF from the list of varibles in the main function*/
{
	int i;
	double sum = 0;
	for(i=0;i<r;i++)
	{
		sum+= array[i][c-1];/*[c-1] because the c is valued 1 greater than a regular array*/
	}
	return sum;
}

double getDiagonals(double **array, int r, int c)
{
	int i, p, temp;
	double sum=0;
	temp = r-1;/*Set random varible to the size of the row/column in terms of array numbering (i.e. size 5 is equal to 0,1,2,3,4)*/
	for(i=0;i<r;i++)
	{
		for(p=0;p<c;p++)
		{
			if(i==p||temp==p)/*Checks if i==p (top left to bottem right diagonal), or temp==p (top right to bottem left) while temp decreases once per row*/
			{
				sum+= array[i][p];
			}	 	 
		}
		temp--;
	}	 
	return sum;
}

double getBorders(double **array, int r, int c)
{

	int i, p;
	double sum=0;
	for(i=0;i<r;i++)
	{
		for(p=0;p<c;p++)
		{
			if(i==0||p==0||i==(r-1)||p==(c-1))/*Checks for first row & column in (i==o),(p==0). Last row & column (i==(r-1)),(p==(c-1)). [Recall: -1 because array] */
			{
				sum+= array[i][p];
			}	 
		}
	}
	return sum;
}
