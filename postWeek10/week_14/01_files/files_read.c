#include <stdio.h> //FILE data structure is here
#include <string.h>


int main(int argc, char *argv[]){
    //Create a pointer to file structure
    FILE *file = NULL; //always initialize with NULL, dont leave it empty and allow for accidental dereferencing

    //open the file
    //fopen - creates the file and returns the pointer to FILE
    file = fopen("out.txt", "r");

    //Check to see if the file was successfully opened
    if (file == NULL){
        puts("File could not be opened");
        return 1;
    }

    // Read into a file
    int i = 1;
    while (!feof(file)){ //feof is end of file
            //fscanf - read from file

            fscanf(file, "%d", &i);
            printf("%d\n", i);
        }
    


    // Close the file
    fclose(file);

    return 0;
}