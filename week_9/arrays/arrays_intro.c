#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Symbolic constant 
#define SIZE 200
//If we create our arrays using SIZE, they will be consistent throughout the code

// Functions with arrays
void printArray(int *arr, int size); //array is the same as its pointer
void intWithRandom(int *arr, int size, int left, int right);
void replaceNegativesWithPositives(); //todo


int main(void){
    srand(time(0));
    // Create an array with 20 integers
    int arr[SIZE];
    // Initizialize the first element with 999
    arr[0] = 999;
    //Initialize the last element with 111
    arr[19] = 111;

    // print firstand last element of the array
    printf("First %d; Last %d\n", arr[0], arr[19]);

    // Initialize an array with a loop
    for (int i = 0; i < SIZE; i++){
        arr[i] = 9;                          //Array should look like [0, 1, 2, 3, 4, 5, 6, 7, 8, 9...]
    }

    //Reinitialize an array with values from 10 to 200 [10, 20, 30.. 200]
    for (int i = 0; i < SIZE; i++){
        arr[i] = (i + 1) * 10;
    }

    //Reinitialize with random numbers from -20 to 20
    for (int i = 0; i < SIZE; i++){
        arr[i] = -20 + rand() % 20;
    }


    //print an array
    for (int i = 0; i < SIZE; i++){
        printf("%d, ", arr[i]);
    }
    puts(""); // Create new line

    // printf("\n%d\n", arr); THIS WONT WORK, arr is just a pointer basically
    puts("");
    intWithRandom(arr, SIZE, -3, 100);
    printArray(arr, SIZE);
    return 0;
}

void printArray(int *arr, int size){
    for (int i = 0; i < size; i++){
        printf("%d, ", arr[i]);
    }
}

void intWithRandom(int *arr, int size, int left, int right){
    for (int i = 0; i < size; i++){
        arr[i] = rand() % right + left;

    }

}