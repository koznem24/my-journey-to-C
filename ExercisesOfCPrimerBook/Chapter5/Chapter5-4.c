#include <stdio.h>

int main(void){
    int height;
    float cm,inches;

    printf("Enter a height in centimeters: ");
    scanf("%d",&height);

    while(height > 0){
        printf("%.1f cm = %.2f feet, %.2f inches\n", (float) height, (float) height/30.48, (float) height/2.54);
        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%d",&height);
    }

    printf("bye\n");

    return 0;
}