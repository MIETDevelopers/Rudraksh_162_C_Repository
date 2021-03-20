//Author: Rudraksh Vasudev
//Date Of Creration:20/03/2021
//Purpose Of The Program:To search an element in the array based on user choice.        
#include <stdio.h>
void main(){  //In this program we are not using 'return 0', So 'int main() -> void main()'.
    int num;        //Data and variable Declaration
    int i,  keynum, found = 0;      //Variable Initialisation
 
    printf("Enter the number of elements: \n");     //Print Function Calling
    scanf("%d", &num);//Input Function
    int array[num]; //Array Declaration and initialisation
    printf("Enter the elements one by one: \n");        //Print Function Calling
    for (i = 0; i < num; i++)       //Using For Loop
    {
        scanf("%d", &array[i]); //Input Function
    }
 
    printf("Enter the element to be searched: ");      //Print Function Calling
    scanf("%d", &keynum);       //Input Function
    // This step will determine Linear search.
    for (i = 0; i < num ; i++)
    {
        if (keynum == array[i] )
        {
            found = 1;
            break;
        }
    }
    //This will give the output based on user input.
    if (found == 1) 
        printf("Element is present in the array at position %d .",i+1); //Print Function Calling
    else
        printf("Element is not present in the array.\n");   //Print Function Calling
}