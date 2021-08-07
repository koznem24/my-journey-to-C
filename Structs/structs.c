#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Student{
  //  struct Person student1;
    int * age;
    float gpa;
};

struct Person{
    char *name;
    char *surname;
};

// void print(struct Student student){
//     printf("     Name   |  ID  |Age| GPA\n");
//     printf("%s| %s| %d| %f \n", student.name,student.id,student.age,student.gpa);
// }

int main(){
    int someAge = 21;
    struct Student ali = {
        
    //.student1 = {"",""},
    .age = &someAge,
    5.0
    };
    printf("The size of Struct: %lu\n", sizeof(ali) );
    printf("Age %d\n", *ali.age);

    float a = 1.0/3.0;    
    printf("%f", a+a+a);
}