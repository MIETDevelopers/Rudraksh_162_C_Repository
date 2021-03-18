//Author:Rudraksh Vasudev
//Creation Date:18/3/2021
//Last Modification:18/3/2021
//Purpose of the program:To check Area of Circle, Square and Rectangle based on user choice
#include <stdio.h> 
int main() 		//Main Function Body
{
   float area, side, radius, length, breadth;//Declarartion of data type and variables
	
	printf("\nEnter the radius of circle : ");
	scanf("%f",&radius);//Taking user input in float data type
	area = 3.14*radius*radius;//Formula for area of circle 
	printf("Area of the Circle = %f\n", area);//Printing the value for area of circle

	printf("\nEnter the side of square : ");
	scanf("%f",&side);//Taking user input in float data type
	area = side*side;//Formula for area of square 
	printf("Area of the square = %f\n", area);//Printing the value for area of sqaure
	
	printf("\nEnter the Length of Rectangle\n : ");
	scanf("%f", &length);//Taking user input in float data type
    printf("\nEnter the Breadth of Rectangle\n : ");
    scanf("%f", &breadth);//Taking user input in float data type
    area = length * breadth;//Formula for area of rectangle
    printf("\nArea of Rectangle : %f", area);//Printing the value for area of rectangle
    
	return(0);
}
