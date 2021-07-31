#include <stdio.h>
#define COLS 2

void some_action_with_array(int (*a)[2][COLS]);

int main(){

    int a[2][2] = {
        {1,2},
        {3,4}
    };

    some_action_with_array(&a);
}

void some_action_with_array(int (*arr)[2][COLS]){

    printf(" arr = %p; arr + 1 = %p; sizeof(arr)= %lu\n", arr, arr+1, sizeof(arr));
    printf(" *arr = %p; *arr + 1 = %p; sizeof(*arr)= %lu\n", *arr, *arr+1, sizeof(*arr));
    printf(" **arr = %p; **arr + 1 = %p; sizeof(**arr)= %lu\n", **arr, **arr+1, sizeof(**arr));
    printf(" ***arr = %d; ***arr + 1 = %d; sizeof(***arr)= %lu\n", ***arr, ***arr+1, sizeof(***arr));

    


    // int total = sizeof(*arr); 
    // printf("total: %d\n", total);
    
    // int columns =  sizeof(*arr)/sizeof((*arr)[0]); 
    // printf("sizeof(*arr[0]) = %lu\n", sizeof((*arr)[0]));
    // printf("columns: %d\n", columns);
    
    // int rows = total/columns; 
    // printf("rows: %d\n", rows );

    // for(int i = 0; i < columns; i++){
    //     for(int j = 0; j < rows; j++){
    //         printf("arr[%d][%d] = %d\n", i,j,(*arr)[i][j]);
    //     }
    // }

    
}