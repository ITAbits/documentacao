/**
  * Esse programa recebe o valor de um ano como entrada e
  * diz se ele é bissexto ou não. Para testar se um ano é bissexto ou
  * não, é necessário fazer testes de divisibilidade. Para isso, usaremos
  * o operador % (módulo).
  */

//Inclusão das bibliotecas
#include<stdio.h>

//Função Principal de um programa em C
int main()
{
    int ano; //Variável que receberá o ano

    //Leitura do ano
    printf("Digite um ano: ");
    scanf("%d", &ano);

    /**
      * Essa condição composta testa as seguintes condições:
      * 1) Se o ano é divisível por quatro;
      * 2) Se o ano não é múltiplo de 100 OU se ele é múltiplo de 400;
      */

    if(ano%4==0&&((ano%100!=0)||(ano%400==0)))
        printf("\nO ano e' bissexto!\n\n");
    else
        printf("O ano nao e' bissexto!\n\n");

    return 0;
}
