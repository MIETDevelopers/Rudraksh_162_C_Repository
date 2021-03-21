//Author:Rudraksh Vasudev
//Date of Creation:21/03/2021
//Purpose Of The Program:To read the string and give it as output. 			
#include <stdio.h>
int main()		//Main Function Body
{
    char name[20];		//Data and Array Declaration and Initialisation
    printf("Enter name: \n");		//Print Function Calling
    scanf("%s", &name); 	//Input Function.
    printf("Your name is %s.", name); //Print Function Calling
    return 0;
}
