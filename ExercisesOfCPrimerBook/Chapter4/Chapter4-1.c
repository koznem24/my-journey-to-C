#include <stdio.h>

int main(){
    char firstName[40];
    char lastName[40];

    printf("Enter your first Name: ");
    scanf("%s",firstName);

    printf("Enter your last Name: ");
    scanf("%s", lastName);

    printf("%s %s\n", lastName, firstName);
}