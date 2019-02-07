#include <stdio.h>

/// Trocar o valor de duas variaveis
/// Eh preciso usar uma variavel auxiliar, pra armazenar um dos valores

int main(){
    int a = 5, b = 6, aux;
    printf("a = %d\nb = %d\n\n", a, b);
    aux = a;
    a = b;
    b = aux;
    printf("a = %d\nb = %d\n\n", a, b);
}
