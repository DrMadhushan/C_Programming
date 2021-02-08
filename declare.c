#include <stdio.h>

/*
 * To run the program
 * enter
 * gcc [progName].c -o exeName
 * this creates the executable object(compiled code)
 * then enter
 * ./exeName
 * in terminal
 */

// include all the required modules and headers
// Executable function is main

int main(){
	// Declare variables if any
	int num;
	char ch;
	char str1[10]; 
	// declaration of a sring is possible like this
	// but you can't initialize later like str1 = "string"
	char str2[10] = "String2"; // declaration & init should be done @ once
	// this will act like
	// str2[10] = {'S','t','r',....}; its an array

	char * str3;	// pointer method - discuss later

	// initialization of variables
	num = 78;
	ch = 'w';
	str3 = "String3";

	// This will generate a warning for too many items in the declared array
//	char str4[5] = "this string has more than 5 chars"; 

	// Your program to execute here
	// types should be defined at each usage point by '%'
	//
	printf("Number: %i\n",num);
	printf("Character: %c\nString: %s\n",ch,str3);
	printf("Str3 = %s\n",str2);


	//==============================================================
	// float and double
	
	float fl1 = 1.658;
	double dbl1;

	dbl1 = 1.546824569;

	printf("Float: %f\n",fl1);
	printf("Double: %lf\n",dbl1);
	
	// you can format floating point values while printing
	printf("Formated Float: %.2f\n",fl1);

	printf("\n");
	return 0;	// return type as mentioned at the beginning
	// code after this in this function won't work

}

