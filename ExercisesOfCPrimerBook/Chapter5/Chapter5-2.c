#include <stdio.h>

int main(void){
    int value;
    int until;
    printf("Enter an Integer: ");
    scanf("%d", &value);

    until = value + 10;

    while(value <= until){
        printf("%-3d ",value);
        value++;
    }
    
    puts("");

}