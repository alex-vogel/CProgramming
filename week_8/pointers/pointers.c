#include <stdio.h>
void setToZero(int *n);
double productPointer(double *p1, double *p2);
int main(){
    int luck = 100;
    // here you put a value of 100 into a box named "luck" which can be accessed or modified
    printf("%d\n", luck);
    luck += 10;

    //Every time you create a variable its stored in the memory, which is kind of like a big table with many rows and columns.

    //Each cell in this table has a unique address. The address begins with 0x followed by letters and numbers like hex

    //Direct address is just calling the name of the box. Indirect address is calling the address of the box.

    //So lets print the address of luck variable
   
    printf("The address of luck is %p", &luck);   //%p stands for "pointer" which is the address


    //Create a pointer variable

    // <data_type> * pointer_name;

    int * luck_ptr = &luck;
    //luck_ptr now holds the address of luck

    // int *luck_ptr_ptr = &luck_ptr;
    //This is called a doublePointer

   //Access the data the pointer is pointing to
   //* - dereferencing operator

   printf("Dereference luck_ptr %d\n", *luck_ptr);

   //modify the data through the pointer

   *luck_ptr = 300;
printf("the value of luck after modification: %d\n", luck);


//Lets create a double pointer that isnt pointing anywhere yet
double *pF = NULL;

//Lets create a variable and put it in the slot pf points to

//double number2 = *pF;


setToZero(&luck);
printf("the value of luck after setting to zero: %d\n", luck);
double number1 = 2.3;
double number2 = 3.4;
printf("%lf", productPointer(&number1, &number2));
    return 0;
}

// Passing by-reference
void setToZero(int *n){
*n = 0; //We recieve the address of what is sent in and this is set to n. We then dereference n to set the thing in that address to 0

}


double productPointer(double *p1, double *p2){
    //return the prouct of the two addresses
    return *p1 * *p2;
}