#include <stdio.h>

/// Calculadora
/// Usando Switch

int main(){
    int x, y;
    char sinal;
    printf("CALCULADORA - SWITCH\n");
    scanf("%d %c %d", &x, &sinal, &y);
    /// Switch para a variavel sinal
    switch(sinal){
        case '+':
            printf("%d\n", x + y);
            break;
        case '-':
            printf("%d\n", x - y);
            break;
        case '*':
            printf("%d\n", x * y);
            break;
        case '/':
            ///Divisao por 0
            if (y != 0)
                printf("%d\n", x / y);
            else
                printf("Cagou o pau\n");
            break;
        default:
            printf("Operacao nao encontrada\n");
    }
    return 0;
}
