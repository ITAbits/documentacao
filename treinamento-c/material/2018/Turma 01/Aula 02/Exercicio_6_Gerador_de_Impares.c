/**
  * Nesse programa, dado um n�mero inteiro positivo n,
  * ser�o impressos os primeiros n n�meros �mpares positivos.
  */

//Inclus�o das bibliotecas
#include<stdio.h>

//Fun��o Principal de um Programa em C
int main()
{
    int n; //Guarda o numero dado
    int impar; //Gera os numeros impares
    int contador; //Ser� usada como contador no loop

    //Leitura do valor n
    printf("Digite um numero inteiro positivo n: ");
    scanf("%d", &n);

    //Teste da validade de n
    if(n <= 0)
        printf("\nEntrada Invalida!\n");
    else
    {
        //Inicializa��o da vari�vel "impar"
        impar = 1;

        //Inicio da impress�o do resultado
        printf("Os %d primeiros numeros impares sao:\n", n);

        contador = 1; //Inicializa o contador do loop
        while(contador <= n)
        {
            printf("%d\n", impar); //Imprime o numero impar na tela
            impar = impar + 2; //Passa para o pr�ximo �mpar
            ++contador; //Atualiza o contador do loop
        }
    }
    return 0;
}
