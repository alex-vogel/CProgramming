#include <stdio.h>

#define SIZE 10
//print doubled values of the given array
void printDoubledArray(const int *arr, int size); //by making the array a const (constant), the base array will not be modified

//Searching in arrays (linear search);
int firstZero(const int *arr, int size); //searches for the location of the first 0 in the array and return it. return -1 if there are no zeros

int lastZero(const int *arr, int size); //finds index of last 0

int hasEvenZeros(const int *arr, int size); //return 1 if there is an even number of zeros, return 0 if not;

int nthZero(const int *arr, int size, int n); //returns the index of the n'th zero, otherwise return -1

int main(void){
    int a[SIZE] = {1,2,3,4,5,6};
    printDoubledArray(a, SIZE);
    int first_zero = firstZero(a, SIZE);
    if (first_zero == -1){
        puts("There are no zeros");
    }
    else{
        printf("The index of the first zero is %d\n", first_zero);
    }
    int last_zero = lastZero(a, SIZE);
    printf("The index of the last zero is %d\n", last_zero);
    
    if(hasEvenZeros(a, SIZE) == 1){
        puts("There is an even number of zeros");
    }
    else{
        puts("There is an odd number of zeros");
    }
    return 0;
}


void printDoubledArray(const int *arr, int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i] * 2);
    }
puts ("");
puts ("Note: The values in the array have not actually changed");
}

int firstZero(const int *arr, int size){
    for (int i = 0; i < size; i++){
        if (arr[i] == 0){
            return i;
        }
    }

    //no zeros
    return -1;
}

int lastZero(const int *arr, int size){
   for(int i = size - 1; i > -1; i--){
    if (arr[i] == 0){
        return i;
    }
    else{
        return -1;
    }
   }
}

int hasEvenZeros(const int *arr, int size){
    int numOfZeros = 0;
    for(int i = size - 1; i > -1; i--){
        if (arr[i] == 0){
            numOfZeros += 1;
        }
    
    }
    if (numOfZeros == 0){
        return 0;
    }
    else if(numOfZeros % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}