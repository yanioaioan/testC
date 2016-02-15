#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int cat(char **, char *);


char choice;
char *output=NULL;

int main(void)
{
    char string[51];

    do
    {
        fgets(string,2,stdin);

        printf("enter String");
        fgets(string,50,stdin);

        if(cat(&output,string))
        {
            printf("String is now= %s \n",output);
        }


        printf("Continue? (y/n) - ");
        fgets(string,2,stdin); /* read input from keyboard - leave a safety buffer */
        choice=string[0]; /* use the first character from the previous read as the choice */

    }while(choice=='y' || choice=='Y');



    //delete string
    if (output!=NULL)
    {
        free(output);
    }


  return 0;
}

int cat(char **dest, char *src)
{
    if (*dest==NULL)
    {
        (*dest)=(char*)malloc((strlen(src)-1)*sizeof(char));
//        src[strlen(src) - 1]='\0';//omit newline while concatenating
        strcpy(*dest,src);
    }
    else
    {
        //allocate 2
        (*dest)=(char*)realloc(*dest, 2*(strlen(src)-1)*sizeof(char));
//        src[strlen(src) - 1]='\0';//omit newline while concatenating
        strcat(*dest,src);
    }

}
