#include <stdio.h>

///Prototipagem:

void somar (float a, float b);

int main()
{
    float a, b;
    printf("Digite dois numero e recebera o piso da soma dos dois: ");
    scanf("%f %f", &a, &b);

    ///Observe com atencao o que sera impresso em cada um dos printf's
    somar(a,b);
    printf("%f\n",a);
    ///Ou seja, alterar a variavel dentro da funcao, nao significa altera-la fora, a nao ser que o faca atraves de ponteiros (que
    ///nao sera feito nessa aula)

    return 0;
}

void somar (float a, float b)
{
    a = a+b;
    printf("%f\n",a);
}
