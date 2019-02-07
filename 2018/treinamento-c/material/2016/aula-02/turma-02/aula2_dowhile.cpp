#include <stdio.h>

/// Do-While

/*

do {
    codigo
} while(condição);

*/

int main(){
    int turma;
    ///Executa primeiro os comandos entre o "do"
    ///Depois verifica a condição e volta pro loop
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
