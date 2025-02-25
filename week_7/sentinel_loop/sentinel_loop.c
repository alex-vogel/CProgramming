#include <stdio.h>

double sumStudentGradesSentinel(void);

double avgStudentGrades(void);

double getGrade(void);


int main(void){
printf("%.2lf\n", sumStudentGradesSentinel());
printf("%.2lf\n", avgStudentGrades());

    return 0;
}

double sumStudentGradesSentinel(void){
    double grade = 0;
    double total_grade = 0;
    while(grade != -1){ //Loops that wait for -1 are sentinel loops where -1 is our sentinel value
        //get the grade
        printf("Enter the grade: ");
        scanf("%lf", &grade);
        total_grade += grade;
    }


    return total_grade;
}
//dont let it divide by 0
double avgStudentGrades(void){
    double grade = 0;
    double total_grade = 0;
    int numOfGrades = 0;
    while(grade != -1){ 
        grade = getGrade();
        if (grade >= 0){
        total_grade += grade;
        numOfGrades++;
        }
    }
    
    if (numOfGrades == 0){
        return 0;
    }
    else{
        return total_grade / numOfGrades;
    }
}


double getGrade(void){
    //Return only grades in the range [-1, 100]
    double grade = 0;

// do while loop says "Hey while the grade is less than -1 or greater than 100, repeat the loop"
do{
    printf("Enter the grade (-1 to exit): ");
    scanf("%lf", &grade);
    if(grade < -1 || grade > 100){
        puts("Incorreect grade, try again.");
    }
} while(grade < -1 || grade > 100); //Do while is like an inverted while loop. The body of the loop will ALWAYS RUN one time. It runs before the condition is checked

    
        return grade;
}