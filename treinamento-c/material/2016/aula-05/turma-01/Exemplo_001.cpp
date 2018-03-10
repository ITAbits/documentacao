///Calculando medias ponderadas: peca ao usuario dois numeros quaisquer e o peso de UM deles (apenas um), numa escala de 0 a 1.
///Depois, atraves de uma funcao, calcule a media ponderada dos numeros.

#include <stdio.h>

float calcularMediaPonderada (float a, float b, float peso, bool ehDeA)
{
    float resposta = a*peso + b*(1-peso);
    if (!ehDeA)
        resposta = a*(1-peso) + b*peso;
    return resposta;
}

int main()
{
    float a,b,c,peso;
    bool ehDeA = true;
    printf("Digite os numeros que vc deseja calcular, o peso de um deles (de 0 a 1) e depois o numero cujo qual vc deu o peso: ");
    scanf("%f %f %f %f", &a, &b, &peso, &c);
    if (c != a)
        ehDeA = false;
    printf("%.2f", calcularMediaPonderada(a,b,peso, ehDeA));
    return 0;
}
