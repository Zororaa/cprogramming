#include <stdio.h>

struct Engine{
    int horsepower;
};

struct Car{
    char *brand;
    struct Engine engine;
};

void printCar(struct Car *cars, int size){
    for(int i = 0; i < size; i++){
        printf("Brand: %s\n", cars[i].brand);
        printf("Horsepower: %d\n", cars[i].engine.horsepower);
        printf("\n");
    }
}

struct Car cars[3] = {
    {"Ford", {150}},
    {"BMW", {180}},
    {"Audi", {155}}
};

int main(void){
    printCar(cars, 3);

    return 0;
}