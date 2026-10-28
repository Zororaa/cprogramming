#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    if (b == 0){
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}

int main(void){

    int (*calc[])(int, int) = {
        add, 
        subtract,
        multiply,
        division
    };

    int choice = 0;
    
    printf("0:add 1:subtract 2:multiply 3:division\n");
    scanf("%d", &choice);

    printf("Result = %d\n", calc[choice](20, 10));

    return 0;

}