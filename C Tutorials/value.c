#include <stdio.h>

int main() 

{
// using scanf() for multiple inputs
char gender;
int age;
printf("Enter your Age and ");
printf(" Enter your Gender ");
scanf("%d %c", &age, &gender);
printf("You entered: %d and %c", age, gender);
return 0;
}
