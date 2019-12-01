#include <stdio.h>
#include <stdlib.h>

void array_out(int arr_param[], int size);
int count_zeros(int *arr_param,int size);

int count_negs(int *arr_param, int size)
{
	int i;
	int num =0;
	for(i=0;i<size;i++)
	{
		if(arr_param[i]<0)
		{
			num++;
		}
	}
	return num;
}

int main(void)
{
	int i, *arr, how_many;
	FILE*in;
/*Part 1*/
	int *ptr_1 = malloc(7*sizeof(int));/*Can also do: ptr_1 = malloc(sizeof(int[7])); or ptr_1 = malloc(7*sizeof *ptr_1);*/
	printf("Part 1");
	for(i=0;i<7;i++)
	{
		printf("%d ", ptr_1[i]);
	}
	printf("\n\n");
/*Part 2*/
	arr = (int*) calloc (5,sizeof(int*));
	for(i=0;i<5;i++)
	{
		arr[i] = i;/*Filling array with any numbers, using i cause life is easier.*/
	}
	for(i=0;i<5;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("Part 2");
	printf("\n\n");
/*
Is the pointer itself, arr, dynamically allocated or is it a normal "static" variable like any other variable
declared in a function (eg int x; )?

arr is dynamically allocated becasue we used calloc/malloc to help set the size of the array. However, theres no 
point to dynamically allocated the array arr because we set it at static number of 5. Where as, with dynamic 
allocation, set the size of the array within the function using user input, methods, or from a file.
***I think I didn't ask the TA but This might be the answer*/

/*Part 3*/
	arr = (int*) calloc (40,sizeof(int*));
	for(i=0;i<5;i++)
	{
		arr[i] = 5+i;/*more randomish numbers*/
	}
	printf("Part 3:");
		for(i=0;i<5;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n");
/*Part 4*/
	in = fopen("lab8part2.txt", "r"); /*I used number 6 in the text file cause I like number 6 and its the numbero n my ultimate jersey, fun facts*/
	fscanf(in, "%d", &how_many); 
/*Part 5 - I actually don't know what this part is asking for*/
	arr = (int*) calloc (how_many,sizeof(int*));
/*Is this allocating the exact amount needed or an excessive amount of dynamic memory? 
Wdf does this even mean?
*/
	printf("Part 5: ");
	for(i=0;i<how_many;i++)
	{
		fscanf(in, "%d", &arr[i]);
	}
	for(i=0;i<how_many;i++)/*for some reason, they say you shouldn ot generally input and output in the same loop*/
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n");
/*Part 6*/	  
	printf("Part 6: ");
	array_out(arr, how_many);/*Calling void function. Recall, declare or intialize a function before the main function*/
	printf("\n\n");
	
/*Part 7*/
	printf("There are %d zeros.\nThere are %d negative numbers.", count_zeros(arr, how_many), count_negs(arr, how_many));
	fclose(in);
	free(ptr_1);
	free(arr);
}

void array_out(int arr_param[], int size)
{
	int i;
	printf("\nSize of array: %d\n", size);
	for(i=0;i<size;i++)
	{
		printf("%d ", arr_param[i]);
	}

}

int count_zeros(int *arr_param, int size)
/*You can use either, int *arr_param, or int arr_param.  While testing, there is no difference in using pointers vs 
regular arrays as a parameter. You can have a pointer array and placed into the function without a pointer parameter
ex. int *arr... being used in function int count_zeros(int arr_param[], int size). Or vice versa, regular array into pointer parameter.
 However, that is not the case for 2-D arrays. Must match pointers array with pointer parameter
 ex. int**arr ... being used int count_zeros(int **arr_param, int size). Using a static 2-D array into the pointer parameter results in 
 a passing error I have yet to solve. */
{
	int i;
	int num=0;
	for(i=0;i<size;i++)
	{
		if(arr_param[i]==0)
		{
			num++;
		}
	}
	return num;
}


