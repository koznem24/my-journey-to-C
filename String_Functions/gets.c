#include <stdio.h>

int main(){
    char name[30];

    // while((fgets(name,30,stdin))!=NULL)
    //     printf("%s", name);

    char a = 'a', b = 'b', c = '\0' ; 
    char *ptr[]= {&a,&b,&c};
    char * pointer = *ptr;

    while(*pointer){
        printf("%c", *pointer);
        pointer++;
    }



}

