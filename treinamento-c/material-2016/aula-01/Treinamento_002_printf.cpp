#include <stdio.h>

int main()
{
    int a = 2;
    float b = 2.5;
    double c = 2.52;
    char d = 'n';

    ///Como imprimir mensagens na tela? printf !!!
    printf("Assim que vc escreve na tela ;-)");

    ///Para imprimir informacoes das variaveis?
    ///int:
    printf("Valor de a = %d", a);
    ///float:
    printf("Valor de b = %f", b);
    ///double:
    printf("Valor de c = %lf", c);
    ///char:
    printf("Caractere em d = %c",d);
    ///Compile esse programa (comente a parte de baixo e de F9), vc vera que as msgs estao juntas e fica ruim de entender assim
    ///bizu para isso: '\n', veja:
    printf("\n\nCOM O \\n\nValor de a = %d\nValor de b = %f\nValor de c = %lf\nCaractere em d = %c\n\n\n",a,b,c,d);

    ///Manipulando a maneira que os numeros se apresentam, veja:
    printf("Valor de b = %f\nValor de b = %.2f\nValor de b = %10.1f\n",b,b,b);
    printf("Valor de a = %2d\n",a);
    return 0;
}
