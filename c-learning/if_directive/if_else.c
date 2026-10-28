#include <stdio.h>

#define FEATURE_1_SUPPORT 0
#define FEATURE_2_SUPPORT 1

#if FEATURE_1_SUPPORT == 1
void feature_1(void){
    printf("Feature 1 supported\n");
}
#endif

#if FEATURE_2_SUPPORT == 1
void feature_2(void){
    printf("Feature 2 supported\n");
}
#endif


int main(void) {
#if FEATURE_1_SUPPORT == 1
    feature_1();
#endif
#if FEATURE_2_SUPPORT == 1
    feature_2();
#endif
}