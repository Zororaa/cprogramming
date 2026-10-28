#include <stdio.h>

int accumulate(int x);


int main(void){
    accumulate(10);
    accumulate(5);
}

int accumulate(int x){
    static int total = 0;
    total += x;
    printf("%s: total = %d\n", __FUNCTION__, total);
}