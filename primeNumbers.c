#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct primal
{
    int number; /* a number */
    char mark;  /* flag marking the number as active (1) or inactive (0) */
} primal;


void initialize(primal *s,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        s[i].number=i+1;
        s[i].mark=1;
    }
}
static int totalIterations=0;
void markPrimes(primal *s,int size)
{
    /* add this function - it should mark all of the numbers in the passed primal array that are not prime numbers as inactive */

//    //Brute Force method
//    int i,j;
//    for(i=1;i<size;i++)
//    {
//        for(j=2;j<i;j++)
//        {
//            totalIterations+=1;
//            if (s[i].number%j==0)
//            {
//                s[i].mark=0;
//                break;
//            }
//        }
//    }



//Input: an integer n > 1

//Let A be an array of Boolean values, indexed by integers 2 to n,
//initially all set to true.

//for i = 2, 3, 4, ..., not exceeding √n:
//  if A[i] is true:
//    for j = i2, i2+i, i2+2i, i2+3i, ..., not exceeding n :
//      A[j] := false
//Output: all i such that A[i] is true.

    int i,j;
    int k;
    int uplimit=sqrt(size);
    for(i=2;i<=uplimit;i++)
    {
        if (s[i].mark==1)
        {   int counter;
            for(j=i*i, counter=0; counter<size; counter++)
            {
                totalIterations++;

                int tmp=i*i+counter*i;
                if (tmp<=size)//up till tmp is n BUT not exceeding n:
                {
                    printf("%d%c%d%c%d%c%d\n",i,'*',i,'+',counter,'*',i);
                    s[tmp-1].mark=0;//decrement the counter to derive the proper number saved in the s aray of integers, when tmp=4..number 4 is saved at s[3]..and so on
                }
                else
                {
                    break;
                }
            }
        }
    }

}

int main(void)
{
    int size=20;
    int i,j,prime_numbers[200];
    primal source_numbers[size]; /* an array of source values */

    for(i=0;i<200;i++) prime_numbers[i]=0; /* initialize the prime numbers array to 0 */

    initialize(source_numbers,size); /* initialize the source numbers array to hold the numbers 1-1000 */

    markPrimes(source_numbers,size); /* identify the prime numbers in the source numbers array */

    totalIterations+=1;
    /* copy the primes from the source numbers to the prime numbers array */
    for(i=0,j=0;i<size;i++)
    {
        if(source_numbers[i].mark) /* if the current source number is a prime */
        {
            prime_numbers[j]=source_numbers[i].number; /* copy the number */
            j++; /* increment the target index */
        }
    }

    /* print the prime numbers */
    for(i=0,j=0;prime_numbers[i]!=0;i++,j++)
    {
        printf("%3d ",prime_numbers[i]);
        if(j==9) /* periodically print a newline and then reset j */
        {
            printf("\n");
            j=-1;
        }
    }

    return 0;
}
