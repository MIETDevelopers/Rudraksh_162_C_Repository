//Author: Rudraksh VAsudev
//Creation Date: 17/03/2021
//Last Modification:18/03/2021
//Purpose:To Add Two Numbers and Print Their Sum
#include<stdio.h>
int main()	//Main Body Fuinction	
{
	int a,b,sum;	//Data type and Variable Declaration And Initialisation 
	printf("\nEnter the value of a: "); 	//printf function
	scanf("%d",&a); 	//output function
	printf("\nEnter the value of b: "); 	//printf function call
	scanf("%d",&b); 	//output function
	sum=a+b; 	//variable declaration
	printf("\nSum of %d + %d = %d",a,b,sum); 	//printf function
}
