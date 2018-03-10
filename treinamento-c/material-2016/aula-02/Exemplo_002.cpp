///Deve ser feito logo apos fazer os loops: exercicio Fibonacci
///Todos conhecem a classica sequencia de fibonacci, dada por fib(0) = 0, fib(1) = 1 e fib(n) = fib(n-1) + fib(n-2). Calcule o
///fib(n) para um n qualquer dado pelo usuario.

#include <stdio.h>

int main()
{
    int n;
    int antant, ant, atual;
    antant = 0;
    ant = 1;
    printf("Diga qual numero n voce deseja determinar o fib(n): ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        atual = ant + antant;
        antant = ant;
        ant = atual;
    }
    if (n == 0 || n == 1)
        printf("Fib(%d) = %d\n",n,n);
    else
        printf("Fib(%d) = %d\n", n,atual);
    return 0;
}
