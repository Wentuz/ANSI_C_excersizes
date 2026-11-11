#include <stdio.h>

/* Program for counting number of chars on input */

int main(){

    long nc;

    nc = 0;

    while (getchar() != EOF)
    {
        ++nc;
    }
    
    printf("%ld\n", nc);

    return 0;
}