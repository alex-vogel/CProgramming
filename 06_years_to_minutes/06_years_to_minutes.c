

#include <stdio.h>

int main(){
    int age_in_years = 0;

    puts("Please enter your age in years: ");
    scanf("%d",&age_in_years);
    printf("\"%d\" years is \"%d\" minutes\n", age_in_years, age_in_years * 365 * 24 * 60);
    
    return 0;
}