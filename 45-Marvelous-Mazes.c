
/*
*  Programe:445 - Marvelous Mazes
*  Coder: FRESH_Q
*  Date: MAY 31, 2014
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_CHAR 133

char str[MAX_CHAR];

void printNChar (int times, char c)
{
    while (times > 0)
    {
        printf("%c", c);
        times--;
    }
}

/* totoalNum: how many number need to calculate */
int calculateN(char *c, int totalNum)
{
    int total = 0;
    while (totalNum > 0)
    {
        total += ((*c) - '0');
        c++;
        totalNum--;
    }
    return total;
}
int main()
{
    long len = 0;
    
    while(gets(str) != NULL)
    {
        
        if (str[0] == '\0')
        {
            printf("\n");
        }
        else
        {
            len = strlen(str);
            /* Get the char first and then calculate the number */
            int i;
            int total;
            int numPosition = 0; /* position of the num */
            for (i = 0; i < len; i++)
            {
                if(str[i] == '!')
                {
                    printf("\n");
                    numPosition = i+1;
                }
                else if (!isdigit(str[i]))
                {
                    if (i - numPosition == 1) total = str[i-1] - '0';
                    else total = calculateN(&str[numPosition], i - numPosition);
            
                    if (str[i] == 'b') printNChar(total, ' ');
                    else printNChar(total, str[i]);
                    numPosition = i +1;
                }
            }
            printf("\n");
        }
    }

   return 0;
}

