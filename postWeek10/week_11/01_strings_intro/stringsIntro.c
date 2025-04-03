#include <stdio.h>
#include <stdbool.h>

bool isUpper(char c); //Checks is the given character an uppercase letter? Returns true if uppercase, false if lower
bool isLower(char c); //Checks to see if given character is a lowercase letter
bool isAlpha(char c); //Checks to see if given character is a letter in the alphabet
bool isAlnum(char c); // checks if this is an alpha or number

char toLower(char c); // If a letter is uppercase, it will return the asci code of the lowercase

void printReversedCase(const char *str);



int main(){
    char ch = 's';  // Create a character (ch) which holds the value 's'


    //Create a boolean variable
    const bool isHappyAfterSecondExamInIntroClass = true; //zero = false, anything else = true

    printf("isUpper(%c) = %d\n", ch, isUpper(ch));
    printf("isLower(%c) = %d\n", ch, isLower(ch));
    printf("isAlpha(%c) = %d\n", ch, isAlpha(ch));
    printf("isAlnum(%c) = %d\n", ch, isAlnum(ch));

    // Create a string
    char str[] = "HeLlO tHerE!";

    //Printing the string
    puts("printing with printf:");
    printf("%s\n", str);
    puts("printing with a loop:");
    for (int i = 0; str[i] != '\0'; i++){ // str[i] != '\0' - continues till the end of the string
        printf("%c", str[i]);
    }
    puts(""); //linebreak
    puts("printing with puts:");
    puts(str);

    puts("Print the string in lowercase");
    for (int i = 0; str[i] != '\0'; i++){
        putchar(toLower(str[i]));
    }
    puts(""); //linebreak
    printReversedCase(str);


    return 0;
}



bool isUpper(char c){
    if (c >= 'A' && c <= 'Z'){
        return true;
    }
    else{
        return false;
    }
}

bool isLower(char c){
    if (c >= 'a' && c <= 'z'){
        return true;
    }
    else{
        return false;
    }
}

bool isAlpha(char c){
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
        return true;
    }
    else{
        return false;
    }

}

bool isAlnum(char c){
    if ((isAlpha(c) == true || (c >= '0' && c <= '9'))){
        return true;
    }
    else{
        return false;
    }
}

char toLower(char c){
    if(isUpper(c) == true){
        return c + 32;
    }
    else{
        return c;
    }
}

void printReversedCase(const char *str){
    for (int i = 0; i != '\0'; i++){
        if(isUpper(str[i]) == true){
            printf("%c", toLower(str[i]));
        }
        else{
            printf("%c", str[i] - 32);
        }
    }
}