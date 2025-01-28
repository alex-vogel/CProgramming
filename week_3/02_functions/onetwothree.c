#include <stdio.h>

void two(void);
void one_three(void);

int main() {
    printf("starting now:\n");
    one_three();
    printf("done!\n");
}

void one_three(void) {
    printf("one\n");
    two();
    printf("three\n");
}

void two(void) {
    printf("two\n");
}



// note you can create function prototypes just using the header. This allows you
//to put the function somewhere under where youre calling it from if you want.
//generally you want main at the top of your code