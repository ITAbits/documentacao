///Os comandos iterativos recebem esse nome, pois sao executados mais de uma vez. Estejam atentos a sua sintaxe!

#include <stdio.h>
int main()
{
    int num;
    int contador = 1;
    int fatorial1 = 1, fatorial2 = 1, fatorial3 = 1, fatorial4 = 1;

    ///Comando 01: while, sintaxe while (condicao), ele vai fazer a operacao dentro das chaves enquanto a condicao nao
    ///for atingida, exemplo, fatorial:
    printf("Digite o numero que voce deseja calcular o fatorial: ");
    scanf("%d", &num);
    while (contador <= num)
    {
        fatorial1 *= contador;
        contador++;
    }
    printf("Fatorial(%d) = %d\n", num, fatorial1);
    contador = 1;

    ///Comando 2: for, sintaxe for (declaracao de variavel ou inicializacao de variaveis; condicao; operacoes)
    for (int i = 1; i<=num; i++) ///so pode declarar a variavel nesse campo em C++, em C so eh permitido inicializar as variaveis
        fatorial2*=i;
    printf("Fatorial(%d) = %d\n", num, fatorial2);
    ///Outra maneira, ainda com o for
    for (int i = 1; i<=num; fatorial3*=i, i++);
    printf("Fatorial(%d) = %d\n", num, fatorial3);

    ///Comando 3: do while, sintaxe do { operacoes } while (condicao);
    do
    {
        fatorial4*=contador;
        contador++;
    } while (contador <= num);
    printf("Fatorial(%d) = %d\n", num, fatorial4);
    ///No caso do do while, ele opera uma vez antes de testar a condicao, entao ele deve ser usado quando houver certeza de que
    ///pelo menos na primeira vez a condicao eh valida, por exemplo, no caso do fatorial, pelo menos o numero 1 pode multiplicar
    ///a variavel que guarda o valor do fatorial.
    return 0;
}
