/**
  * Esse programa calcula pot�ncias naturais de n�meros inteiros,
  * usando loop for
  */

//Inlcus�o das bibliotecas
#include<stdio.h>

//Fun��o Principal de um programa em C
int main()
{
    ///Declara��o de Vari�veis

    //Uma vari�vel unsigned int � um inteiro sem sinal, ou seja, armazena apenas numeros positivos
    unsigned int expoente;
    int base; //Armazena a base
    int resultado = 1;
    int contador; //contador para o la�o

    //Leitura das entradas
    printf("Digite a base inteira x: ");
    scanf("%d", &base);
    printf("Digite o expoente natural: ");
    scanf("%d", &expoente);

    //C�lculo da Pot�ncia com Loop For
    for(contador = 1; contador <= expoente; ++contador)
        resultado = resultado*base;

    //Impress�o dos resultados
    printf("O resultado de %d elevado a %d e': %d", base, expoente, resultado);

    return 0;
}
