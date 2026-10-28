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
    int choice = 0;
    int x = 20, y = 10;

    int (*operation)(int, int) = NULL;
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            operation = add;
            break;

        case 2:
            operation = subtract;
            break;       
        
        case 3:
            operation = multiply;
            break;
        
        case 4:
            operation = division;
            break;
        
        default:
            printf("Invalid choice\n");
            return 1;
    }

    printf("Result = %d\n", operation(x, y));

    return 0;

}