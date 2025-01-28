/*
    The program converts the given number of seconds to hours, minutes, and seconds
    Ex: 65 seconds = 0 hours, 1 minute, 5 seconds

*/

#include <stdio.h>

int main() {
    //Set up variables
    int seconds = 0;
    int minutes = 0;
    int hours = 0;
    int remaining_seconds = 0;
    int remaining_minutes = 0;

    
    //get input number of seconds
    puts("Enter the number of seconds");
    scanf("%d", &seconds);

    // calculate number of minutes and hours
    minutes = seconds / 60;
    hours = minutes / 60;

    // calculate remaining number of second and minutes
    remaining_seconds = seconds % 60 ;
    remaining_minutes = minutes % 60;
    // print results
    printf("%d seconds is %d hours, %d minutes, and %d seconds", seconds, hours, remaining_minutes, remaining_seconds);

    return 0;
}