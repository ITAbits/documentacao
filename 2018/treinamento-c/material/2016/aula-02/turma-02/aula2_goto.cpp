#include <stdio.h>

/// goto vai pra uma parte específica do código, marcada com um nome e dois pontos, e continua o codigo a partir de la


int main(){
    int x = 0;
    printf("Usando o goto\n");
    goto fim;
    printf("Essa frase não vai aparecer e x vai continuar 0");
    x++;
    fim:
        printf("Caguei pro resto do codigo e x = %d\n", x);
    return 0;
}
