/*
DESCRIPTION: Programming Excerise Two
CLASS: COSC 1420.SO1
AUTHOR: TYLER ECHOLS
DATE: Jan 2019
*/

#pragma warning (disable:4996)


#include <stdio.h>


int main()
{
	char x;
	int I1; 
	int I2; 
	float F1; 
	float F2; 


	printf("Type in two whole numbers then press enter: \n"); 
	scanf ("%d", &I1); 
	scanf ("%d", &I2); 
	printf ("\n you typed %d, and %d \n", I1, I2);

	
	printf ("\n Added together is %d \n", I1 + I2); 

	
	printf ("\n Divided together is %d \n", I1 / I2);

	
	printf ("\n The remanider is %d \n", I1 % I2); 

	
	printf ("\n Multplied together is %d \n", I1 * I2);

	
	printf ("\n Subtracted together is %d \n", I1 - I2); 


	

	printf("\nEnter two Decimal numbers then press enter: \n"); 
	scanf("%f", &F1); 
	scanf("%f", &F2); 
	printf("\n You've entred in %f, and %f \n", F1, F2); 


	printf("\n Added together is %f \n", F1 + F2);


	printf("\n Divided together is %f \n", F1 / F2);



	printf("\n Multplied together is %f \n", F1 * F2);


	printf("\n Subtracted together is %f \n", F1 - F2);


	scanf("%c", &x); 

	printf("\n Press enter to continue");

	scanf("%c", &x);
	
	return 0; 
}