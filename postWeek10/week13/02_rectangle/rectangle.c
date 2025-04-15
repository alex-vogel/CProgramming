#include <stdio.h>
#include <string.h>
#define STREET_SIZE 30
#define CITY_SIZE 30



    struct Rectangle{
     double width;
     double height;
    };

typedef struct {
    char street[STREET_SIZE];
    char city[CITY_SIZE];
    int zip_code;

} Address;


double getPerim(struct Rectangle *rec);









int main(){
struct Rectangle rectangule1 = {.width = 20.00, .height = 10.00};
printf("%lf", getPerim(&rectangule1));


}

double getPerim(struct Rectangle *rec){
    return ((rec->width) * 2) + (2*(rec->height));
}


//If you are tired of writing out struct rectangle, at the top of the code add
// typedef struct Rectangle rec;
// now you can do rec rectangule1.width to get the width of rectangule1

//You can also do this during the creation

        //typedef struct{
        
            //Parameters of the structure

    //       } Card;