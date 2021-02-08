#include<stdio.h>

int main(){

	// declare a variable to allocate space to take input and store

	// ===============================================================
	// Integer
	int i;

	// scanf() function can be used for general cmdline inputs
	scanf("%i",&i);	
	// & should be placed infront of i to indicate that the input should be stored at i's location in the memory
	// input type should be given to scanf()

	printf("Integer entered is %i\n",i);

	// ===============================================================
	// Float
	float fl;

	scanf("%f",&fl);

	printf("Entered float is(with 3 decimal points) %.3f\n",fl);

	// ==============================================================
	// Char
	char ch;

	// getchar and putchar are specic for char input and output
	
	getchar();
	ch = getchar();
	// in this flow of program you have to handle the 'enter' you input in the terminal for the previous output
	// to avoid this i will add a rough getchar() before ch = getchar()

	// scanf("%c",&ch);
	// scanf("%c",&ch);

	putchar(ch);
	printf("\nCharacter entered is %c\n", ch);

	// printf() is a common output method and put char is for char only
	// we will discuss the String input and output seperately

	return 0;

}
