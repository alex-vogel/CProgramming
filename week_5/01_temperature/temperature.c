// A function that prints a description based on the given function
#include <stdio.h>
//Prototype
void tempDescription(double temp);
void checkRange(int number); //This function will check to see if given number is between 0 and 10
void getLargest(int num1, int num2, int num3); //This function will print the largest of the values

int main(){
    tempDescription(97.44);//Note: you could make this a scanf however for right now we only care about the implementation of tempDescription currently
    checkRange(2); //The same is true with this function, in this case we care more about learning the && "and" functionality
    getLargest(0,4,1);
    return 0;
}


//implement temp description function
void tempDescription(double temp){
    if (temp > 101) {
        puts("High Fever");
    }
    else if (temp > 99){
        puts("Low Fever");
    }
    else if (temp > 97){
        puts("Normal");
    }
    else{
        puts("Low temperature");
    }

}

void checkRange(int number){
 //   if(number >= 0){
  //      if (number <= 10){
//            puts("Yes this number is between 0 and 10");
//        }
//       else {
//            puts("no");             NOTE: The commented out code would work however there is a more elegant approach:
//        }
//    }
//    else{
//        puts("no");
//    }
if (number >= 0 && number <= 10 && number % 2 == 0){
    puts("yes");
}
else{
    puts("no");
}

}

void getLargest(int num1, int num2, int num3){
    if (num1 > num2 && num2 > num3){
        printf("%d\n",num1);
    }
    else if (num1 < num2 && num2> num3){
        printf("%d\n",num2);
    }
    else if(num3 > num2 && num3 > num1){
    printf("%d\n",num3);
    }
    else if (num1 > num2 && num1 == num3){
        printf("%d%d\n", num1, num3);
    }
    else if (num2 > num1 && num2 == num3){
        printf("%d%d\n", num2, num3);
    }
    // could continue this for every case according to truth table
}