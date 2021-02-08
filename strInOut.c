#include<stdio.h>


int main(){

	// There are few methods to input string and output them
	//
	
	// Method 1
	char str1[20];	// declaring an empty char array and
	//scanf("%s", str1);	// storing the chars in the array
				// do not add & for scanf() since the str1 itself pointing the first char's location

	//printf("String 1 is %s\n", str1);
	// Con: Can't input space seperated string input
	//	char count for an input is restricted

	// To input with spaces we use formated scanf()
	// scanf("%[^\n]")
	
	printf("Enter a space seperated string\n");
	scanf("%[^\n]%*c", str1);
	printf("Space seperated string is: %s\n", str1);

	printf("Enter a space seperated string\n");
	scanf("%[^\n]%*c", str1);
	printf("Space seperated string is: %s\n", str1);

	return 0;

}
