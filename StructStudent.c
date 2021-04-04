//Author:Rudraksh Vasudev
//Date:22/3/2021
//Purpose Of The Program:To store the information of student marks using structures and find total marks of individual student
#include <stdio.h>
struct student		//Structure Datatype
//Memebers Or Fields Of Structure
{
    char name[20];
    int rno;
    float sub1;
    float sub2;
    float sub3;
    float sub4;
    char grade;
};
int main()		//Main Function Body
	{
    int n,i=0;		//Data and variable Declaration and Initialisation
    printf("Enter the number of students: \n");		//Print Function Calling
    scanf("%d",&n);		//Input Function
    struct student students[n];		//Struct Datatype
    printf("Enter student Details: \n");		//Print Function Calling
    for(int i=0; i<n; i++)	//Using For Loop
	{		
        printf("Student %d: \n",i+1);
        printf("Name: ");
        scanf("%s",students[i].name);
        printf("Rno: ");
        scanf("%d",&students[i].rno);
        printf("Marks of first subject: ");
        scanf("%f",&students[i].sub1);
        printf("Second subject: ");
        scanf("%f",&students[i].sub2);
        printf("Third subject: ");
        scanf("%f",&students[i].sub3);
        printf("Fourth subject: ");
        scanf("%f",&students[i].sub4);
        printf("Grade: ");
        scanf(" %c",&students[i].grade);
        printf("\n");
    }
    printf("Student Details: \n\n"); 
    for(int i=0; i<n; i++)		//Using For Loop For Individual Student
	{
        printf("Name: %s\n",students[i].name);
        printf("Rno: %d\n",students[i].rno);
        printf("First subject: %f\n",students[i].sub1);
        printf("Second subject: %f\n",students[i].sub2);
        printf("Third subject: %f\n",students[i].sub3);
        printf("Fourth subject: %f\n",students[i].sub4);
        printf("Grade: %c\n",students[i].grade);
        printf("\n");
    }
    return 0;
}
