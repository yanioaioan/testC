#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int cat(char ***, char *);


int totalstrings=1;
char choice;
char **stringArray=NULL;

int main(void)
{
    char string[51];

    do
    {
        fgets(string,2,stdin);

//        //allocate each string
//        {
//            if(stringArray==NULL)
//            {
//                //allocate each element of string in the stringArray
//                stringArray = (char**)malloc(totalstrings*sizeof(char*));
//            }
//            else
//            {
//                //allocate one more element of string type in the stringArray
//                stringArray = (char**)realloc(stringArray,++totalstrings*sizeof(char*));
//            }


            //acquire string
            printf("Input a string..");
            fgets(string,51,stdin);

//            int index=totalstrings-1;
//            //each string itself
//            stringArray[index]=(char*)malloc((strlen(string)+1)*sizeof(char*));
//            strcpy(stringArray[index],string);

//        }
        cat(&stringArray,string);

        printf("Continue? (y/n) - ");
        fgets(string,2,stdin); /* read input from keyboard - leave a safety buffer */
        choice=string[0]; /* use the first character from the previous read as the choice */


    }while(choice=='y' || choice=='Y');

    //iterate the array & print the strings
    for(int i=totalstrings-1; i>=0;i--)
    {
        printf("s=%s\n",stringArray[i]);
    }


    //Memory Clean up
    //delete each string element of the array
    for(int i=0; i<totalstrings/*+10*/;i++)
    {
        //each string itself
        free(stringArray[i]);
        printf("freeing element indexed: %d\n",i);

    }

    //delete array itself
    if (stringArray!=NULL)
    {
        free(stringArray);
    }


  return 0;
}

int cat(char ***dest, char *src)
{
    ////char ***tmpArrayPointer=&(*dest);

    //allocate each string

        if(/**tmpArrayPointer*/ *dest==NULL)
        {
            //allocate each element of string in the stringArray
            *dest = (char**)malloc(totalstrings*sizeof(char*));
        }
        else
        {
            //allocate one more element of string type in the stringArray
           *dest = (char**)realloc(*dest,++totalstrings*sizeof(char*));
        }


//        //acquire string
//        printf("Input a string..");
//        fgets(src,51,stdin);

        int index=totalstrings-1;
        //each string itself
        (*dest)[index]=(char*)malloc((strlen(src)+1)*sizeof(char*));
        strcpy((*dest)[index],src);



}
