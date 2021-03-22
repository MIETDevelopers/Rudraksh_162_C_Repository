//Author: Rudraksh Vasudev
//Creation Date: 22/03/2021
//Purpose: C Program to store Array of structures for student marks for each student and passing it to function for various operations
#include <stdio.h>
#include <string.h>
 
struct student 	//Stuct Datatype
{
     int id;		//Structure Fields
     char name[30];
     float percentage;
};
 
int main() 	//Main Function Body
{
     int i;		//Data and Variable Declaration and Initialisation
     struct student record[3];		//Struct Datatype Initialisation
 
     // 1st student's record
     record[0].id=1;
     strcpy(record[0].name, "ABC");
     record[0].percentage = 91.0;
 
     // 2nd student's record         
     record[1].id=2;
     strcpy(record[1].name, "XYZ");
     record[1].percentage = 88.6;
 
     // 3rd student's record
     record[2].id=3;
     strcpy(record[2].name, "EFG");
     record[2].percentage = 87.3;
 
     for(i=0; i<3; i++)
     {
         printf(" Records of STUDENT : %d \n", i+1);		//Print Function Calling
         printf(" Id is: %d \n", record[i].id);		//Print Function Calling
         printf(" Name is: %s \n", record[i].name);		//Print Function Calling
         printf(" Percentage is: %f\n\n",record[i].percentage);		//Print Function Calling
     }
     return 0;		//Return Statement
}
