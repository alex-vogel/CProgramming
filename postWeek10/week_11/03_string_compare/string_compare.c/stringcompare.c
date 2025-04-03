#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    if (argc != 3){
        printf("Use %s <word1> <word2>\n", argv[0]);
        return 0;
    }

    for (int i = 0; i < argc; i++){
        printf("%s\n", argv[i]);
    }

    //Compare two given words
    int result = strcmp(argv[1], argv[2]); //This will check, hey is the first character of a the same as character b? If a < b, it will return 's1 < s2'

    if (result > 0){
        printf("%s goes after %s\n", argv[1], argv[2]);
    }
    else if (result < 0 ){
        printf("%s goes after %s\n", argv[2], argv[1]);
    }
    else{
        puts("The words are identical");
    }
 
    //NOTE: '111111' goes before '2' because the asci code for 1 is smaller

}