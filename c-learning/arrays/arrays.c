#include <stdio.h>   

int main(void)
{
    //int num = 5;
    int arr[10] = {1, 3, 5, 0, 2, 6, 8, 7, 9, 4};
    int n = 10;
    int temp;
    int swapped;

    for (int i = 0; i < n; i++){
        swapped = 0; //reset the flag to zero / false

        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                //swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = 1; //swamp set flag to true
            }
        }

        if (swapped ==0) {
            printf("Array sorted early at pass i = %d!\n", i);
            break;
        }

    }

printf("Sorted array: ");
for (int i = 0; i < n; i++){
    printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
