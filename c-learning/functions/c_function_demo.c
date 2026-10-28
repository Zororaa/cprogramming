#include <stdio.h>
int is_even(int n); //function prototyping

int main(void){
    //int x = 120;
    int x = 100;

    int z = is_even(x);

    if (z == 0){
        printf("%d is not even\n", x);
    }else{
        printf("%d is an even number\n", x);
    }

}

int is_even(int n){
    if (n % 2 == 0 ){
        return 1;
    }
    else{
        return 0;
    }
}

