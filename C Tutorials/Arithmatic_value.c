#include <stdio.h>

	int main() {
	int a, b, c;
	 
    printf("Enter number a\n");
    scanf("%d", &a);

    printf("Enter number b\n");
    scanf("%d", &b);

	c = a + b;   
	printf( "Value of c = %d\n", c);

	c = a - b;   
	printf( "Value of c = %d\n", c);

	c = a * b;   
	printf( "Value of c = %d\n", c);

	c = b / a;   
	printf( "Value of c = %d\n", c);

	c = b % a;   
	printf( "Value of c = %d\n", c);
	
	return 0;
	
	}
