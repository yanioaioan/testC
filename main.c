#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int reverse(char **dest, char source[]);

int main(void)
{
  char name_array[]="My name";
  char *reversed_name=NULL;

  reversed_name=(char*)malloc(sizeof(name_array)*sizeof(char));

  printf("name: %s\n",name_array);
  if(reverse(&reversed_name,name_array))
      printf("\"%s\" reversed is \"%s\"\n",name_array,reversed_name);
  else
    printf("could not reverse string\n");

  if(reversed_name!=NULL)  /* memory cleanup */
    free(reversed_name);
  return 0;
}

int reverse(char **dest, char source[])
{
    //save string size (in advance cause it gets smaller as we +=1 iterate on it-might be a cause of logical error further down)
    int stringSize=strlen(source);
    char tmpName[stringSize];
    int charposition=0;

    while(*source !='\0')
    {
        //iterate source & store character by character to tmpName array
        tmpName[charposition++]=*source;
        //move to next character
        source+=1;

    }

    int start=0;
    int i=stringSize;

    //iterate from end to start on the tmpName..&..save at 0...till stringSize on tmpName
    while ( i>0)
    {
        i--;
        //store character
        (*dest)[start++]=tmpName[i];
    }


  return start;
}
