#include <stdio.h>
#define MY_AGE 32

void myfunc(void) {
    printf("%s\n", __FUNCTION__);
}

int main(void){

    printf("%s\n", __TIME__); //Embedded Macros For Time
    printf("%s\n", __DATE__); //Embedded Macros For Date
    myfunc();

    return 0;
}