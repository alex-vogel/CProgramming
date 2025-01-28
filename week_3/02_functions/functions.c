/*
    Introduction to functions in C

    rule 1: You can not create a function inside of another function
*/
#include <stdio.h>
// Function format
// <return_type> <function_name> (<arguments, parameters, inputs, whatever)
// {
//    code
// }

//the function doesn't take any arguments and doesn't return any value
void print_course(void) {
    printf("You are in COP%d\n", 2271);
}

void draw_circle(void) {
    printf("  *\n * *\n  *\n");
}

// Create draw_carrot function
void draw_carrot(void) {
    printf("  /\\\n /  \\\n/    \\\n");
}

void draw_line(void) {
    printf("------\n");
}

void draw_triangle() {
    draw_carrot();
    draw_line();
}

void draw_stick_figure() {
draw_circle();
draw_triangle();
draw_carrot();

}

int main() {
    /*Pretend youve written some code
    it's getting too big, wouldnt it be convinient
    if you could split it into secrtions for readability?
    introduce functions*/

    //function call
    print_course();
    draw_circle();
    draw_triangle();
    draw_carrot();
    draw_stick_figure();
    return 0;
}
