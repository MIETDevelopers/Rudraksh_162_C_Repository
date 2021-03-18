//Author:Rudraksh Vasudev
//Creation Date:18/3/2021
//Last Modification:18/3/2021
//Purpose of the program:To check Area and Perimeter of Circle, Square and Rectangle
#include <stdio.h> 
int main() 			//Main Function Body
{ 			
   float area, perimeter, side, radius, length, breadth; 			//Data type and Variable declaration

    perimeter = 2*3.14*radius; 				//Variable Initialisation
    printf("Enter The Radius Of Circle: \n");			//print Function calling
    scanf("%f",&radius); 		//Input Function
    printf("Perimeter of the Circle = %f\n\n", perimeter); 		//Print function calling
	
	area = 3.14*radius*radius; 				//Variable initialisation
	printf("Enter The Radius Of Circle: \n");			//print Function calling
	scanf("%f",&radius);			//Input Function
	printf("Area of the Circle = %f\n\n", area);			//Print Function Calling

    perimeter = 4*side; 		//Variable Initialisation
    printf("Enter The Side Of Square: \n");			//print Function calling
    scanf("%f",&side); 		//Input Function
	printf("Perimeter of the square = %f\n\n", perimeter); 		//Print Function Calling
	
	area = side*side;			//Variable Initialisation
	printf("Enter The Side Of Square: \n");			//print Function calling
	scanf("%f",&side);			//Input Function
	printf("Area of the square = %f\n\n", area);			//Print Function Calling

	perimeter = 2*(length+breadth);			//Variable Initialisation
	printf("Enter The Length and Breadth of Rectangle: \n");			//print Function calling
	scanf("%f  %f",&length,&breadth);			//Input Function
	printf("Perimeter of the rectangle = %f\n\n", perimeter);			//Print Function Calling
	
	area = length*breadth;			//Variable Decleration
	printf("Enter The Length and Breadth Of Rectangle: \n");		//print Function calling
	scanf("%f  %f",&length,&breadth);			//Input Function
	printf("Area of the rectangle = %f\n\n", area);			//Print Function Calling

	return 0;		//Return Statement
}


