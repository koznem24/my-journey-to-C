#include <stdio.h>

int main(void){
    int count = 0,sum = 0,value;
    printf("Enter a value that you want to find sum of: ");
    scanf("%d", &value);

    while(count++ < value)
        sum+=count*count;

    printf("Sum : %d\n", sum);

    return 0;
}