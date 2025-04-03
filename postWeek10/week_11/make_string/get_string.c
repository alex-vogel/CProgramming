#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define SIZE 1000

void getString(char *str);
void getString2(char *str);
void getString3(char *str); //character by character
bool checkForSpaces(const char *str); //could be used to find spaces, however string.h has handy functions

//TODO
// Check to see if scanned string is valid password; atleast one uppercase, one lowercase, one symbol,

int main(void){
    char str[SIZE];
    getString3(str);

    // Check does the string have spaces?
    if (strchr(str, ' ') == 0){
        puts("no spaces");
    }
    else{
        puts("there is at least one space");
    }

    printf("The string is \"%s\"\n", str);


    char str1[SIZE];
    char str2[SIZE];
    getString2(str1);
    getString2(str2);
    printf("The first string is %s\n", str1);
    printf("The second string is %s\n", str2);

    //copy string
    strcpy(str1, str2);
    printf("The first string is %s\n", str1);
    printf("The second string is %s\n", str2);

    strcat(str1, str2);
    printf("The first string is %s\n", str1);
    printf("The second string is %s\n", str2);
    
    return 0;
}

void getString(char *str){

    puts("Enter a string: ");
    scanf("%s", str);
}

void getString2(char *str){
    puts("Enter the string: ");
    fgets(str, SIZE - 1, stdin); //stdin -- standard input (keyboard)
//By default when you press enter to signify the end of your typing, the new line is also registered in the string
//To do this we need to replace the \n from the enter in the array with \0
//implematation:
int last_character = strlen(str) - 1;
str[last_character] = '\0';
}


void getString3(char *str){
    int i = 0;
    char c = getchar(); //getchar saves the inputted character from the keyboard and saves it in variable c
    while (i < SIZE - 1 && c != '\n'){
        str[i] = c;
        i++;
        c = getchar();
    }
    str[i] = '\0';
//This approach is nice because you pick what the exit character will be
}

bool checkForSpaces(const char *str){
    int spaceCounter = 0;
    for(int i = 0; i <= strlen(str); i++){
        if (str[i] == ' '){
            spaceCounter += 1;
        }
    }
    if(spaceCounter > 0){
        return true;
    }
    else{
        return false;
    }
}