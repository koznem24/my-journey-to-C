#include <stdio.h>

#define RENT 3852.99
#define BOOK "War and Peace"


int main(){
    
    printf("*%f*\n",RENT);
    printf("*%e*\n",RENT);
    printf("*%4.2f*\n",RENT);
    printf("*%10.3f*\n",RENT);
    printf("*%10.3e*\n",RENT);
    printf("*%+4.2f*\n",RENT);
    printf("*%010.2f*\n",RENT);

    puts("********************");

    printf("%.2f\n", 5.1);
    printf("%5.2d\n", 5);
    printf("%.5s\n", "Hello");


    int width = 6;
    printf("Number: %05.2d\n",6);

    float cost = 12.99;
    float percent = 80.0;

    printf("This copy of \"%s\" sells for $%2.2f.\n",BOOK,cost);
    printf("That is %.0f%% of list\n",percent);


    return 0;
}