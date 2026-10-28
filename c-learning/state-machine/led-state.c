#include<stdio.h>
#include<stdbool.h>
#include<unistd.h>

int main(void){

    bool led_state = false;

    while (1){
        led_state = !led_state;

        printf("LED: %s\n", led_state ? "ON" : "OFF");

        sleep(1);
    }

}