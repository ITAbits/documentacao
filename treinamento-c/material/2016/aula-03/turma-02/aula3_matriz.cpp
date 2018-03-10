#include <stdio.h>

/// Matriz

int main(){
    // Declaração do tipo matriz[][], com as dimensões necessárias. As dimensoes devem ser valores, não variáveis
    int alunos[4][4];
    // Para preenche a matriz, são preciso dois for: um para pegar cada linha e outro para percorrer essa linha
    // Entrando em cada linha
    for (int i = 0; i < 4; i++){
        // Percorrendo uma linha determinada
        for(int j = 0; j < 4; j++)
            scanf("%d", &alunos[i][j]);
        // O acesso ao elemento ij é feito com os indices [i][j]
    }
    printf("\n");
    // Para imprimir é similar ao processo de preencher
    for (int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++)
            printf("%d ", 4, 2 * alunos[i][j]);
        // Deve-se imprimir uma quebra de linha ('\n') apos percorrer cada linha para ter o formato visual de matriz
        printf("\n");
    }
    return 0;
}
