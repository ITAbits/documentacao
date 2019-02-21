/**Esse programa ensina a trocar o valor de duas variáveis
  *Para realizar a operação de troca, uma variável auxiliar
  *é necessária para guardar o valor anterior da primeira variável
  *que for atualizada.
  */


//Inclusão de bibliotecas
#include<stdio.h>

//Função principal de um programa em C
int main()
{
    //Declaração de variáveis duas variáveis de tipo inteiro
    int x, y;
    //Declaração da variável auxiliar
    int auxiliar;

    //Atribuição de valores iniciais para x e y
    x= 15;
    y = 10;

    //Código para trocar os valores
    auxiliar = x; //Guarda o valor de x
    x = y;        //Passa o valor de y para x
    y = auxiliar; //Passa o valor anterior de x para y

    //Para imprimir o um número inteiro usamos os formatadores %d
    printf("x=%d y=%d", x, y);

    //O getchar() faz o programa esperar até que uma tecla seja
    //pressionada para fechar.
    getchar();
    return 0;
}
