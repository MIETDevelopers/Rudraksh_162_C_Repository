//Author:Rudraksh Vasudev
//Date of Creation:21/03/2021
//Purpose Of The Program:Simple Calculator Using Switch Case
#include<stdio.h>
int main()		//Main Function Body
{
    char operator;
    double a, b;
    printf("Enter an operator (+, -, *, /):"); //Print Function Calling
    scanf("%c", &operator); //Input Function.
    printf("Enter two operands:");		//Print Function Calling
    scanf("%lf %lf",&a, &b); //Input Function
    switch(operator) //Switch case is used to perfom the calculation case that is scanned (in line 6) based on user input.
    {
        case '+':
            printf("%.2lf + %.2lf = %.2lf",a, b, a+b); //Addition Function
            break;

        case '-':
            printf("%.2lf - %.2lf = %.2lf",a, b, a-b); //Subtraction Function
            break;

        case '*':
            printf("%.2lf * %.2lf = %.2lf",a, b, a*b); //Multiplication Function
            break;

        case '/':
            printf("%.2lf / %.2lf = %.2lf",a, b, a/b); //Division Function
            break;
            
    	default:			
        printf("Error! operator is not correct");		// operator doesn't match any case constant
    
    }
    return 0;
}
