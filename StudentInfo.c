//Author:Rudraksh Vasudev
//Date:22/3/2021
//Purpose Of The Program:To Store Information Of A Student
#include <stdio.h>
struct student		//Struct Datatype
{
    char name[20];		//Structure Fields
    int rno;
    float percentage;
    char grade;
};
int main()		//Main Function Body
{
    int n,i;		//Data And Variable Declaration and Initialisation
    printf("Enter the number of students: \n");		//Print Function Calling
    scanf("%d",&n);		//Input Function
    struct student students[n];		//Struct Datatype
    printf("Enter student Details: \n");
    for(int i=0; i<n; i++)		//Using For Loop For Storing Student Details
	{
        printf("Student %d: \n",i+1);
        printf("Name: ");
        scanf("%s",students[i].name);
        printf("Rno: ");
        scanf("%d",&students[i].rno);
        printf("Percentage: ");
        scanf("%f",&students[i].percentage);
        printf("Grade: ");
        scanf(" %c",&students[i].grade);
        printf("\n");
    }
    printf("Student Details: \n\n"); 
    for(int i=0; i<n; i++)		//Using for Loop For Diplaying Student details
	{
        printf("Name: %s\n",students[i].name);
        printf("Rno: %d\n",students[i].rno);
        printf("Percentage: %f\n",students[i].percentage);
        printf("Grade: %c\n",students[i].grade);
        printf("\n");
    }
    return 0;		//Return Statement
}
