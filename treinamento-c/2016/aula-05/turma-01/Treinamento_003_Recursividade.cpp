///Ate agora nos programamos algumas recursoes usando loops, por que nao usar funcoes?
///Vamos fazer um fibonacci para ilustrar

#include <stdio.h>

///Elementos que compoem a recursao: casos de parada (geralmente os casos que vc ja conhece a resposta) acompanhados do ponto de
///retorno e a lei de recursao, chamando a funcao nela mesma.

int fib(int n)
{
    int resposta;
    if (n == 0 || n == 1)
        resposta = n;
    else
        resposta = fib(n-1)+fib(n-2);
    return resposta;
}

int main()
{
    int n, fibn;
    printf("Diga o n cujo qual calcularei fib(n): ");
    scanf("%d", &n);
    fibn = fib(n);
    printf("Fib(n) = %d\n", fibn);
    return 0;
}

