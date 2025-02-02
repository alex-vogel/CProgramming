// The program calculates the roots of quadratic equation
// Remember quadratic equation :Ax^2+bx+c

#include <stdio.h>
#include <math.h>

//function prototypes
void printPrompt(char ch);//to work with conversion specifiers use %c
int getCoefficient(void);
int countDiscriminant(int a, int b, int c);
int printRoots(int a, int b, int c);


//main function
int main(void) {
    //getting inputs
    printPrompt('a');
    int a = getCoefficient();
    printPrompt('b');
    int b = getCoefficient();
    printPrompt('c');
    int c = getCoefficient();

    //calculate roots
    printRoots(a, b, c);

    return 0;
}


// functions:
void printPrompt(char ch) {
    printf("Enter the coefficient %c: ", ch);
    
}


int getCoefficient(void){
    int coef = 0;
    scanf("%d", &coef);
    return coef;
}

int countDiscriminant(int a, int b, int c){
    //b^2-4ac
    return (b*b) - (4*a*c);

}

int printRoots(int a, int b, int c){
    int discrim = countDiscriminant(a, b, c);
    if (discrim < 0) {
        puts("No real roots");
    }
    else if (discrim == 0){
        // -b / 2a
        double x = (-b) / (2*a);
        printf ("x = %f\n", x);
    }
    else {
        // -b + -square root (discrim) / 2*a
        double x1 = (-b + sqrt(discrim)) / (2*a);
        double x2 = (-b - sqrt(discrim)) / (2*a);
        printf("x1 = %f, x2 = %f\n", x1, x2);
    }
}