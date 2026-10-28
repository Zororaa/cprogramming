#include <stdio.h>

int x = 1, y = 2;
int z[10] = {10, 20, 30, 40, 50, 60, 60, 70, 80, 90};
int *ip;
int *ipx;
int *ipz;

int main(void){
    ip = &x;
    ipx = &y;
    ipz = z; 

    //printf("%p\n", ip);
    //printf("%p\n", (void *) &x);
    for(int i = 0; i < 10; i++){
        printf("z[%d] = %3d, addresss = %p\n", i, z[i], &z[i]);
    }

    printf("Assigned pointer *ip is equal to: %d\n", *ip);
    printf("Assigned pointer *ipx is equal to: %d\n", *ipx);

    printf("Assigned pointer *ipx is equal to: %d\n", *ipx);
    printf("x variable has been assigned %p\n", (void *)ip);
    printf("y variable has been assigned %p\n", (void *)ipx);
    printf("ipz variable has been assigned %p\n", (void *)ipz);

    return 0;
}

