//Author:Rudraksh Vasudev
//Date of Creation:21/03/2021
//Purpose Of The Program:Program for showing working of fgets() & puts()
#include <stdio.h>
int main()		//Main Function Body
{
    char name[30];		//Data And Array Declaration and Initialisation
    printf("Enter name: \n");		//Print Function Calling
    fgets(name, sizeof(name), stdin);  // Read(scan) string
    printf("Name: ");		//Prnt Function Calling
    puts(name);    // Display(print) string
    return 0;		//Return Statement
}
