#include <stdio.h>

#define RENT 3852.99


int main(){
    
    printf("*%f*\n",RENT);
    printf("*%e*\n",RENT);
    printf("*%4.2f*\n",RENT);
    printf("*%10.3f*\n",RENT);
    printf("*%10.3e*\n",RENT);
    printf("*%+4.2f*\n",RENT);
    printf("*%010.2f*\n",RENT);
    return 0;
}