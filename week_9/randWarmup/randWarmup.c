#include <stdio.h>
#include <stdlib.h>


int main(){
int n = -7 + rand() % 31; //makes n a random value [-7, 23]

for(int i = 0; i <200; i++){
    n = rand() % 22 - 3;
    printf("%d\n", n);
}
return 0;
}