#include <stdio.h>
#include <ctype.h>

int main(void){

    char input;
    int word_counter = 0;
    int letter_counter = 0;
    int sum_of_letter = 0;

    while((input = getchar()) != EOF){
        if(input == ' ' || input == '\n'){
            word_counter++;
        }else if ( (input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z') ) {
            letter_counter++;
        }
    }
    printf("Word Counter = %d\n", ++word_counter);
    printf("Letter Counter = %d\n", letter_counter);
    printf("The average length of words is %d\n", letter_counter/word_counter);

}