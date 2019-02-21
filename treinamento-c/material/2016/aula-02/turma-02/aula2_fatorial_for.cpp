#include <stdio.h>

/// For

/*
for (inicializacao; condicao; iteracao){
    codigo
}
*/


int main(){
    int x, fatorial = 1;
    scanf("%d", &x);
    /// Usando um contador, de 2 ate x, para multiplicar o valor de fatorial
    /// OBS: Declarando a variavel na inicialização do for, ela so existe dentro do for
    for(int i = 2; i <= x; i++){
        fatorial = fatorial * i;
        /// fatorial *= i
    }
    printf("%d! = %d\n", x, fatorial);
    return 0;
}
