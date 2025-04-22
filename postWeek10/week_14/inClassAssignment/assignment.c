#include <stdio.h> //FILE data structure is here
#include <string.h>

int main(int argc, char *argv[]){
FILE *file = NULL;
char number = *argv[2];
file = fopen("assignmentOutput.txt", "w");


//Get the name of the file
char goodString[30];

for(int i = 0; *argv[i] == '\0'; i++){
    if (!*argv[i] == 0){
        goodString[i] == *argv[i];
    }
}

int i = 1;
while (i <= 100){
    if (i == 100){
        fprintf(file, "%d", i++); //Write into a file
    }
    else{
    fprintf(file, "%d\n", i++); //Write into a file
    }
}

return 0;
}