#include <stdio.h>

/* Program for replacing multiple spaces with one space */

int main(){

    int c, s; /* input, if last isSpace */

    s = 0;

    while((c = getchar()) != EOF){
        if (s == 0 && c == ' ')
        {
            putchar(c);
            s = 1;
        }else if(s == 1 && c == ' '){
            ;
        }
        else{
            putchar(c);
            s = 0;
        }
        
    }

    return 0;
}