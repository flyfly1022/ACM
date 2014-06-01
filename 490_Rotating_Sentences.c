
/*
*  Programe:490 - Rotating Sentences
*  Coder: FRESH_Q
*  Date: MAY 31, 2014
*/

#include <stdio.h>
#include <string.h>

#define MAX_LINE 100
#define MAX_CHAR 101

char RO_SEN[MAX_LINE][MAX_CHAR];
int main()
{
    char c;
    int nOfLine = 0;
    int nOfChar = 0;
    int maxWord = 0;
    int maxLine = 0;
    int i, j;

    for (i = 0; i < MAX_LINE; i++)
    {
        for (j = 0; j < MAX_CHAR; j++)
        {
            RO_SEN[i][j] = ' ';
        }
    }
    
    while(scanf("%c", &c) != EOF)
    {
        if ((c == '\n') || (nOfChar == 100))
        {
            nOfLine++;
            nOfChar = 0;
        }
        else 
        {
            RO_SEN[nOfLine][nOfChar++] = c;
        }

        if (nOfChar > maxWord)
        {
            maxWord = nOfChar;
        }

        if (nOfLine > maxLine && nOfChar > 0)
        {
            maxLine = nOfLine;
        }
    }

    
    for (i = 0; i < maxWord; i++)
    {
        for (j = maxLine; j >=0; j--)
        {
            printf("%c", RO_SEN[j][i]);
        }
        printf("\n");
    }

   return 0;
}

