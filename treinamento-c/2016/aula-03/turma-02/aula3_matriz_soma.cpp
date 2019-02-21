#include <stdio.h>

/// Soma de Matrizes

int main(){
    // Declarando as matrizes com uma dimensão maior
    int n, a[10][10], b[10][10], c[10][10];
    // Sendo que so será usado n por n (n <= 10)
    scanf("%d", &n);
    // Recebendo a matriz A
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    // Recebendo a matriz B
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &b[i][j]);
        }
    }
    // Calculando a matriz C e imprimindo
    // c[i][j] = a[i][j] + b[i][j]
    // Indo para cada linha
    for (int i = 0; i < n; i++){
        // Percorrendo a linha atual
        for (int j = 0; j < n; j++){
            c[i][j] = a[i][j] + b[i][j];
            // Ja imprimindo o termo
            printf("%4d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
