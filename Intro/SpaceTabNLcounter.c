#include<stdio.h>

/* Program for counting spaces, new lines and tabs on input */

int main(){
    int c, nl, t, s; /* input, new line, tab, space */

    nl = t = s = 0;

    while ((c = getchar()) != EOF)
    {
        if (c  == '\t')
        {
            t++;
        }else if(c == '\n'){
            nl++;
        }else if(c == ' '){
            s++;
        }
    }

    printf("\nSpaces:%d Tabs:%d New Lines:%d\n", s, t, nl);

    return 0;
}