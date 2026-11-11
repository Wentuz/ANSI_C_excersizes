/* Program for printing a conversion table : Celsius to Fahrenheit */
/* Using for loop, in descending order*/
/* for Celc <0 ; 300 > */

#include <stdio.h>

int main(){
    int celc;
    int lower, upper, step;

    lower = 0;
    upper = celc = 300;
    step = 20;
    for (celc = upper; celc >= lower; celc = celc - step)
    {
        printf("%d\t%6.1f\n",celc,(celc * 1.8) + 32);
    }
    

    return 0;
}