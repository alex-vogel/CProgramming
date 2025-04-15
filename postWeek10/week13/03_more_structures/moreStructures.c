#include <stdio.h>
#include <string.h>
#define NAME_SIZE 30
#define CITY_SIZE 30
#define STREET_SIZE 30
#define CLASS_SIZE 48



typedef struct{
    char city[CITY_SIZE];
    char street[STREET_SIZE];
    int zip_code;
} Address;

typedef struct {
    //The members (variables) of a structure
    char first_name[NAME_SIZE];
    int age;
    Address home_address;
} Student;

typedef struct{
    int n_students;
    Student roster[CLASS_SIZE];
} Class;


Student createStudent(char *name, int age, char *city, char *street, int zip);
void printStudentInfoWithPointer(const Student *st);
void printAddress(const Address *adr);
void printClassRoster(const Class *cl);
void printYoungest(const Class *cl);


int main(){
    Address adr = {.city = "Lakeland", .street = "Main", .zip_code = 33876};

    printAddress(&adr);


    //Create and initialize a student object

    Student st1 = {.first_name = "Mike", .age = 20, .home_address = {.city = "Tampa", .street = "Orange", .zip_code = 32875}};

    printStudentInfoWithPointer(&st1);

    //Create the second student with a function
    Student st2 = createStudent("Bob", 34, "Orlando", "Apple", 34567);

    printStudentInfoWithPointer(&st2);

    puts("");
    Student st3 = createStudent("Charlie", 19, "Portland", "roadName", 78362);

    

    //Lets create a class object

    Class COP2271 = {.n_students = 2, .roster = {st1, st2}};

COP2271.roster[COP2271.n_students] = st3; //Adds a third slot in the roster array for st3
COP2271.n_students++;   // Increases the n_students win COP2271

    printClassRoster(&COP2271);

    puts("");

    

    printYoungest(&COP2271);
    return 0;
}



void printStudentInfoWithPointer(const Student *st){  
    //Access the member of the structure
  printf("%s\n", st->first_name);
  printf("%d\n", st->age);
  printAddress(&st->home_address);
}


void printAddress(const Address *adr){
    printf("%s\n%s\n%d\n", adr->street, adr->city, adr->zip_code);
}


Student createStudent(char *name, int age, char *city, char *street, int zip){
    Student st;
    strcpy(st.first_name, name);
    strcpy(st.home_address.city, city);
    strcpy(st.home_address.street, street);
    st.age = age;
    st.home_address.zip_code = zip;



    return st;
}


void printClassRoster(const Class *cl){
    for (int i = 0; i < cl->n_students; i++){
        printStudentInfoWithPointer(&cl->roster[i]);
    }


}


void printYoungest(const Class *cl){
    Student youngest = cl->roster[0];
        for(int i = 1; i < cl->n_students; i++){
            if (cl->roster[i].age < youngest.age){
                youngest = cl->roster[i];
            }
        }
    printf("The youngest person is %d", youngest.age);
}