#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a;
    int counter = 0;
    char b[512];
    printf("\033[47;30m\n");
    if (argc < 2) {
        printf("usage: %s <number>\n", argv[0]);
        return 1;
    }

    

    a = atoi(argv[1]);

    

    if (a < 1) {
        printf("error: number must be greater than 0\n");
        return 1;
    }

    while (fgets(b, sizeof(b), stdin) != NULL) {

        /* Remove o \n que fgets colocou */
        b[strcspn(b, "\n")] = '\0';

        if (counter < a - 1) {
            printf("%s,", b);
        }
        else {
            printf("%s\n", b);
            counter = -1;
        }

        counter++;
    }

    return 0;
}