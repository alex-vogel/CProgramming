#include <stdio.h> //FILE data structure is here


int main(int argc, char *argv[]){
    //Create a pointer to file structure
    FILE *file = NULL; //always initialize with NULL, dont leave it empty and allow for accidental dereferencing

    //open the file
    //fopen - creates the file and returns the pointer to FILE
    file = fopen("out.txt", "w");

    //Check to see if the file was successfully opened
    if (file == NULL){
        puts("File could not be opened");
        return 1;
    }

    // Write into a file
    int i = 1;
    while (i <= 100){
        if (i == 100){
            fprintf(file, "%d", i++); //Write into a file
        }
        else{
        fprintf(file, "%d\n", i++); //Write into a file
        }
    }


    // Close the file
    fclose(file);

    return 0;
}