#include <stdio.h>

void decimal_to_binary(int n);

int main(){
    decimal_to_binary(10);
    puts("");
}

void decimal_to_binary(int n){
    int r = n % 2;
    if (n >= 2)
        decimal_to_binary(n/2);
    putchar('0' + r);

    return;
}