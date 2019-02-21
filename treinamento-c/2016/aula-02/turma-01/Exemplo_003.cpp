///Exercicio para fazer logo apos o exemplo 02 (depois de comando iterativos de antes de comandos trakinas)
///Dado um numero n, digitado pelo usuario, determine quantos divisores ele tem e quais sao. Pense como, atraves desse codigo,
///pode-se determinar se nao eh quadrado perfeito.

#include <stdio.h>

int main()
{
    int n;
    int numeroDivisores = 0;
    printf("Digite o numero sobre o qual voce deseja informacoes sobre os divisores: ");
    scanf("%d", &n);
    if (n == 0)
        printf("Total de divisores: infinitos (todo numero divide zero)\n");
    else
    {
        for (int i = 1; i <= n/2; i++)
        {
            if (n % i == 0)
            {
                numeroDivisores++;
                printf("%d divide %d\n",i,n);
            }
        }
        if (n == 1)
            printf("Total de divisores: 1\n");
        else
            printf("%d divide %d\nTotal de divisores: %d\n", n, n, numeroDivisores + 1);
    }
    return 0;
}
