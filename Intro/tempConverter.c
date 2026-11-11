/* Program for printing a conversion table : Celsius to Fahrenheit */
/* for Celc <0 ; 300 > */

#include <stdio.h>

int main(){
    int fahr, celc;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celc = lower;

    while (celc <= upper)
    {
        fahr = (celc * 1.8) + 32;
        printf("%d\t%d\t\n",celc, fahr);
        celc = celc + step;
    }
    

    return 0;
}