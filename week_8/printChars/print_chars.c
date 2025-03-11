#include <stdio.h>

void printChars(void);


int main(){
    printChars();
    return 0;
}

void printChars(void){
    char outer = 'A';
    while(outer <= 'Z'){
        char inner = 'A';
        while (inner <= 'Z'){

            if(inner != outer){
                printf("%c%c\n", outer, inner);
            }
            inner++;
        }
        outer++;

    }
}