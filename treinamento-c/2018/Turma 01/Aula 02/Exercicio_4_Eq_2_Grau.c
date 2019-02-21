/**
  * Esse programa resolve uma equação do segundo grau dados coeficientes reais.
  * O uso de condicionais (if e else) será muito explorado para a verificação
  * das condições necessárias para resolver uma equação do segundo grau. Como
  * sabemos, o computador não armazena números reais com precisão infinita e para
  * evitar erros de arredondamento, uma variável epsilon será usada para considerar
  * aproximações.
  *
  */

//Inclusão das bibliotecas
#include<stdio.h>
#include<math.h>

//Função principal de um programa em C
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

    //Verificação da validade do coeficienteA
    if(coeficienteA <= epsilon)
        printf ("\nO coeficiente de x^2 nao pode ser zero! :( \n");
    else
    {
        //Calculo do delta
        delta = pow(coeficienteB, 2) - 4*coeficienteA*coeficienteC;

        //Verificação do caso de delta negativo
        if(delta < -epsilon)
        {
            printf("A equacao nao possui raizes reais!\n");
        }
        //Verificação de delta positivo
        else if(delta > epsilon)
        {
            //Calculo das raizes usando a formula de Baskara
            x1 = (-coeficienteB + sqrt(delta))/(2*coeficienteA);
            x2 = (-coeficienteB - sqrt(delta))/(2*coeficienteA);

            //Exibição do resultado
            printf("\nA equacao tem duas raizes reais: \n"
                   "x1 = %.3f\n"
                   "x2 = %.3f\n", x1, x2);
        }
        //Verificação do caso delta igual a zero
        else
        {
            //Calculo da raiz unica
            x1 = -coeficienteB/(2*coeficienteA);
            //Exibição do resultado
            printf("\nA equacao tem uma unica solucao: \n"
                   "x = %.3f", x1);
        }
    }

    return 0;
}
