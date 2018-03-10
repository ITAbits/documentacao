///Calculando medias ponderadas: peca ao usuario dois numeros quaisquer e o peso de UM deles (apenas um), numa escala de 0 a 1.
///Depois, atraves de uma funcao, calcule a media ponderada dos numeros.

#include <stdio.h>

float calcularMediaPonderada (float a, float b, float peso)
{
    return a*peso + b*(1-peso);
}

int main()
{
    float a,b,c,peso,aux;
    printf("Digite os numeros que vc deseja calcular, o peso de um deles (de 0 a 1) e depois o numero cujo qual vc deu o peso: ");
    scanf("%f %f %f %f", &a, &b, &peso, &c);
    if (c != a)
    {
        aux = a;
        a = b;
        b = aux;
    }
    printf("%.2f", calcularMediaPonderada(a,b,peso));
    return 0;
}

