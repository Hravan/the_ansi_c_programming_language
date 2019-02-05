/*Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.*/

#include <stdio.h>

int main(){
    float fahr, celsius;
    float lower, upper, step;

    lower = -17.8;
    upper = (5.0/9.0) * (300 - 32.0);
    step = upper / 15.0;

    printf("Celsius-Fahrenheit table\n");

    celsius = lower;
    while (celsius <= upper){
        fahr = celsius * (9.0 / 5.0) + 32;
        printf("%6.1f %6.1f\n", celsius, fahr);
        celsius += step;
    }

    return 0;
}
