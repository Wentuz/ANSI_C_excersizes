#include<stdio.h>

#define IN 1
#define OUT 0

/* Program for converting tabs and spaces into new lines */

int main()
{
    int c, state;
    
    state = OUT;
    while((c = getchar()) != EOF)
    {
        if (state == OUT)
        {
            if (c != ' ' && c != '\t')
            {
                state = IN;
                putchar(c);
            }
        }else
        {
            if (c == ' ' || c == '\t')
            {
                state = OUT;
                putchar('\n');
            }
            else
            {
                putchar(c);
            }
            
        }
        
    }
    return 0;
}