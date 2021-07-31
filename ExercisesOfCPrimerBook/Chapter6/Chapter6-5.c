#include <stdio.h>


void take_a_guess(){
    int max = 100;
    int min = 0;
    int guess = 50;
    char input;

    printf("Is your guess:  %d\n", guess);
    printf("For Correct Answer: c\n");
    printf("Lower: l\n");
    printf("Higher: h\n");

    while( (input = getchar()) != 'c'){

        if(input == 'l'){
            max = guess;
            guess = (min + max) / 2;
        } else if (input == 'h'){
            min = guess;
            guess = (min + max) / 2;
        }

        printf("Is your guess:  %d\n", guess);
        printf("For Correct Answer: c\n");
        printf("Lower: l\n");
        printf("Higher: h\n");

    }

    puts("Huh, Finally :)");
}

int main(void){
    take_a_guess();
    return 0;
}