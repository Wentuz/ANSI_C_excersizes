#include<stdio.h>

/* Translates tabs(\t), new lines(\n), backspaces(\b),  */
/* inverted slash(\\)                                   */
/* into more readable form                              */

int main(){
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            printf("\\t");
        }
        else if(c == '\b')
        {
            printf("\\b");
        }
        else if(c == '\n')
        {
            printf("\\n");
        }
        else if(c == '/')
        {
            printf('\\');
        }
        else
        {
            putchar(c);
        }
    }
    

    return 0;
}