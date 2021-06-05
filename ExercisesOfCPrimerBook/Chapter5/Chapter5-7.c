#include <stdio.h>

void print_cube();

int main(void){

    print_cube();

    return 0;
}

void print_cube(){
    float value;

    printf("Enter a value you want to find the cube of: ");
    scanf("%f", &value);

    printf("Cube of %.1f is %.1f\n",value, value*value*value );
}