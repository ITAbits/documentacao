#include <stdio.h>
#include <string.h>

int main()
{
    char nome1[30] = "Fuma", nome2[10] = "Fulano";
    ///1
    strcat(nome1, nome2+4);
    printf("%s\n", nome1);
    ///2
    strcpy(nome1+2,nome2);
    printf("%s\n", nome1);
    ///3
    strcpy(nome1+2,nome2+3);
    printf("%s\n", nome1);
    return 0;
}
