/* The output should show
Name: Alex Vogel
Course ID: 2271
Student ID: 17654
Student ID - Course ID = ___
*/
#include <stdio.h>

int main() {
    int student_id = 17654; 
    int course_id = 2271;
    printf("Name: Alex Vogel\n Course ID: %d\n Student ID: %d\n Student ID - Course ID is: %d\n", course_id, student_id, student_id - course_id);
    return 0;
}
