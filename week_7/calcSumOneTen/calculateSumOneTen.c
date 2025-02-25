#include <stdio.h>

int main(){
    int sum = 0;
    int i = 1;
    while (i <= 10){
        sum += i;
        printf("%d", sum);
        i += 1;
    }
}