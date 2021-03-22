//Author: Rudraksh Vasudev
//Creation Date: 22/03/2021
//Purpose: C Program for printing a table and take input from user 

#include <stdio.h>  	//Standard header filre for input and output
 
int main()   //Main Function Body
 {
     int n,a;  // Data Type and Variables Declaration and Initialisation
     printf("Enter an integer: \n"); // print Function Calling
     scanf("%d", &n); 	//Input Function
    for (a = 1; a <= 10; a++)		//Using For Loop 
	{
        printf("%d X  %d = %d \n", n, a, n * a);		//Print Function Callinhg
    }
    return 0;		//Return Statement 
}
