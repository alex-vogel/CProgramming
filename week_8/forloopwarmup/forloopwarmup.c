#include <stdio.h>


int main() {
    for(int i = 20; i >= -10; i = i-6){   //for loop
        printf("%d\n", i);
    }

    int j = 20;
    do{
        printf("%d ", j);
        j -= 6;
    } while (j > -16);

}