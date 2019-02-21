/**
  * Esse programa calcula potências naturais de números inteiros,
  * usando loop for
  */

//Inlcusão das bibliotecas
#include<stdio.h>

//Função Principal de um programa em C
int main()
{
    ///Declaração de Variáveis

    //Uma variável unsigned int é um inteiro sem sinal, ou seja, armazena apenas numeros positivos
    unsigned int expoente;
    int base; //Armazena a base
    int resultado = 1;
    int contador; //contador para o laço

    //Leitura das entradas
    printf("Digite a base inteira x: ");
    scanf("%d", &base);
    printf("Digite o expoente natural: ");
    scanf("%d", &expoente);

    //Cálculo da Potência com Loop For
    for(contador = 1; contador <= expoente; ++contador)
        resultado = resultado*base;

    //Impressão dos resultados
    printf("O resultado de %d elevado a %d e': %d", base, expoente, resultado);

    return 0;
}
