///Exercicio da Aula 03 do URI
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 67, matriz[100][100];
    while (n != 0)
    {
        scanf("%d", &n);
        for (int i = 0; i<=n/2; i++)
        {
            for (int j = i; j <= n-1-i; j++)
            {
                matriz[j][i] = i+1;
                matriz[n-1-i][j] = i+1;
                matriz[n-1-j][n-1-i] = i+1;
                matriz[i][n-1-j] = i+1;
            }
        }
        for (int k = 0; k<=n-1;k++)
        {
            for (int m = 0; m<=n-2; m++)
                printf("%3d ", matriz[k][m]);
            printf("%3d\n", matriz[k][n-1]);
        }
        if (n!=0)
            printf("\n");
    }
    return 0;
}
