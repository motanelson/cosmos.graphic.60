#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a;
    char b[4096];
    char *c;
    printf("\033[47;30m\n");
    
    while (fgets(b, sizeof(b), stdin) != NULL) 
    {

        /* Remove o \n que fgets colocou */
        b[strcspn(b, "\n")] = '\0';

        while(1)
        {
            c=strstr(b,",");
            if(c==NULL)break;
            c[0]='\n'; 
        }
        printf("%s\n",b);

    }

    return 0;
}