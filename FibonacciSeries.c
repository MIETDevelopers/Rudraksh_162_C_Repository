//Author: Rudraksh Vasudev
//Creation Date:19/03/2021
//Date Of Updation:19/03/2021
//Purpose Of The Program: To Print The Fibonacci Series
#include <stdio.h>
int main()		//Main Function Body
{
    int i, n, t1 = 0, t2 = 1, nextTerm;		//Data Type and Variable Declaration
    printf("Enter the number of terms: ");		//Print Function Calling
    scanf("%d", &n);		//Input Function
    printf("Fibonacci Series: ");		//Print Function Calling

    for (i = 1; i <= n; ++i)		//Using 'For' Loop 
	{
        printf("%d, ", t1);		//Print Function Calling
        nextTerm = t1 + t2;		//Variable Initialisation
        t1 = t2;				//Variable Initialisation
        t2 = nextTerm;			//Variable Initialisation
    }

    return 0;		//Return Statement
}
