#include <stdio.h>
#define ROW 4
#define COL 4

void print(int rows, int cols, const int arr[rows][cols]);
void setRow(int rows, int cols, int arr[rows][cols], int row_num, int val);
void setCol(int rows, int cols, int arr[rows][cols], int col_num, int val); //IMPLEMEMNT LATER

int total(int rows, int cols, int arr[rows][cols]);

int totalPerim(int rows, int cols, int arr[rows][cols]);


int main(int argc, char *argv[]){
    //Create and initialize a 2d array
    int arr[ROW][COL] = {
        {1,2,3},
        {4,5,6}, //Initializes an a 4x4 table, but only fills the top 3x3 square with data
        {7,8,9}
    };

    //Access an element
    printf("%d\n", arr[0][1]); //Accesses the 2 in the array
    printf("%d\n", arr[0][1] + arr[1][0]); // Will print 4+2

    //Change the value of the element
    arr[1][1] = 10; //Changes the 5 to a 10

    //Print an array
//    for (int i = 0; i < ROW; i++){
//        for (int j = 0; j < COL; j++){
//            printf("%4d", arr[i][j]); // %4d creates 4 spaces before whatever %d holds
//        }
//        puts("");
//    }
//    puts("");

print(ROW, COL, arr);


// Set the second row with 99's
for (int j = 0; j < COL; j++){
    arr[1][j] = 99;
}
print(ROW, COL, arr);

//Implement setRow function
setRow(ROW, COL, arr, 2, 33);
print(ROW, COL, arr);

//Test that total function works
printf("The total sum of all elements in the table is %d\n", total(ROW, COL, arr));

printf("The total sum of perimeter elements in the table is %d\n", totalPerim(ROW, COL, arr));
}


void print(int rows, int cols, const int arr[rows][cols]){
    //Print an array
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("%4d", arr[i][j]); // %4d creates 4 spaces before whatever %d holds
        }
        puts("");
    }
    puts("");
}

void setRow(int rows, int cols, int arr[rows][cols], int row_num, int val){
    for (int j = 0; j < cols; j++){
        arr[row_num][j] = val;
    }

}

int total(int rows, int cols, int arr[rows][cols]){
    int sum = 0;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            sum += arr[i][j];
        }
    }
    return sum;
}

int totalPerim(int rows, int cols, int arr[rows][cols]){
    //int sum = 0;
    //for (int i = 0; i < rows; i++){
    //    for (int j = 0; j < cols; j++){
    //        if ((j == 0 || i == 0)){
    //        sum += arr[i][j];
    //        }
    //        else if (((j == (cols - 1)) || (i == (rows - 1))){
    //            sum += arr[i][j];
    //        }
    //    }
   // }
    //return sum;
}
//THIS DOESNT WORK