#include <stdio.h>
#include <string.h>
#define NAME_SIZE 30


//Create a new data type (Create a structure)
struct Student {
    //The members (variables) of a structure
    char first_name[NAME_SIZE];
    int age;
};

void printStudentInfoWithPointer(const struct Student *st);

void printStudentInfo(struct Student st); //(Data type structure Student, name is St)


int main(int argc, char *argv[]) {  ///If you do ./a.out one two three, argc = 3 and aargv[] looks like ['one', 'two', 'three']

    //Create a variable (object) of type int and name it a
    int a;

    //Create a variable (object) of another type? Create your own type

    // Create an object of type struct Student and named it stud1
    struct Student stud1;

    //Initialize the members of the structure (The attributes)
    stud1.age = 19;
    strcpy(stud1.first_name, "Nick");

    //Create a pointer to int
    int b;
    int *b_ptr = &b;
    *b_ptr; //Address to b through b_ptr


    //Create a pointer to the struct Student (Specifically pointing at student 1 "stud1")
    struct Student *student_ptr = &stud1;

    struct Student stud2 = { .first_name = "Jack", .age = 20};

   

    // Access the members of the structure through the pointer
    (*student_ptr).first_name; //access with dereferencing

    student_ptr->age;          //Access with the arrow operator

  //Call student info function
  printStudentInfo(stud1);
  puts("");
  printStudentInfoWithPointer(&stud1);
    puts("");
    printStudentInfoWithPointer(&stud2);

    return 0;
}



void printStudentInfo(struct Student st){  //You can edit this to be const struct Student *st if you want to use a pointer (more efficient)
      //Access the member of the structure
    printf("First name: \t\t%s\n", st.first_name);
    printf("Age: \t\t\t%d\n", st.age);

}

void printStudentInfoWithPointer(const struct Student *st){  
    //Access the member of the structure
  printf("First name: \t\t%s\n", st->first_name);
  printf("Age: \t\t\t%d\n", st->age);
}