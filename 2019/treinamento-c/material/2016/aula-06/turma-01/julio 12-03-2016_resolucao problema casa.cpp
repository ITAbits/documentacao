#include <stdio.h>

typedef struct ponto {
	float x;
	float y;
} tipoPonto;

/**
 * Funcao que calcula a area do poligono a partir do calculo da area 
 * dos trapezios formados pelos seus lados com o eixo y
 */
float calculaArea(int numPontos, tipoPonto vetorDePontos[]) {
	float area = 0;

	for(int i = 0, j; i < numPontos; i++) {
		j = (i + 1)%numPontos;
		area += ((vetorDePontos[j].x) - (vetorDePontos[i].x))*(vetorDePontos[i].y + vetorDePontos[j].y)/2;
	}

	if(area < 0) 
		area = - area;

	return area;
}

int main() {
	tipoPonto vetorDePontos[100];
	int numPontos;

	printf("Informe a quantidade de pontos do poligono: ");
	scanf("%d", &numPontos);

	for(int i = 0; i < numPontos; i++) {
		printf("Digite as coordenadas x y do ponto %d: ", i+1);
		scanf(" %f %f", &vetorDePontos[i].x, &vetorDePontos[i].y);
	}

	printf("\nArea do poligono: %f", calculaArea(numPontos, vetorDePontos));
	
	getchar();
	return 0;
}