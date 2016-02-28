
/*
       C language - UNIX style encryption program for ascii textfiles - (c) Eike Falk Anderson, 2013
*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#define PUSAGE fprintf(stderr,"USAGE: %s [source file] [destination file] [key]\n\n",argv[0]) /* predefined error/usage message */


/* compile with clang encode.c -o encode

   when you run this program it takes three inputs/parameters:
   1. the name of your sourse text file (the ASCII text file you want to encode)
   2. the name of your destination text file (the file that will have the encoded text in it)
   3. the keyword (the "password" for the encoded file)

   example:
   ./encode source.txt dest.txt secret
*/


int main(int argc,char *argv[]) /* argument vector 0 - program-name, argv 1 - source string, argv 2 - dest string, argv 3 - key string */
{
    int counter; /* a counter variable for counting through the characters of the password */
    char letter,lo,hi,rev,inv,enc; /* variables used for the letters of the text during the coding process */
    FILE *sfp=NULL; /* source file pointer */
    FILE *dfp=NULL; /* destination file pointer */

    if((sfp=fopen(argv[1],"r"))==NULL) /* open the text file (sfp) named in argument vector 1 for reading - print error message if this operation fails */
    {
        fprintf(stderr,"UNABLE TO OPEN FILE\n");
        PUSAGE;
        return 1; /* end program with error */
    }
    if((dfp=fopen(argv[2],"w"))==NULL) /* open the text file (dfp) named in argument vector 2 for writing - print error message if this operation fails */
    {
        fprintf(stderr,"UNABLE TO OPEN FILE\n");
        PUSAGE;
        return 1; /* end program with error */
    }

    counter=0; /* set the keyword character counter to 0 */
    while((letter=fgetc(sfp))!=EOF) /* process the source file by reading in the next letter (as 1 character/byte each) until the file ends, i.e. the EOF (end of file) character is read in */
    {
        if(counter==strlen(argv[3]))
        {
            counter=0; /* reset if the keyword overflows, i.e. if its end (string length) is reached */
        }

        //^ ~ XOR and FLIPPING WORK BUT NOT & |.

        /* do something to the read in characters/bytes */
        lo=letter<<1;
        hi=lo>>1;//HOWEVER, >>4 NEEDS CIRCULAR SHIFTS to WORK
//        rev=hi|lo;//UNREVERSABLE
//        inv=~rev;//UNREVERSABLE
        char c=argv[3][counter];
        enc=/*inv^argv[3][counter]*/hi^c;

        counter++; /* increase the counter, i.e. step to the next character of the keyword */

        fputc(enc,dfp);           /* write the encoded character to the destination file */
    }

    fclose(sfp); /* close file sfp */
    fclose(dfp); /* close file dfp */


    dfp=fopen(argv[2],"r");

    counter=0;
    while((letter=fgetc(dfp))!=EOF) /* process the source file by reading in the next letter (as 1 character/byte each) until the file ends, i.e. the EOF (end of file) character is read in */
    {
        if(counter==strlen(argv[3]))
        {
            counter=0; /* reset if the keyword overflows, i.e. if its end (string length) is reached */
        }

        //NOW APPLY SHIFTING IN REVERSE ORDER

        /* do something to the read in characters/bytes */        
//        lo=letter>>1;
//        hi=lo<<1;

        //rev=hi &~lo;
        //inv=~rev;
        char c=argv[3][counter];
        enc=/*inv^argv[3][counter]*/ letter^c;
        enc=enc<<1;
        enc=enc>>1;



        counter++; /* increase the counter, i.e. step to the next character of the keyword */

        printf("%c",enc);
        //fputc(enc,dfp);           /* write the encoded character to the destination file */
    }

    fclose(dfp); /* close file dfp */

    return 0; /* end with success */
}
