#include <stdio.h>
#include <ctype.h>

int main(void){

    char input;
    int upperCounter = 0, lowerCounter = 0;

    while((input = getchar()) != EOF){

        if(isupper(input)){
            upperCounter++;
        }

        if(islower(input)){
            lowerCounter++;
        }
    }

    printf("UpperCase Letters: %d\n",upperCounter);
    printf("LowerCase Letters: %d\n",lowerCounter);


    return 0;
}