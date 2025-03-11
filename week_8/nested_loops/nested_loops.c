#include <stdio.h>

void printTriangleTopLeftStars(int size);
void printTriangleTopRightStars(int size);
void printTriangleBottomLeftNumbers(int size);
void printTriangleTopLeftNumbers(int size);
int main(){
    int n = 0;
    int k = 1;
    //scan a positive integer
    do{
        printf("Enter a positive integer: ");
        scanf("%d", &n);

    }while (n <= 0);

//do{
printTriangleTopLeftStars(n);
printTriangleTopRightStars(n);
printTriangleBottomLeftNumbers(n);
printTriangleTopLeftNumbers(n);
//}while (k > 0); //purposely infinite loop


    return 0;
}


/*
If I enter 5, it should output
*****
****
***
**
*

*/

void printTriangleTopLeftStars(int size){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size-i; j++){
            printf("%c", '*');
        }
        puts("");
    }
}

void printTriangleTopRightStars(int size){
    for (int i = 0; i <= size; i++){
        for (int j = 0; j < i; j++){
            printf("%c", '*');
        }
        puts("");
    }
}


void printTriangleBottomLeftNumbers(int size){
    for (int i = 0; i < size; i++){
        for (int j = size; j >= size-i; j--){
            printf("%d", j);
        }
        puts("");
    }
}

void printTriangleTopLeftNumbers(int size){
//TODO fix this
for (int i = 0; i < size; i++){
    for (int j = 0; j < size-i; j++){
        printf("%d", j);
    }
    puts("");
}
}