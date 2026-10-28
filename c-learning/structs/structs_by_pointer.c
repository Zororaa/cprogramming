#include <stdio.h>

struct Car{
    char *brand;
    int year;
};

void printCar(struct Car *car){
    printf("Brand: %s\n", car->brand);
    printf("Before Year Brand: %d\n", car->year);
};

void updateYear(struct Car *car)
{
    car->year = 2026;
    printf("Update on Year: %d\n", car->year);
}

int main(void){
    struct Car myCar = {"Ford", 2024};
    printCar(&myCar);
    updateYear(&myCar);

    return 0;
}