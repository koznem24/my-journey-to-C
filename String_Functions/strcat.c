#include <stdio.h>
#include <string.h>
#define ANSWER "GRANT"

int main(){
    char string1[80] = "Something1";
    char * string2 = "Something2";

    strcat(string1,string2);

    printf("%s\n",string1);

    printf("%p\n ANSWER + 1 = %p\n sizeof(ANSWER) = %lu\n", ANSWER, ANSWER + 1, sizeof(ANSWER));
}