//AUthor Rudraksh Vasudev
//Purpose of The Program:To Demonstrate a Pointers Program
#include<stdio.h>
#include<math.h>
int main()
{
	int var=10, var1;
	int *p; //Pointer variable declaration which will store the address of integer variable
	p=&var; //& means address of
	var1=*p; //* means value of at address stored in pointer variable

	//printf("Var=%d,\n Var1=%d,\n Pointer Value=%d,\n Value at Address of variable in Pointer=%d",var,var1,p,*p);
}
