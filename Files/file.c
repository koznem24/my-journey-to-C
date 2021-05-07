#include <stdlib.h>
#include <stdio.h>

int main(){
    // Writing to ...
    FILE * fpointer_writer = fopen("example.txt","w");

    fprintf(fpointer_writer,"Hello world");

    fclose(fpointer_writer);
    // Writing from ...
    FILE * fpointer_reader = fopen("example.txt","r");
    char text[10];

    while(fscanf(fpointer_reader,"%s",text) != -1){
        printf("%s ", text);
    }

    puts("");

    

    fclose(fpointer_reader);
    return 0;
}