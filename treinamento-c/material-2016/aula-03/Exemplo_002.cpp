///Exercicio para fazer logo apos ensinar matriz
///Preencha uma matriz 14 x 15 com os elementos na forma:
///(i) Aij = i + j se i - j > 0
///(ii) Aij = i^2 se i -j = 0
///(iii) Aij = i*j se i - j < 0
///Tarefas:
///1) Imprima a matriz na tela, precedida de "MATRIZ 1".
///2) Limpe a tela e imprima a matriz transposta da matriz inicial, precedida de "TRANSPOSTA DA MATRIZ 1".
///3) Procure o menor e o maior elemento da matriz, imprima a eles a ao seu produto.
///OBS.: procure-os, nao eh pra fazer a conta no papel.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[14][15], matriz1[15][14];
    int maior = 0, menor = 0;
    printf("MATRIZ\n\n");
    for(int i=0; i<=13; i++)
    {
        for(int j=0; j<=14; j++)
        {
            if (i - j > 0)
                matriz[i][j] = i+j;
            else if (i-j == 0)
                matriz[i][j] = i*i;
            else
                matriz[i][j] = i*j;
            if (matriz[i][j] > maior)
                maior = matriz[i][j];
            if (matriz[i][j] < menor)
                menor = matriz[i][j];
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
    system("PAUSE");
    system("cls");
    printf("TRANSPOSTA DA MATRIZ\n\n");
    for (int i = 0; i<=14; i++)
    {
        for(int j=0; j<=13; j++)
        {
            matriz1[i][j] = matriz[j][i];
            printf("%3d ", matriz1[i][j]);
        }
        printf("\n");
    }
    system("PAUSE");
    system("cls");
    printf("Maior elemento: %d\nMenor elemento: %d\nProduto: %d\n", maior, menor, maior*menor);
    return 0;
}
