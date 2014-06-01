
/*
 *  Programe: 694 - The Collatz Sequence
 *  Coder: FRESH_Q
 *  Date: MAY 31, 2014
 */

#include <stdio.h>
#include <string.h>

int getTerms(long long A, long long limit)
{
    int terms = 0;
    while (1){
        if (A > limit)
        {
            return terms;
        }
        else if (A == 1)
        {
            terms++;
            return terms;
        }
        else if (A%2 == 0)  /* A is even */
        {
            A = A/2;
            terms++;
        }
        else
        {
            A = A*3+1;
            terms++;
        }
    }
}

int main()
{
    int caseNum = 1;
    /* BE AWARE!!! need to set A, limit to long long, so it would get into infinite loop when A got big number*/
    long long A, limit, terms;  

    while ((scanf("%lld%lld", &A, &limit) == 2) && (A > 0) && (limit > 0))
    {
        terms = getTerms(A, limit);
        printf("Case %d: A = %lld, limit = %lld, number of terms = %lld\n", caseNum, A, limit, terms);
        caseNum++;
    }
    return 0;
}

