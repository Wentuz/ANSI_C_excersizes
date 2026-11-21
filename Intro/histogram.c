#include<stdio.h>
#define IN 1
#define OUT 0
#define MAX 255
/* Generates a histogram for word length count */

int main(){
    int c, state, maxLen, maxNum;
    int i, j, nw;
    int count[MAX]; 
    int temp[MAX];

    state = maxLen = maxNum = nw = OUT;

    for (i = 0; i < MAX; i++)
    {
        count[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            count[nw] = count[nw] + 1;

            if (maxLen < nw) maxLen = nw;
            if (maxNum < count[nw]) maxNum = count[nw];

            nw = 0;
        }else{
            ++nw;
        }
    }
    
    
    for (i = maxNum; i > 0; i--)
    {
        printf("|%2d|",i);
        for (j = maxLen; j > 0; j--)
        {
            if (count[j] > 0 && count[j] >= i)
            {
                printf("%3d",count[j]);
            }else{
                printf("   ");
            }
            
        }
        printf("\n");
    }
        
    printf("|%2d|",0);

    for (j = maxLen; j > 0; j--)
    {
        printf("%3d",j);
    }

    return 0;
}