#include <stdio.h>

#define MIN_IN_HOUR 60  

int main(void){
    int minutes;
    int hours;
    printf("Enter 0 to quit the program!\n");
    printf("Enter minutes:");
    scanf("%d", &minutes);

    while(minutes > 0){
        hours = minutes/MIN_IN_HOUR;
        minutes = minutes % MIN_IN_HOUR;

        printf("HH:MM\n");
        printf("%02d:%02d\n", hours,minutes);

        printf("Enter minutes:");   
        scanf("%d", &minutes);
    }

}