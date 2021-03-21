//Author:Rudraksh Vasudev
//Date of Creation:21/03/2021
//Purpose Of The Program:A C Program to print factorial using recursion.	 			
#include<stdio.h>
//Main Function Body
	long int multiplyNumbers(int n);		//Data and Variable Declaration
	int main() 
	{
    	int n;		//Data, VariableDeclaration and Initialisation
    	printf("Enter a positive integer: ");		//Print Function Calling
    	scanf("%d",&n);		//Input Function
    	printf("Factorial of %d = %ld", n, multiplyNumbers(n));		//Print Function Calling
    	return 0;		
	}

	long int multiplyNumbers(int n) {
    	if (n>=1)
        	return n*multiplyNumbers(n-1);
    	else
        	return 1;
}
