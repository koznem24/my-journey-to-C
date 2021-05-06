#include <stdio.h>
#include <stdlib.h>

int addition(int *a,int *b){
    return *a + *b;
}

int subtraction(int *a, int *b){
    return *a - *b;
}

float division(int *a, int *b){
    return (float)*a/(float)*b;
}

int multiplication(int *a, int *b){
    return (*a)*(*b);
}

int main(){
    int num1;
    int num2;

    printf("a= ");
    scanf("%d/n",&num1);

    printf("b= ");
    scanf("%d/n",&num2);

    printf(
        "a + b = %d\na - b = %d\na * b = %d\na / b = %f\n",
        addition(&num1, &num2),subtraction(&num1, &num2),multiplication(&num1, &num2),division(&num1, &num2)
    );

}