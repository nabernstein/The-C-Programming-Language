/*
    Exercise 1-15. Rewrite the temperature conversion program of Section 1.2 to
    use a function for conversion.
*/
#include <stdio.h>


float toFahr(float celsius){

    return (9.0/5.0) * celsius + 32;
}

float toCelsius(float fahr){
    return (5.0/9.0) * (fahr - 32.0);
}

main(){
    float f_lower = 0,
        f_upper = 300,
        f_step = 20;

    printf("\nFahrenheit to Celsius\n");
    for(float fahr = f_lower; fahr <= f_upper; fahr += f_step )     
        printf("%3.0f | %6.1f\n", fahr, toCelsius(fahr));

    float c_lower = -20,
        c_upper = 150,
        c_step = 10;

    printf("\nCelsius to Fahrenheit\n");
    for(float celsius = c_lower; celsius <= c_upper; celsius += c_step ){        
        printf("%3.0f | %6.1f\n", celsius, toFahr(celsius));
    }
}