/**Esse programa ensina a trocar o valor de duas vari�veis
  *Para realizar a opera��o de troca, uma vari�vel auxiliar
  *� necess�ria para guardar o valor anterior da primeira vari�vel
  *que for atualizada.
  */


//Inclus�o de bibliotecas
#include<stdio.h>

//Fun��o principal de um programa em C
int main()
{
    //Declara��o de vari�veis duas vari�veis de tipo inteiro
    int x, y;
    //Declara��o da vari�vel auxiliar
    int auxiliar;

    //Atribui��o de valores iniciais para x e y
    x= 15;
    y = 10;

    //C�digo para trocar os valores
    auxiliar = x; //Guarda o valor de x
    x = y;        //Passa o valor de y para x
    y = auxiliar; //Passa o valor anterior de x para y

    //Para imprimir o um n�mero inteiro usamos os formatadores %d
    printf("x=%d y=%d", x, y);

    //O getchar() faz o programa esperar at� que uma tecla seja
    //pressionada para fechar.
    getchar();
    return 0;
}
