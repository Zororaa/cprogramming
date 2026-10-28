#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t reg = 0;

    // Set bit 3
    reg |= (1 << 3);

    printf("Register: %u\n", reg);

    //clear bit 3
    reg &= ~(1 << 2);

    printf("Register: %u\n", reg);

    return 0;
}