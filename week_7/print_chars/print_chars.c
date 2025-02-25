#include <stdio.h>

int main(){
    // get the uppercase character
    char input;
    do{
    printf("enter an uppercase character: ");
    scanf(" %c", &input);
    } while(input < 'A' || input > 'Z');
    
    //Get the positive integer
    int inputTwo = 0;
    do{
        printf("Enter a positive integer: ");
        scanf("%d", &inputTwo);
    } while(inputTwo <= 0);

// Print the scanned char the integer number of times (For loop)

    for(int i = 1; i <= inputTwo; i++){
        printf(" %c\n", input);
    }

//TODO, scan a second character which should be either * or #
// Print B*B*B*B*B*B*B
char pat = 'a';
do{
printf("enter either * or #: ");
scanf(" %c", &pat);
} while(pat == '*' || pat == '#');




return 0;
}