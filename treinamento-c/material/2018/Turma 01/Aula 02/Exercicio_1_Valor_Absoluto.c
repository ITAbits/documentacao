//Esse programa lê um número inteiro e imprime o seu módulo na tela

//Inclusão de bibliotecas
#include<stdio.h>
#include<math.h>

//Funções principal de um programa em C
int main()
{
    //Declaração de variáveis
    int numero;

    //Leitura do número do teclado
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    //Usamos uma condicional para resolver o problema
    if(numero >= 0)
        printf("\nO modulo do numero eh: %d\n", numero);
    else
        printf("\nO modulo do numero eh: %d\n", -numero);

    return 0;
}
