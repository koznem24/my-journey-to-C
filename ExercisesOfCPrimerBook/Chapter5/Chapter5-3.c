#include <stdio.h>

const int DAYS_IN_A_WEEK = 7;

int main(void){

    int actual_days, calculated_days, weeks;

    printf("Enter days: ");
    scanf("%d",&actual_days);

    while(actual_days > 0){

        weeks = actual_days / DAYS_IN_A_WEEK;
        calculated_days = actual_days % DAYS_IN_A_WEEK;

        printf("%d days are %d weeks, %d days\n", actual_days, weeks, calculated_days);
        printf("Enter days:");
        scanf("%d",&actual_days);
    }
    

    return 0;
}