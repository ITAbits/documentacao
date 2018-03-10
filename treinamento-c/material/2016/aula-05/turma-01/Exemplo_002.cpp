///Resolver Flavius Josephus por recursividade com funcoes

#include <stdio.h>

int flaviusJosephus(int n, int k)
{
    if (n == 1)
        return 1;
    return ((flaviusJosephus(n-1,k) + k-1) % n + 1);
}

int main()
{
    int n, k, sobrevivente;
    printf("PROBLEMA DO FLAVIUS JOSEPHUS\n\n");
    printf("Digite o numero de pessoas no circulo e o passo em que elas pulam: ");
    scanf("%d %d", &n, &k);
    sobrevivente = flaviusJosephus(n,k);
    printf("Sobrevivente = %d\n", sobrevivente);
    return 0;
}
