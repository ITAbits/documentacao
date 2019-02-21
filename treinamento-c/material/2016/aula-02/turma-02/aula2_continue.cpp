#include <stdio.h>

///Continue
/// Usado dentro de loops para pular para a verificação da condição, e entrar no loop se for verdadeira
/// No caso do for, ele faz a iteração também antes de verificar

int main(){
    int i, total;
    for (i = 0, total = 0; i < 5; i++){
        printf("Essa frase vai aparecer\n");
        continue;
        printf("Essa nao\n");
        total++;
    }
    printf("total = %d\ni = %d\n", total, i);
    return 0;
}
