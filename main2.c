#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int cat(char ***, char *);

int main(void)
{
  char string[51];
  char **output=NULL;
  char choice;
  int i;



  do
  {
      fgets(string,51,stdin);

    printf("Please enter a string [<50 chars]: ");
    fgets(string,51,stdin);



    if(cat(&output,string))
    {
        printf("\n\nThe string now contains:\n%s\n",*output);
    }
    else
    {
      printf("error: memory (re-)allocation failed!\n\n");
      return 1; /* exit with error */
    }
    printf("Continue? (y/n) - ");
    fgets(string,2,stdin); /* read input from keyboard - leave a safety buffer */
    choice=string[0]; /* use the first character from the previous read as the choice */
  } while(choice=='y' || choice=='Y');



  free(output);
  return 0;
}

int totalstrings=0;
int cat(char ***dest, char *src)
{

    //inilialize array of 1 string only
    if(*dest==NULL)
    {
        *dest = (char**)malloc(++totalstrings * sizeof(char*));
    }
    else
    {
        //increase amount of "string elements" in the array
        *dest = (char**)realloc(*dest, ++totalstrings * sizeof(char*));
    }

    if(**dest ==NULL)
        **dest = (char*)malloc( (strlen(src)+1)* sizeof(char));
    else
        **dest = (char*)realloc(*dest, totalstrings++ * sizeof(char));

    *dest[totalstrings-1] = src;





//    if(*dest==NULL)
//    {
//        *dest=(char *)malloc(strlen(src)*sizeof(char));
//        strcpy(*dest,src);
//    }
//    else
//    {
//        *dest=(char *)realloc(*dest,2*strlen(src)*sizeof(char));
//        strcat(*dest,src);
//    }
}
