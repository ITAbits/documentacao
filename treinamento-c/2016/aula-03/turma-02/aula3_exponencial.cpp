#include <stdio.h>

// Calculo do valor de e
// Atraves da série 1/e = 1/0! + 1/1! 1/2! + 1/3! + ...

int main(){
    // Inicializando o valor de e
    float exp = 0, fatorialInv;
    // São preciso dois fors: um para somar cada termo da serie e outro interior para calcular cada termo (os fatoriais)
    // for externo para somar os termos
    for(int i = 0; i < 100; i++){
        // Inicializando o valor do fatorial para cada termo
        fatorialInv = 1;
        // Calculando o inverso do fatorial e adicionando ao valor de e
        for(int j = 2; j <= i; j++){
            fatorialInv = fatorialInv / j;
        }
        exp = exp + fatorialInv;
    }
    printf("e = %f\n", exp);
    return 0;
}
