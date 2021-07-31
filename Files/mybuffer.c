#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

static int arr[SIZE];

void fillArray(int*);

int main(){

    char * buf = (char *)malloc(sizeof(int)*1024*1024);
    FILE * fp = fopen("test.txt", "w");
    setvbuf(fp, buf,_IOFBF, sizeof(int)*1024*1024);
    fillArray(arr);
    fwrite(arr,sizeof(int), 256, fp);
    fclose(fp);

}

void fillArray(int *arr){
    for(int i = 0; i < SIZE; i++){
        arr[i] = i;
    }
}