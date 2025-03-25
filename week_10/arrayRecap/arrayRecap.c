#include <stdio.h>

#define SIZE 11

int main(){
    int c[5] = {-45, 6, 0, 72, 1543};  //Creates an array with components -45, 6, 0, 72, 1543
    printf("%d\n", c[0] + c[2]); //prints the first and third component added together

    //Define double array with SIZE elements all set to 0
    double d_arr[SIZE] = {0.0};
    //assign 4.53 to 6th element
    d_arr[5] = 4.53;

    //print second and last elements with two difits of precision
    printf("%.2f  %.2f\n", d_arr[1], d_arr[SIZE-1]);

    //Print all of the elements of the array using a for iteration statement
    for (int i = 0; i < SIZE; ++i){
        printf("d_arr[%d] = %f\n", i, d_arr[i]);
    }

    return 0;
}