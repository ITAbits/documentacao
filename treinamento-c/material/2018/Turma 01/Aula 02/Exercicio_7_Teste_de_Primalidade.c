/**
  * Esse programa recebe um número inteiro como entrada e
  * diz se esse número é primo ou não. Essa solução não
  * traz otimizações. O procedimento para testar se um número
  * é primo será verificar se eles possui algum divisor inteiro até n/2.
  */

//Inclusão das bibliotecas
#include<stdio.h>

//Função Principal de um programa em C
int main()
{
    //DEclaração de Variáveis

    int numero; //Guarda o numero recebido
    int divisor; //Divisor que será testado
    int numDivisores; //Registra o número de divisores do número

    //Inicialização de Variáveis
    divisor = 2; //Primeiro divisor a ser testado
    numDivisores = 0; //Todo numero inicia com zero divisores

    //Leitura de numero
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    //Teste de primalidade
    while(divisor <= numero/2)
    {
        if(numero%divisor == 0)
            numDivisores++; //Incrementa numDivisores cada vez que "numero" for divisível
        divisor++; //Atualiza "divisor" para o proximo candidato a divisor
    }

    if(numDivisores != 0 || numero == 1)
        printf("\nO numero nao e' primo!\n");
    else
        printf("\nO numero e' primo!\n");

    return 0;
}
