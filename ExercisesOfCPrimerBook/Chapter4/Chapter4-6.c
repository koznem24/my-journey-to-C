#include <stdio.h>
#include <float.h>

int main(){
    double double_result = 1.0/3.0;
    float float_result = 1.0/3.0;

    printf("First  Time: float = %.4f, double = %.4lf\n", float_result,double_result);
    printf("Second Time: float = %.12f, double = %.12lf\n", float_result, double_result);
    printf("Third  Time: float = %.16f, double = %.16lf\n",float_result,double_result);

    printf("%.16f\n",FLT_DIG);
    printf("%.16lf\n",DBL_DIG);


}