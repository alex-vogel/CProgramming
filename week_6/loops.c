//what if I want to write a C function that takes two intergers and checks whether the firt number is divisible by both the second and second-3
//Well we dont want to divide by 0 so we cant allow second to be able to 0 OR 3
//If you want to set up a nor statement, you should make an or statement then put it in parenthesis and include a ! infront of it to negate it

// If you want to have many else statements, start with specific cases and become more general because a more general case may return true before the specific case can be evaluated




#include <stdio.h>
#include <unistd.h> //Necessary for usleep
#include <stdlib.h> // This is for the rand function
#include <time.h> //This is for the time function

void whatIf(void); //This function was for a review
void printHello(void); //This function will print "HELLO" 100 times.
void printNHello(int n);
int fToCTable(int temp);
void printTemperatures(int min, int max);
void printNRandom(int n);


int main(){
    srand(2); //This changes the seed for the random numbers
    srand(time(0)); //the time function will return the num of secs since jan 1, 1970; around when c was invented


    int userInput = 0;
    whatIf();
   //printHello();
    printNHello(15);
    printTemperatures(10,50);
    printNRandom(10);
    return 0;
}

void whatIf(void){
    int a = 10;
    if (a == 10){
        puts("something");
    }
    else{
        puts("something else");
    }

}

void printHello(void){

    printf("HELLO!\n"); //Obviously if you wanted to print this 100 times you could copy and paste it 100 times
    //instead lets use an iteration statement (also known as a loop)


    // We need 3 things for the loop to work
    // 1 - counter (initialization) (starting value)
    // 2 - condition (says when to stop iteration/the loop)
    // 3 - ?

    int i = 1; //counter
    while (i <= 100){
        printf("%d - HELLO!\n", i);
        usleep(20000); // two hundreths of a second
        i = i + 1;
    }
}

void printNHello(int n){
    int i = 1;
while (i <= n){
    printf("%d - HELLO!\n", i);
    i = i + 1;
}

}

int fToCTable (int temp){
    return (temp - 32) * 5 / 9;
}


void printTemperatures(int min, int max){
    int t = min;
    while (t <= max){
        printf("%5d - %d\n", t, fToCTable(t));
        t = t + 1;
    }

}

void printNRandom(int n){
    int j = n;
    while (n > 0) {
        printf("%d\n", rand()); //These are not truly random, its from a list, so we need to edit the seed to get more random (check main function)
        n = n - 1;
        //This makes a really big random number tho, so what if we added a remainder expression
    }
    while (j > 0) {
        printf("%d\n", rand() % 10); //adding the remainder expression means that the number will be the remainder when divided by 10, creating a set of smaller random nums
        j = j - 1;
    }
}