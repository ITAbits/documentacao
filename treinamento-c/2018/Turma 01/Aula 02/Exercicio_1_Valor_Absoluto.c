//Esse programa l� um n�mero inteiro e imprime o seu m�dulo na tela

//Inclus�o de bibliotecas
#include<stdio.h>
#include<math.h>

//Fun��es principal de um programa em C
int main()
{
    //Declara��o de vari�veis
    int numero;

    //Leitura do n�mero do teclado
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    //Usamos uma condicional para resolver o problema
    if(numero >= 0)
        printf("\nO modulo do numero eh: %d\n", numero);
    else
        printf("\nO modulo do numero eh: %d\n", -numero);

    return 0;
}
