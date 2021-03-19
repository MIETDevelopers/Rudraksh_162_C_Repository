//Author:Rudraksh Vasudev
//Date Of Creation:19/03/2021
//Date Of Updation:19/03/2021
//Purpose Of The Program: To Determine The Maximum of N numbers Using 'For' Loop
#include<stdio.h>
int main() // Main Body 
{
int i; // Variable declaration
float arr[10]; // Declaring Array of size 5 with float data type 

printf("Please enter ten numbers:\n"); 		// Print Function Calling 

for (i = 0; i < 10; ++i)		//Using For Loop
{

    scanf("%f", &arr[i]);		//Input Function
}

for (i = 1; i < 10; ++i)		//Storing Largest N number in arr[0] using Nested Loop
{
    if (arr[0] < arr[i])
        arr[0] = arr[i];
}
printf("Largest element = %.2f", arr[0]); // Printf Function Calling   

return 0;		//Return Statement
} 
