#include <stdio.h>

struct Car{
    char *brand;
    int year;
};

struct Car cars[3] = {
    {"Ford", 2024},
    {"BMW", 2023},
    {"Audi", 2022}
};

void printCar(struct Car *car, int size)
{
    for (int i = 0; i < size; i++){
        printf("Brand: %s\n", car[i].brand);
        printf("Before Year Brand: %d\n", car[i].year);
    }
    
};

int main(void){
    //struct Car myCar = {"Ford", 2024};
    printCar(cars, 2);

    return 0;
}