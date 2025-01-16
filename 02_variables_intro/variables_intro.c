/* 
The introduction to variables.
*/

//Preprocessor directive
// stdio.h is standard input output
#include <stdio.h>

//create a main functions
int main() {
    // Create a variable
    int first_number;

    // Assign the value to a variable
    first_number = 100;

    // Create and initialize a variable
    int second_number = -19;

    //Print the value of a variable
    printf("The first number is %d\n", first_number);

    // Print the value of the second variables
    printf("The value of the second number is %d\n", second_number);

    // Create a sum of 2 numbers
    int sum = first_number + second_number;

    printf("%d + %d = %d\n", first_number, second_number, sum);
    return 0;
}