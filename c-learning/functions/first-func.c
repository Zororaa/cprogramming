#include <stdio.h>
#include <limits.h>

int add(int a, int b, int *result)
{
    //check for positive overflow
    if (b > 0 && a > INT_MAX - b)
    {
        return 1;
    }
    // Check for the negative overflow
    if (b < 0 && a < INT_MIN -b)
    {
        return 1;
    }

    *result = a + b;
     
    return 0;
}

/*
int subtract(int a, int b)
{

    int result = (a - b);
    
    return result;
}


int multiply(int a, int b)
{

    int result = (a * b);
    
    return result;
}
    */

int main(void)
{
    int answer;

    if (add(1000909,609, &answer) != 0)
    {
        printf("Error: integer overflow\n");
        return 1;
    }

    printf("Add: %d\n", answer);
    /*printf("subtract: %d\n", subtract(10, 5));
    printf("Multiply: %d\n", multiply(10, 5));*/


    return 0;
}