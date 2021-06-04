#include <stdio.h>
#include <string.h>
int main(){
    char firstName[30];
    char lastName[30];

    printf("Enter your First Name: ");
    scanf("%s", firstName);

    printf("Enter your Last Name: ");
    scanf("%s", lastName);

    printf("%s %s\n", firstName, lastName);
    printf("%*d %*d\n", strlen(firstName),strlen(firstName),strlen(lastName),strlen(lastName));

}