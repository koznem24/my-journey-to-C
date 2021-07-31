#include <stdio.h>

int main(){

    int counter = 0;

    while(getchar() != EOF)
        counter++;
    
    printf("Number of Characters: %d", counter);


    return 0;
}