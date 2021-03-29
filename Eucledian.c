//Author:Rudraksh Vasudev
//Creation Date:18/3/2021
//Last Modification:18/3/2021
//Purpose of the program:To find the Euclidean distance between two points in a plane
#include<stdio.h>
#include<math.h>
int main()//main function body
{
   float x1, y1, x2, y2, x, y, distance;//Declearation of data type for variables x,y,x1,x2,y1,y2 and distance
   // taking first  point's coordinates
   printf("Enter first point: \n");
   scanf("%f %f",&x1, &y1);//taking user input in float data type
   // taking second point's coordinates
   printf("Enter second point: \n");
   scanf("%f %f",&x2, &y2);//taking user input in float data type

   x = (x2-x1);//assigning a value to decleared variable x
   y = (y2-y1);//assigning a value to decleared variable y

   distance = sqrt(x*x + y*y);//formula of distance between two points

   // display result
   printf("Distance = %f", distance);

   return 0;
}
