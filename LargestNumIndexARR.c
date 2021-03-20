//Author: Rudraksh Vasudev
//Date Of Creration:20/03/2021
//Purpose Of The Program: To Find Max Element and Index In An Array
#include<stdio.h>
int main()		//Main Function Body
{
	int i;		//Data And Variable Declaration
	float arr[5];		//Data and Array Declaration and Initialisation

	printf("Please enter five numbers:\n ");		//Print Function Calling
//using nested for loop 
	for (i = 0; i < 5; ++i)
	{
    scanf("%f", &arr[i]);		//Input Function 
	}

		for (i = 1; i < 5; ++i)
		{
    	if (arr[0] < arr[i])		//Variable Initialisation
        	arr[0] = arr[i];		//Variable Initialisation
		}
	printf("Largest element = %.2f", arr[0]);		//Print Function Calling

	return 0;		//Return Statement
}
