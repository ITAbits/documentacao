/**
  * Esse programa recebe o valor de um ano como entrada e
  * diz se ele � bissexto ou n�o. Para testar se um ano � bissexto ou
  * n�o, � necess�rio fazer testes de divisibilidade. Para isso, usaremos
  * o operador % (m�dulo).
  */

//Inclus�o das bibliotecas
#include<stdio.h>

//Fun��o Principal de um programa em C
int main()
{
    int ano; //Vari�vel que receber� o ano

    //Leitura do ano
    printf("Digite um ano: ");
    scanf("%d", &ano);

    /**
      * Essa condi��o composta testa as seguintes condi��es:
      * 1) Se o ano � divis�vel por quatro;
      * 2) Se o ano n�o � m�ltiplo de 100 OU se ele � m�ltiplo de 400;
      */

    if(ano%4==0&&((ano%100!=0)||(ano%400==0)))
        printf("\nO ano e' bissexto!\n\n");
    else
        printf("O ano nao e' bissexto!\n\n");

    return 0;
}
