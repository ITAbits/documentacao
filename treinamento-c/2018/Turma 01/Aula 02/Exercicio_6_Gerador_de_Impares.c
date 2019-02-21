/**
  * Nesse programa, dado um número inteiro positivo n,
  * serão impressos os primeiros n números ímpares positivos.
  */

//Inclusão das bibliotecas
#include<stdio.h>

//Função Principal de um Programa em C
int main()
{
    int n; //Guarda o numero dado
    int impar; //Gera os numeros impares
    int contador; //Será usada como contador no loop

    //Leitura do valor n
    printf("Digite um numero inteiro positivo n: ");
    scanf("%d", &n);

    //Teste da validade de n
    if(n <= 0)
        printf("\nEntrada Invalida!\n");
    else
    {
        //Inicialização da variável "impar"
        impar = 1;

        //Inicio da impressão do resultado
        printf("Os %d primeiros numeros impares sao:\n", n);

        contador = 1; //Inicializa o contador do loop
        while(contador <= n)
        {
            printf("%d\n", impar); //Imprime o numero impar na tela
            impar = impar + 2; //Passa para o próximo ímpar
            ++contador; //Atualiza o contador do loop
        }
    }
    return 0;
}
