#include <stdio.h>

void change(int *a, int *b);

int main(void){
    int a = 10;
    int b = 100;

    printf("a = %d, b = %d\n", a,b);
    change(&a, &b);
    printf("a = %d, b = %d\n", a,b);

    int array[5] = {32,21};
    int * point_to_array = &array[0];
    puts("****************************");
    printf("%p\t = %d\n",point_to_array, *point_to_array);
    printf("%p\t = %d\n",point_to_array+1, *(point_to_array+1));

    int value1 = 2;
    int * pointer_exmple = &value1;

    pointer_exmple++;

    printf("Changed? a = %d\n", *pointer_exmple);

    printf("*********************\n");

    int two_dim_array[2][2] = {
        {1,2},
        {3,4}
    };

    printf("value of two_dim_array[1][0] = %d\n", two_dim_array[0][0]);
    printf("value of **(two_dim_array) = %d\n", **(two_dim_array));

    int (*pt)[2] = two_dim_array;

    // what is the difference between 
    // (two_dim_array[0]) = (&two_dim_array[0][0]) = (*two_dim_array)


    // *pt = **two_dim_array;
    printf("*pt = %d\n", **pt);
    // printf("*pt = %d\n")


    printf("***********Pointer to Pointer (**) *****************\n");

    int value = 45;
    int *just_pointer = &value;
    int **p_to_p; 
    p_to_p = &just_pointer;

    printf("Trying to get the value by p_to_p: %d\n", **p_to_p);
    printf("what does *p_to_p return? : %p\n",*p_to_p );

}

void change(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;


}

