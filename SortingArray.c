//Author: Rudraksh Vasudev
//Date Of Creration:20/03/2021
//Purpose Of The Program:To sort an array in ascending order using Insertion Sort.          
#include <stdio.h>
int main()		//Main Function Body
{
    int n, i, j, temp;		//Data and Variable Declaratin
    int arr[10];			//Data and Array Declaration
    //This will determine the limit of values according to user input.
    printf("Enter number of elements\n");		//Print Function Calling
    scanf("%d", &n);		//Input Function
 
    printf("Enter %d integers\n", n);		//Print Function Calling
    for (i = 0; i < n; i++)		//Using For Loop
    {
        scanf("%d", &arr[i]);		//Input Function
    }
    for (i = 1 ; i <= n - 1; i++) //Using for loop.
    {
	    j = i;
            while ( j > 0 && arr[j-1] > arr[j])
            {
            //Swap function will help for the purpose.       
                temp     = arr[j];
                arr[j]   = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
    }
    //This will give the output.
    printf("Sorted list in ascending order:\n");		//Print Function Calling
    for (i = 0; i <= n - 1; i++)		//Using For Loop
    {
        printf("%d\n", arr[i]);		//Prit Function Calling
    }
    return 0;		//Return Statement
} 
