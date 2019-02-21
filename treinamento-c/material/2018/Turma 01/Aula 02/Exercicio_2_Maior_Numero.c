//Esse programa compara dois valores e imprime o maior deles

//Inclusão de bibliotecas
#include<stdio.h>

//Função principal de um programa em C
int main()
{
    //Declaração de variáveis
    int numero1, numero2;
    int maior;

    //Faz a leitura de dois numeros inteiros
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    //Verifica primeiramente se os numeros sao iguais
    if(numero1 == numero2)
        printf("\nOs numeros sao iguais!\n\n");

    //Se eles forem diferentes, o maior será armazenado na variável maior
    else
    {    if(numero1 > numero2)
            maior = numero1;
        else
            maior = numero2;

        //Imprime na tela
        printf("\nO maior numero e': %d\n\n", maior);
    }

    return 0;
}
