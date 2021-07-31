#include <stdio.h>

int up_and_down(int n);

int main(){
    printf("\n%d\n",up_and_down(10));
    return 0;
}

int up_and_down(int n){
   
 if(n == 0 || n == 1)
    return 1;
 else
 return n * up_and_down(n-1);

}
