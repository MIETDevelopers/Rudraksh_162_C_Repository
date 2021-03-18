//Author:Rudraksh Vasudev
//Creation Date:18/3/2021
//Last Modification:18/3/2021
//Purpose of the program:Factorial program in c using for loop
#include<stdio.h>
	int main(){//Main function body
  		int i,f=1,num;//declaration of data type and variables
 
  		printf("Enter a number: ");
  		scanf("%d",&num);//Taking user input in int data type
 
  		for(i=1;i<=num;i++)//Using for loop for increment with i=1
      		f=f*i;
 
  		printf("Factorial of %d is: %d",num,f);//Printf function calling
  		
  		return 0;
}
