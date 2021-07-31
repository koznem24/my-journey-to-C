#include <stdio.h>
#include <string.h>

int value;
int main(void){
    printf("%d",value);
    char str0[20] = "I don't know";
    char * str1 = "Hello";

    strcpy(str0,str1);
    {
        puts(strcpy(str0,str1));
    }
    
}