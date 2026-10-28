#include <stdio.h>

float avg(int * nums, int size);

int main(){
    int numbers [] = {1, 3, 2, 5, 6, 9, 0, 6};
    int count = (sizeof(numbers) / sizeof(numbers[0]));
    printf("%d\n", count);
    float get_avg = avg(numbers, count);
    printf("%f\n",get_avg);
    return 0;
}

float avg(int * nums, int size){
    int i;
    float a =0;
    for(i = 0; i < size; i ++)
    {
        a += nums[i];
    }
    return (a / size);
}