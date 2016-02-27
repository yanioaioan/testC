
#include<stdio.h>

int main(int argc, char* argv[])
{
    FILE *f,*f2; /* file pointer */
    char filename[50]; /* filename string */
    int c; /* single character */

    if(argc==3)//name of the executable & 2 arguments
    {
        //open 1st argument for reading
        f=fopen(argv[1],"r");

        if (fopen(argv[2],"r")!=NULL)//file is the , do you want to overwrite?
        {
            printf("overwrite file %s, y/N\n",argv[2]);
            char answer;

            scanf("%c",&answer);
            fflush(stdin);
            if (answer=='y')
            {
                f2=fopen(argv[2],"w");

                if(f!=NULL && f2!=NULL)
                {
                    while( (c=fgetc(f))!=EOF )
                    {
                        printf("%c",toupper(c));
                        fputc(c,f2);
                    }

                }
                fclose(f);
                fclose(f2);
            }
            else
            {
                char newfilename[50];
                printf("enter a different filename than %s\n",argv[2]);

                fflush(stdin);
                scanf("%s",newfilename);
                fflush(stdin);

                f2=fopen(newfilename,"w");

                if(f!=NULL && f2!=NULL)
                {
                    while( (c=fgetc(f))!=EOF )
                    {
                        printf("%c",toupper(c));
                        fputc(c,f2);
                    }


                }
                fclose(f);
                fclose(f2);

            }
        }

    }
    else
    {
            /* request a filename */
            printf("Filename? - ");
            scanf("%s",filename);
            fflush(stdin);
            /* attempt to open the named file for reading */
            f=fopen(filename,"r");



        if(f!=NULL) /* if successful */
        {
            while((c=fgetc(f))!=EOF) /* step through file character by character */
            {
                printf("%c",toupper(c));
            }
            printf("\n");
            fclose(f); /* close the file afterwards */
            return 0;
        }
        else /* if file could not be opened */
        {
            return 1;
        }
    }
}
