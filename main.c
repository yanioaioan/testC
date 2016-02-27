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
    int counter=0;
    char tmpName[10];
    while(*source !='\0')
    {

//        (*dest)[counter]=*source;
        tmpName[counter]=*source;
        source+=1;
        counter+=1;
    }

    int i=counter;
    int start=0;
    while ( i>0)
    {
        i--;
        (*dest)[start++]=tmpName[i];

    }


  return 1;
}
