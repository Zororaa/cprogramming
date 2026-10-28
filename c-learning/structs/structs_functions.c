#include <stdio.h>
#include <string.h>

struct Car{
    char owner_name[8];
    int plate_number;
    float fines;
};

void printCarType(struct Car car){
    
}

int main(){
    struct Car my_car = {.plate_number = 505040, .fines = 150.41};
    strcpy(my_car.owner_name, "Thabo");
    printf("%d\t%s\t%f\t", my_car.plate_number, my_car.owner_name, my_car.fines);
    return 0;
}