/*
practice with non void functions
*/
//function prototypes
#include <stdio.h>
// The function named getFive which returns integer and returns no arguments
int getFive(void);
void printCourse(int course_number);
// Void Function that takes an interger and describes the temperature
void describe_temp(int temp);
void doTemp(void);

//The function that converts give number of miles to kilometers
double milesToKms(int miles);

double kiloToMiles(int kilo);

//main function \/
int main(void) {
    int var = 0;
    int var_two = 0;
    int milesInput = 0;
    int kms = 0;
    var = getFive();
    printf("var is %d\n", var);
    printCourse(2271);
    doTemp();
    printf("Enter amount of miles\n");
    scanf("%d", &milesInput);
    kms = milesToKms(milesInput);
    printf("%d kilometers", kms);
    printf("\n enter the number of kilometers: ");
    int kiloInput = 0;
    scanf("%d", &kiloInput);
    kiloToMiles(kiloInput);
    return 0;
}
//implement getFive
int getFive(void) {
    int five = 5;
    return five;
}

void printCourse(int course_number) {
    printf("you are in COP %d.\n", course_number);
}

void describe_temp(int temp) {
    if (temp > 70) {
        puts("hot");
    } else if (temp < 32) {
        puts("freezing");
    } else {
        puts("cold");
    }

}

void doTemp(void) {
    int input_temp = 0;
    printf("Enter temperature\n");
    scanf("%d", &input_temp);
    describe_temp(input_temp);
}

double milesToKms(int miles) {
    int kilometer = 0;
    kilometer = (miles * 1.609);
    return kilometer;
}

double kiloToMiles(int kilo) {
double outPut = kilo/1.609;
printf("%f",outPut);
}

//note to print a number with decimal use %f instead of %d in printf function