//Author:Rudraksh Vasudev
//Date of Creation:21/03/2021
//Purpose Of The Program:A C Program to swap two numbers using call by refrence
#include <stdio.h>
 //Main Function Body
void swap(int*, int*);
 
int main()
{
   int x, y;		//Data ANd Variable Declaration
 
   printf("Enter the value of x and y\n");		//Print Function Calling
   scanf("%d%d",&x,&y);			//Input Function
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);		//Print Function Calling
 
   swap(&x, &y); 		//Using Swap Function Call by Refrence
 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);		//Print Function calling
 
   return 0;
}
 //FUnction Definition
void swap(int *a, int *b)
{
   int temp;
   // Here swapping occurs.
   temp = *b;
   *b = *a;
   *a = temp;   
}
