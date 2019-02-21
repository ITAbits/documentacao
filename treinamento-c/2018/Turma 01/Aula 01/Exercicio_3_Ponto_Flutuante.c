//Esse programa mostra opera��es aritm�ticas com n�meros
//com ponto flutuante

//Inclus�o de bibliotecas
#include<stdio.h>
#include<math.h>

//Fun��o principal de um programa em C
int main()
{
    //Declara��o de vari�veis
    float A, B, C;
    float RespA, RespB, RespC, RespD, RespE;

    //Leitura dos tr�s valores a partir do teclado usando scanf()
    printf("Digite o primeiro valor e pressione <Enter>: ");
    scanf(" %f", &A);
    printf("Digite o segundo valor e pressione <Enter>: ");
    scanf("%f", &B);
    printf("Digite o terceiro valor e pressione <Enter>: ");
    scanf("%f", &C);

    //Parte a) - �rea do tri�ngulo com base A e altura C

    RespA = 0.5*A*C;
    printf("\nA area do triangulo com base A e altura C: %.2f \n", RespA);

    //Parte b) - �rea do c�rculo de raio C

    RespB = 3.14159*(C*C);
    printf("\nA area do circulo de raio C: %.2f \n", RespB);

    //Parte c) - �rea do trap�zio que tem A e B por bases e C por altura

    RespC = 0.5*(A+B)*C;
    printf("\nA area do trapezio com bases A e B com altura C: %.2f \n", RespC);

    //Parte d) - �rea do quadrado que tem lado B

    RespD = pow(B, 2); //A fun��o pow da math.h faz calcula pot�ncias.
    printf("\nA area do quadrado que tem lado B: %.2f \n", RespD);

    //Parte e) - �rea do ret�ngulo que tem lados A e B

    RespE = A*B;
    printf("\nA area do retangulo com lados A e B: %.2f \n\n", RespE);

    ///Observa��o: Foi usada uma vari�vel para a armazenar a resposta de cada item,
    ///por�m uma �nica vari�vel poderia ter sido utilizada e atualizada a cada opera��o,
    ///economizando espa�o de mem�ria.

    return 0;
}
