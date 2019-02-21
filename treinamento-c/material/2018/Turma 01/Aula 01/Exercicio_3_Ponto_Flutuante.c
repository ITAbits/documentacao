//Esse programa mostra operações aritméticas com números
//com ponto flutuante

//Inclusão de bibliotecas
#include<stdio.h>
#include<math.h>

//Função principal de um programa em C
int main()
{
    //Declaração de variáveis
    float A, B, C;
    float RespA, RespB, RespC, RespD, RespE;

    //Leitura dos três valores a partir do teclado usando scanf()
    printf("Digite o primeiro valor e pressione <Enter>: ");
    scanf(" %f", &A);
    printf("Digite o segundo valor e pressione <Enter>: ");
    scanf("%f", &B);
    printf("Digite o terceiro valor e pressione <Enter>: ");
    scanf("%f", &C);

    //Parte a) - Área do triângulo com base A e altura C

    RespA = 0.5*A*C;
    printf("\nA area do triangulo com base A e altura C: %.2f \n", RespA);

    //Parte b) - Área do círculo de raio C

    RespB = 3.14159*(C*C);
    printf("\nA area do circulo de raio C: %.2f \n", RespB);

    //Parte c) - Área do trapézio que tem A e B por bases e C por altura

    RespC = 0.5*(A+B)*C;
    printf("\nA area do trapezio com bases A e B com altura C: %.2f \n", RespC);

    //Parte d) - Área do quadrado que tem lado B

    RespD = pow(B, 2); //A função pow da math.h faz calcula potências.
    printf("\nA area do quadrado que tem lado B: %.2f \n", RespD);

    //Parte e) - Área do retângulo que tem lados A e B

    RespE = A*B;
    printf("\nA area do retangulo com lados A e B: %.2f \n\n", RespE);

    ///Observação: Foi usada uma variável para a armazenar a resposta de cada item,
    ///porém uma única variável poderia ter sido utilizada e atualizada a cada operação,
    ///economizando espaço de memória.

    return 0;
}
