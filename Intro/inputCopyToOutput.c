#include <stdio.h>

/* Program for copying input to output*/

int main(){

    char c;

    printf("Start program :\n");

    c = getchar();
    while((c = getchar()) != EOF){
        putchar(c);
    }
    return 0;
}