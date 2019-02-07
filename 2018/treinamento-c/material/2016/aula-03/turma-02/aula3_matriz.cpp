#include <stdio.h>

/// Matriz

int main(){
    // Declara��o do tipo matriz[][], com as dimens�es necess�rias. As dimensoes devem ser valores, n�o vari�veis
    int alunos[4][4];
    // Para preenche a matriz, s�o preciso dois for: um para pegar cada linha e outro para percorrer essa linha
    // Entrando em cada linha
    for (int i = 0; i < 4; i++){
        // Percorrendo uma linha determinada
        for(int j = 0; j < 4; j++)
            scanf("%d", &alunos[i][j]);
        // O acesso ao elemento ij � feito com os indices [i][j]
    }
    printf("\n");
    // Para imprimir � similar ao processo de preencher
    for (int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++)
            printf("%d ", 4, 2 * alunos[i][j]);
        // Deve-se imprimir uma quebra de linha ('\n') apos percorrer cada linha para ter o formato visual de matriz
        printf("\n");
    }
    return 0;
}
