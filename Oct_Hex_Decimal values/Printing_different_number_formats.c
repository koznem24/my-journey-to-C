#include <stdio.h>
#include <inttypes.h>
#include <limits.h>

int main(){
    int value = 16;
    uint16_t me16 = 4567;
    printf("Value in Hex format : %x\n", value);
    printf("Value in Dec format : %d\n", value);
    printf("Value in Oct format : %o\n", value);

    char a = '\7';
    printf("%zd \032", sizeof(double));

    printf("me16 = %"PRId16"\n",me16);

    double double_value = 5.0, double_value2 = 3.0;

    printf("Checking precision of double: %la\n", 4e-16);

    printf("Char bits in this system: %d\n", SCHAR_MAX);


    
}