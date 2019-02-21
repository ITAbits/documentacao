#include <stdio.h>

int main()
{
    int a;
    printf("Digite um numero inteiro: ");
    scanf("%d",&a);

    ///Agora, vamos fazer operacoes conforme nossas variaveis seguem um comportamento condicional
    if (a % 2 == 0) ///Se for par
    {
        printf("a eh par\n");
        a = a/2;
        printf("Novo a = %d\n\n",a);
    }
    else ///Se n for par
    {
        printf("a nao eh par, ou seja, eh impar\n");
        a = (a-1)/2;
        printf("Novo a = %d\n\n",a);
    }

    ///Se houver mais condicoes? else if !!!
    printf("Digite um numero: ");
    scanf("%d",&a);

    if (a % 3 == 0)
    {
        printf("a eh multiplo de 3 e de 2\n");
        a = a/3;
        printf("Novo a = %d\n\n",a);
    }
    else if (a % 3 == 1)
    {
        printf("a deixa resto 1 quando dividido por 3\n");
        a = (a-1)/3;
        printf("Novo a = %d\n\n",a);
    }
    else
    {
        printf("a deixa resto 2 quando dividido por 3\n");
        a = (a-2)/3;
        printf("Novo a = %d\n\n",a);
    }
    ///Se houver mais condicoes, basta encadear varios else if
    ///Bizu: se houver so uma linha de codigo dentro das chaves dos if's, nao eh necessario colocar as chaves, mas nao eh boa
    ///pratica de programacao
    return 0;
}
