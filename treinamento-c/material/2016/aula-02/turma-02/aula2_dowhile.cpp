#include <stdio.h>

/// Do-While

/*

do {
    codigo
} while(condi��o);

*/

int main(){
    int turma;
    ///Executa primeiro os comandos entre o "do"
    ///Depois verifica a condi��o e volta pro loop
    do{
        printf("Qual a melhor turma?\n");
        scanf("%d", &turma);
        if (turma == 19)
            printf("Acertou!\n");
        else
            printf("Xupa bixaral\n");
    }while(turma != 19);
    return 0;
}
