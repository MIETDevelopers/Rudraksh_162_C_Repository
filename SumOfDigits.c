//Author:Rudraksh Vasudev
//Date Of Creation:19/03/2021
//Date Of Updation:19/03/2021
//Purpose Of The Program: To Find The Sum Of Digits Of Number In C
#include <stdio.h>
int main()		//Main Function Body
{
 int num,temp, sum = 0, remainder;		//Data and Variable Declaration

   printf("Enter an integer: \n");		//Print Function Calling
   scanf("%d", &num);		//Input Function

   temp = num;		//Variable Initialisation
//Using While To Determine The Sum of Digits Of Numbers
   while (temp != 0)
   {
      remainder = temp % 10;
      sum = sum + remainder;
      temp = temp / 10;
   }

   printf("Sum of digits of %d = %d\n", num, sum);		//Print Function Calling

   return 0;		//Return Satement
}

