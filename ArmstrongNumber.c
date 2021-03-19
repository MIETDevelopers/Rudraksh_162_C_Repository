//Author:Rudraksh Vasudev
//Date Of Creation:19/03/2021
//Date Of Updation:19/03/2021
//Purpose Of The Program:To Check Whether Entered Number Is Armstrong Number Or Not 
#include <stdio.h>
int main() 		//Main Function Body
{
  int num, originalNum, remainder, result = 0;			//Data and Variable Declaration
  printf("Enter a three-digit integer: \n");			//Print Function Calling
  scanf("%d", &num);			//Input Function
  originalNum = num;			//Variable Initialisation
//Using While Loop
  while (originalNum != 0) 
  {
     // remainder contains the last digit
    remainder = originalNum % 10;
        
    result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
    originalNum /= 10;
  }

  if (result == num)
      printf("%d is an Armstrong number.", num);			//Print Function Calling
  else
      printf("%d is not an Armstrong number.", num);		//Print Function Calling

  return 0;
}
