///Exemplo para fazer logo apos a ensinar como operar:
///Um comite olimpico solicitou a elaboração de um programa para atender as competicoes de natacao. Faca um programa que receba o
///numero de competidores n (n <= max) e seus respectivos tempos em segundos. Em seguida, forneça as seguintes opções:
///a) Calcular o tempo médio da prova
///b) Informar o número do competidor vencedor
///c) Informar o número do pior competidor
///Considere que todos os tempos serao distintos

#include <stdio.h>

int main()
{
    int n, numVencedor, numPior;
    const int maxi = 40;
    float tempo [maxi+1];
    float tempoMaximo, tempoMinimo = 0;

    printf("Digite o numero de competidores: ");
    scanf("%d", &n);
    printf("Digite o tempo do competidor 1: ");
    scanf("%f", &tempo[0]);

    numVencedor = 0;
    numPior = 0;
    tempoMaximo = tempo[0];
    tempoMinimo = tempo[0];
    tempo[maxi] = tempo[0];
    for (int i = 1; i <= n-1; i++)
    {
        printf ("Digite o tempo do competidor %d: ", i+1);
        scanf("%f", &tempo [i]);
        tempo[maxi]+=tempo[i];
        if (tempo[i] < tempoMinimo)
            numVencedor = i;
        if (tempo[i] > tempoMaximo)
            numPior = i;
    }
    printf("Tempo medio da prova: %.2f\nNumero do melhor competidor: %d\nNumero do pior competidor: %d", tempo[maxi]/n,
           numVencedor+1, numPior+1);
    return 0;
}

