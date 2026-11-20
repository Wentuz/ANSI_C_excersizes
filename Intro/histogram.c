#include<stdio.h>
#define IN 1
#define OUT 0
#define MAX 255
/* Generates a histogram for word length count */

int main(){
    int c, state, maxLen, maxNum;
    int i, j;
    int count[MAX][MAX]; 
    int temp[MAX];

    state = maxLen = maxNum = OUT;

    /*
    while ((c = getchar()) != EOF)
    {
        
    }
    */

    maxLen = maxNum = 10;
    for (i = maxNum; i > 0; i--)
    {
        printf("|%2d|",i);
        for (j = maxLen; j > 0; j--)
        {
            printf("%3d",j);
        }
        printf("\n");
    }
    

    return 0;
}