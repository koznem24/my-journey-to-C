#include <stdio.h>

int main(void){

    char input;
    int counter = 0;

    while((input = getchar()) != EOF){

        if(counter == 10){
            counter = 0;
            puts("");
        }

        if(input == '\n'){
            printf("\\n");
            counter = 0;
            puts("");
        } else if(input == '\t'){
            printf("\t \\\t");
        } else 
            printf("%c %d   ", input, input);

        counter++;
    }

    return 0;
}