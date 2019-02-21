#include <stdio.h>
#define MAX 1000

typedef int vetor[MAX];

int main(){
    ///int lista[MAX];
    vetor lista;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &lista[i]);
    for (int i = 0; i < n; i++)
        printf("%d - ", lista[i]);
    return 0;
}
