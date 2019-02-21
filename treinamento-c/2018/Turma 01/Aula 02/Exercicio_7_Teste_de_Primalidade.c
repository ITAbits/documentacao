/**
  * Esse programa recebe um n�mero inteiro como entrada e
  * diz se esse n�mero � primo ou n�o. Essa solu��o n�o
  * traz otimiza��es. O procedimento para testar se um n�mero
  * � primo ser� verificar se eles possui algum divisor inteiro at� n/2.
  */

//Inclus�o das bibliotecas
#include<stdio.h>

//Fun��o Principal de um programa em C
int main()
{
    //DEclara��o de Vari�veis

    int numero; //Guarda o numero recebido
    int divisor; //Divisor que ser� testado
    int numDivisores; //Registra o n�mero de divisores do n�mero

    //Inicializa��o de Vari�veis
    divisor = 2; //Primeiro divisor a ser testado
    numDivisores = 0; //Todo numero inicia com zero divisores

    //Leitura de numero
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    //Teste de primalidade
    while(divisor <= numero/2)
    {
        if(numero%divisor == 0)
            numDivisores++; //Incrementa numDivisores cada vez que "numero" for divis�vel
        divisor++; //Atualiza "divisor" para o proximo candidato a divisor
    }

    if(numDivisores != 0 || numero == 1)
        printf("\nO numero nao e' primo!\n");
    else
        printf("\nO numero e' primo!\n");

    return 0;
}
