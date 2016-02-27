#include <stdio.h>
#include <stdlib.h>

#pragma
struct x
{


    char a;
    short t;
    char fw;
    short ts;
    char f;





};

struct y
{
    float f;
    char c;
    short int e;
    long int b;
    double d;
    int a;
};

struct z
{
    long int b;
    double d;
    float f;
    int a;
    short int e;
    char c;
};

#include <stddef.h>

int main(void)
{

    struct x a;
    struct y b;
    struct z c;

    /* add code here */

//    print out the size of each of the structure types

    printf("struct a=%d\n",sizeof(a));
    printf("offset of a.=%d\n",sizeof(a));


    printf("struct struct x.a =%d\n", (int)&(a.a) - (int)(&a));
    printf("struct c=%d\n",sizeof(c));


    return 0;
}


////////////////////////////////////////////////////////////////////////////////



//#include <stdio.h>
//#include <stdlib.h>

//typedef struct rational
//{
//    int quotient;
//    int denominator;
//} rational;

//rational rconstruct(int q,int d); /* construct a rational number from a quotient and a denominator - return the rational value 0/1 if the denominator is zero */

//rational radd(rational r1,rational r2); /* return the sum of the two rational numbers r1 and r2 (r1+r2) */
//rational rsub(rational r1,rational r2); /* return the difference of the two rational numbers r1 and r2 (r1-r2) */
//rational rmul(rational r1,rational r2); /* return the product of the two rational numbers r1 and r2 (r1*r2) */
//rational rdiv(rational r1,rational r2); /* return the division of the two rational numbers r1 and r2 (r1/r2) */

//int requals(rational r1,rational r2); /* return 1 if r1 is the same as r2, else return 0 */
//int rgreater(rational r1,rational r2); /* return 1 if r1 is greater than r2, else return 0 */
//int rsmaller(rational r1,rational r2); /* return 1 if r1 is smaller than r2, else return 0 */

//int rquotient(rational r); /* extract the quotient of a rational number */
//int rdenominator(rational r); /* extract the denominator of a rational number */

//rational itor(int i); /* convert an integer value to a rational number */
//float rtof(rational r); /* convert a rational number to a float */
//double rtod(rational r); /* convert a rational number to a double */

//int main(void)
//{
//    rational a,b,c; /* create 3 rational numbers */

//    a=rconstruct(1,2); /* a is 1/2 */
//    b=rconstruct(1,4); /* b is 1/4 */
//    c=itor(2);         /* c is 2/1 */

//    printf("Rational value a is %d/%d\n",rquotient(a),rdenominator(a));
//    printf("Rational value b is %d/%d\n",rquotient(b),rdenominator(b));
//    if(requals(a,b))
//    {
//        printf("Rational values a and b are identical.\n");
//    }
//    else
//    {
//        printf("Rational values a and b are not identical.\n");
//    }

//    if(rgreater(a,b))
//    {
//        printf("Rational  %d/%d is greater than %d/%d.\n",a.quotient,a.denominator,b.quotient,b.denominator);
//    }

//    a=radd(a,b); /* add b to a */
//    b=rsub(b,a); /* subtract a from b */
//    c=rmul(b,c); /* multiply b with c */

//    printf("Rational value c is %d/%d, which equates to %f\n",rquotient(c),rdenominator(c),rtof(c));

//    return 0;
//}

//rational rconstruct(int q,int d) /* construct a rational number from a quotient and a denominator - return the rational value 0/1 if the denominator is zero */
//{
//    rational r;

//    /* add appropriate code here */

//    r.quotient=q;
//    r.denominator=d;


//    return r;
//}

//rational radd(rational r1,rational r2) /* return the sum of the two rational numbers r1 and r2 (r1+r2) */
//{
//    rational r;

//    /* add appropriate code here */

//    return r;
//}

//rational rsub(rational r1,rational r2) /* return the difference of the two rational numbers r1 and r2 (r1-r2) */
//{
//    rational r;

//    /* add appropriate code here */

//    return r;
//}

//rational rmul(rational r1,rational r2) /* return the product of the two rational numbers r1 and r2 (r1*r2) */
//{
//    rational r;

//    /* add appropriate code here */

//    return r;
//}

//rational rdiv(rational r1,rational r2) /* return the division of the two rational numbers r1 and r2 (r1/r2) */
//{
//    rational r;

//    /* add appropriate code here */

//    return r;
//}

//int requals(rational r1,rational r2) /* return 1 if r1 is the same as r2, else return 0 */
//{

//    /* add appropriate code here */

//    return (r1.quotient==r2.quotient && r1.denominator==r2.denominator); /* replace with appropriate return statement */
//}

//int rgreater(rational r1,rational r2) /* return 1 if r1 is greater than r2, else return 0 */
//{

//    /* add appropriate code here */
//    //Least common denominator

//    int commonDenom = r1.denominator * r2.denominator;

//    //multiply both quotient/denominator of both frations with..
//    int cR1Coef=commonDenom/r1.denominator;
//    int cR2Coef=commonDenom/r2.denominator;

//    r1.quotient=cR1Coef*r1.quotient;    r1.denominator=cR1Coef*r1.denominator;
//    r2.quotient=cR2Coef*r2.quotient;    r2.denominator=cR2Coef*r2.denominator;

//    return (r1.quotient>r2.quotient); /* replace with appropriate return statement */
//}

//int rsmaller(rational r1,rational r2) /* return 1 if r1 is smaller than r2, else return 0 */
//{

//    /* add appropriate code here */

//    return 1; /* replace with appropriate return statement */
//}

//int rquotient(rational r) /* extract the quotient of a rational number */
//{

//    /* add appropriate code here */

//    return r.quotient; /* replace with appropriate return statement */
//}

//int rdenominator(rational r) /* extract the denominator of a rational number */
//{

//    /* add appropriate code here */

//    return r.denominator; /* replace with appropriate return statement */
//}

//rational itor(int i) /* convert an integer value to a rational number */
//{
//    return rconstruct(i,1);
//}

//float rtof(rational r) /* convert a rational number to a float */
//{

//    /* add appropriate code here */

//    return (float)r.quotient/(float)r.denominator; /* replace with appropriate return statement */
//}

//double rtod(rational r) /* convert a rational number to a double */
//{
//    return ((double)r.quotient)/((double)r.denominator); /* divide the quotient by the denominator */
//}

