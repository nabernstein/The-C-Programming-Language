/*
    Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit  table.
*/

#include <stdio.h>

/* print Celsius-Fahrenheit table
    for celsius = -20, -10, ..., 150; floating-point version */

main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = -20;      /* lower limit of temperature table */
    upper = 150;    /* upper limit */
    step = 10;      /* step size */

    /* heading */
    printf(" C  |   F\n");

    celsius = lower;
    while ( celsius <= upper){
        fahr = (9.0/5.0) * celsius + 32;
        printf("%3.0f | %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}