#include <stdio.h>

/*
    Split the given 2 digit integer into tens and ones.
    Return 0 if the number is 2 digit; return 1 otherwise
*/
void sumAndAvg(double d1, double d2, double *sum, double *avg);
int splitDigits(int n, int *tens_ptr, int *ones_ptr);

int main(){
    int n = 0;
    printf("Enter a 2 digit number: ");
    scanf("%d", &n);

    int tens = 0, ones = 0;
    splitDigits(n, &tens, &ones);

    printf("%d has %d tens and %d ones\n", n, tens, ones);

    //We have ones and tens
    double avg = 0; //average of ones and tens
    double sum = 0; //sum of ones and tens
    sumAndAvg((double) tens, (double) ones, &sum, &avg);
    printf("The sum %lf:\nThe average: %lf\n", sum, avg);
    return 0;
}


int splitDigits(int n, int *tens_ptr, int *ones_ptr){
    if (n < 10 || n > 99){
        puts("not a 2 digit number");
        return 1;
    } //Note because of the return 1 in the if statement theres no need for an else statement
    *ones_ptr = n % 10; // the value held in the box "ones_ptr" will now be n % 10 (remainder when divided by 10)
    *tens_ptr = n / 10; // The value heald in the box "tens_ptr wil now be n / 10"
    return 0;
}


void sumAndAvg(double d1, double d2, double *sum, double *avg){
*sum = d1 + d2;
*avg = *sum / 2;
}