#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Student{
    char* name;
    char id[15];
    int age;
    float gpa;
};

void print(struct Student student){
    printf("     Name   |  ID  |Age| GPA\n");
    printf("%s| %s| %d| %f \n", student.name,student.id,student.age,student.gpa);
}

int main(){

    struct Student ali;
    ali.name = "Muhammad Ali";
    ali.age = 20;
    strcpy(ali.id,"41455");
    ali.gpa = 4.1;

    print(ali);

}