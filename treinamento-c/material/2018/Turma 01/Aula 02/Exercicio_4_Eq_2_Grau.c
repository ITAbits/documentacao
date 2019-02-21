/**
  * Esse programa resolve uma equa��o do segundo grau dados coeficientes reais.
  * O uso de condicionais (if e else) ser� muito explorado para a verifica��o
  * das condi��es necess�rias para resolver uma equa��o do segundo grau. Como
  * sabemos, o computador n�o armazena n�meros reais com precis�o infinita e para
  * evitar erros de arredondamento, uma vari�vel epsilon ser� usada para considerar
  * aproxima��es.
  *
  */

//Inclus�o das bibliotecas
#include<stdio.h>
#include<math.h>

//Fun��o principal de um programa em C
int main()
{
    float coeficienteA, coeficienteB, coeficienteC;
    const float epsilon = 0.00001;
    float x1, x2;
    float delta;

    //Leitura e armazenamento dos coeficientes
    printf("Digite o coeficiente de x^2: ");
    scanf("%f", &coeficienteA);
    printf("Digite o coeficiente de x^1: ");
    scanf("%f", &coeficienteB);
    printf("Digite o coeficiente de x^0: ");
    scanf("%f", &coeficienteC);

    //Verifica��o da validade do coeficienteA
    if(coeficienteA <= epsilon)
        printf ("\nO coeficiente de x^2 nao pode ser zero! :( \n");
    else
    {
        //Calculo do delta
        delta = pow(coeficienteB, 2) - 4*coeficienteA*coeficienteC;

        //Verifica��o do caso de delta negativo
        if(delta < -epsilon)
        {
            printf("A equacao nao possui raizes reais!\n");
        }
        //Verifica��o de delta positivo
        else if(delta > epsilon)
        {
            //Calculo das raizes usando a formula de Baskara
            x1 = (-coeficienteB + sqrt(delta))/(2*coeficienteA);
            x2 = (-coeficienteB - sqrt(delta))/(2*coeficienteA);

            //Exibi��o do resultado
            printf("\nA equacao tem duas raizes reais: \n"
                   "x1 = %.3f\n"
                   "x2 = %.3f\n", x1, x2);
        }
        //Verifica��o do caso delta igual a zero
        else
        {
            //Calculo da raiz unica
            x1 = -coeficienteB/(2*coeficienteA);
            //Exibi��o do resultado
            printf("\nA equacao tem uma unica solucao: \n"
                   "x = %.3f", x1);
        }
    }

    return 0;
}
