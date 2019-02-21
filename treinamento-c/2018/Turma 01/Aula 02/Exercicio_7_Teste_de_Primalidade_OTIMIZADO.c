/**
  * Essa � uma vers�o otimizado do testador de primalidade para inteiros.
  * As otimiza��es introduzidas s�o:
  * 1) O caso divisor == 2 � testado fora do loop principal, evitando assim
  *    testar desnecessariamente n�meros pares como divisores;
  * 2) Existe uma condi��o no loop que o faz encerrar assim que o primeiro divisor
  *    for identificado, diminuindo o n�mero de itera��es;
  */

//Inclus�o de bibliotecas
#include<stdio.h>

//Fun��o Principal de um programa em C
int main()
{
    //Declara��o de vari�veis
    int numero; //Guarda o n�mero recebido
    int divisor; //Armazena os candidatos a divisores
    int numDivisores; //Armazena o numero de divisores

    //Inicializa��o de vari�veis
    divisor = 3; //O caso divisor == 2 ser� testado separadamente
    numDivisores = 0; //Todo numero inicia com zero divisores

    //Leitura do numero
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    //Teste do caso 2
    if(numero%2 == 0)
        numDivisores++;

    //Teste dos demais casos
    while(numDivisores == 0 && divisor <= numero/2)
    {
        if(numero%divisor == 0)
            numDivisores++;
        divisor += 2; //Atualiza divisor para o pr�ximo n�mero �mpar
    }

    if(numDivisores != 0 || numero == 1)
        printf("\nO numero nao e' primo!\n");
    else
        printf("\nO numero e' primo!\n");

    return 0;
}
