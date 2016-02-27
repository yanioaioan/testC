
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char shifted(char c,char s)
{
    /*
       shift character c by s characters if it is one of the printable letters (upper
       or lowercase); return the shifted character value if it was a letter or the
       original character in any other case - make sure that the shift wraps around
       correctly at the a-z/z-a shifts
    */

    char shiftedChar=0;
    if ( (c+s>=65 && c+s<=90) || (c+s>=97 && c+s<=122))
    {
        shiftedChar=c+s;
    }
    else
    {
        shiftedChar=c;
    }


    return shiftedChar; /* dummy return */
}


//Use:
//1)source.txt destination.txt 2 -e
//2)source.txt destination.txt 2 -d
int main(int argc, char *argv[])
{
    char c;
    int shiftValue;
    printf("%d\n",atoi(argv[3]));//atoi needed cause arguments are strings, so they need to be converted to integers if they are meant to be used as integers
    shiftValue=atoi(argv[3]);//assigned shifted value from argument
    //char message1[257],message2[257];
    FILE *sourceFile,*destinationFile;
    sourceFile=fopen(argv[1],"r");
    destinationFile=fopen(argv[2],"w");

    printf("original file: %s\n",argv[1]);
    //fgets(message1,256,stdin); /* retrieves a string of a set maximum length (or earlier if the return key is pressed) from the keyboard */
    //    fflush(stdin);

    printf("destination file: %s\n",argv[2]);
    //    fgets(message1,256,stdin); /* retrieves a string of a set maximum length (or earlier if the return key is pressed) from the keyboard */
    //    fflush(stdin);


    //    scanf("%d",&shiftValue);
    //    fflush(stdin);

    char* encodeDecodeSwitch=argv[4];
    if (encodeDecodeSwitch[1]=='e')//encoding mode
    {
        shiftValue=shiftValue;
    }
    else if (encodeDecodeSwitch[1]=='d')//decoding mode
    {
        shiftValue=(-1)*shiftValue;
    }
    printf("your shift value as a number: %d ",shiftValue);


    if (sourceFile!=NULL && destinationFile!=NULL)
    {
        while ((c=fgetc(sourceFile))!=EOF)
        {
            char tmp=shifted(c,shiftValue);
            fputc(tmp , destinationFile);
        }
    }

    fclose(destinationFile);
    fclose(sourceFile);

    //Additional Printint out
    sourceFile=fopen(argv[1],"r");
    destinationFile=fopen(argv[2],"r");
    if (sourceFile!=NULL && destinationFile!=NULL)
    {
        printf("\nSource file %s :\n", argv[1]);
        while ((c=fgetc(sourceFile))!=EOF)
        {
            printf("%c",c);
        }

        printf("\nDestination file %s :\n", argv[2]);
        while ((c=fgetc(destinationFile))!=EOF)
        {
            printf("%c",c);
        }
    }

    /*
       add code to cycle through the original message string (array) that shifts the
       printable letters according to the shift value entered (by passing them to the
       shifted function), but which leaves punctuation marks and spaces intact
    */
//    for (i=0;i<strlen(message1);i++)
//    {
//        printf("%c",message1[i]);
//        message2[i]=shifted(message1[i],shift);

//    }

//   printf("Original message: %s\nShifted by %d: %s\n",message1,shift,message2);

    return 0;
}
