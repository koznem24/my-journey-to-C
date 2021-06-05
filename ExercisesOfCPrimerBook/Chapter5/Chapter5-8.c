#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void temperatures(double value);
int is_valid_number(char string[]);

int main(void){
    char temp[15];
    char *pointer;

    printf("Enter a Temperature in Fahrenheit: ");
    scanf("%15s", temp);

    while(is_valid_number(temp)){
        temperatures(strtod(temp,&pointer));
        
        printf("Enter a Temperature in Fahrenheit: ");
        scanf("%15s", temp);

    }
    return 0;
}

void temperatures(double value){

    const double fahrenheit = value;
    const double celsius = 1.8 * fahrenheit + 32; 
    const double kelvin = celsius + 273.16;

    printf("Fahrenheit: %.2lf, Celsius: %.2lf, Kelvin: %.2lf\n", fahrenheit, celsius, kelvin);
}

int is_valid_number(char string[]){
    int number_of_dots;
    int number_of_minus;
    int number_of_plus;

    number_of_dots = number_of_minus = number_of_plus = 0;

    for(int i=0; i < strlen(string); i++){
        if(string[i] == '.') number_of_dots++;  if(number_of_dots > 1) return 0; 
        if(string[i] == '-') number_of_minus++;  if(number_of_minus > 1) return 0;
        if(string[i] == '+') number_of_plus++; if(number_of_plus > 1) return 0; 

        if((string[i] > '9' || string[i] < '0') && string[i] != '.' && string[i] != '-'&& string[i] != '+' ) return 0;
        if(number_of_minus == 1 && number_of_plus == 1) return 0; 
    }

    return 1;
}