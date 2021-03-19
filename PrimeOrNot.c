//Author:Rudraksh Vasudev
//Date Of Creation:19/03/2021
//Date Of Updation:19/03/2021
//Purpose Of The Program: To Check Whether Entered Number is 'Prime' or not
#include <stdio.h>
int main()		//Main Function Body
{
   int n, i, count = 0;		//Data and Variable Declaration
 
    printf("Enter the Number.\n");		//Print Function Calling
    scanf("%d",&n);		//Input Function
 
    for(i=2; i<=n/2; i++)		//Using 'For' Loop To check Non Prime number
    {
        if(n%i==0)
        {
            count=1;
            break;
        }
    }
    //This will give the output.
    if (count==0)
        printf("%d is a Prime number.",n);		//Print Function Calling
    else
        printf("%d is not a Prime number.",n);		//Print Function Calling
 
    return 0;    //Return statement
}
