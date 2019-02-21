#include <stdio.h>

/// Vetores
/// Calculando a media dos valores de um vetor

int main(){
    // Declaração do tipo vetor[], com as dimensões necessárias. A dimensao eve ser valores, não variável
    int notas[5], media = 0;
    // Media inicializada em 0
    for(int i = 0; i < 5; i++){
        // O acesso ao elemento i é feito com o indice [i]
        scanf("%d", &notas[i]);
        // Somando o valor na media
        media = media + notas[i];
    }
    //Dividindo a media pelo numero de termos
    media = media / 5;
    printf("%d\n", media);
    return 0;
}
