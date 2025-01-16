/*

*/

#include <stdio.h>

int main() {
    int square_side = 1;
    int square_perimeter = 0;
    int square_area = 0;

    // Write the prompt
    puts("Enter the value for the side length of a square"); //note that puts (pronounced put s), is like simplified printf, it can only use strings tho, no formating
    // get the input
    scanf("%d", &square_side); // note that there should never be anything in the scanf "", only format
    // note that the & sign is an address operator, we want to send to memory, not read the value of the variable

    // do the math
    square_perimeter = square_side * 4;

    // Create the output
    printf("The perimeter of a square with side %d is %d\n", square_side, square_perimeter);


    return 0;
}