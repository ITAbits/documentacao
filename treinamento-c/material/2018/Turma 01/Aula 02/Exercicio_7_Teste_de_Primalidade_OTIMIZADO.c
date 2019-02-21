/**
  * Essa é uma versão otimizado do testador de primalidade para inteiros.
  * As otimizações introduzidas são:
  * 1) O caso divisor == 2 é testado fora do loop principal, evitando assim
  *    testar desnecessariamente números pares como divisores;
  * 2) Existe uma condição no loop que o faz encerrar assim que o primeiro divisor
  *    for identificado, diminuindo o número de iterações;
  */

//Inclusão de bibliotecas
#include<stdio.h>

//Função Principal de um programa em C
int main()
{
    //Declaração de variáveis
    int numero; //Guarda o número recebido
    int divisor; //Armazena os candidatos a divisores
    int numDivisores; //Armazena o numero de divisores

    //Inicialização de variáveis
    divisor = 3; //O caso divisor == 2 será testado separadamente
    numDivisores = 0; //Todo numero inicia com zero divisores

    //Leitura do numero
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    //Teste do caso 2
    if(numero%2 == 0)
        numDivisores++;

    //Teste dos demais casos
    while(numDivisores == 0 && divisor <= numero/2)
    {
        if(numero%divisor == 0)
            numDivisores++;
        divisor += 2; //Atualiza divisor para o próximo número ímpar
    }

    if(numDivisores != 0 || numero == 1)
        printf("\nO numero nao e' primo!\n");
    else
        printf("\nO numero e' primo!\n");

    return 0;
}
