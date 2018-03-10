#include <stdio.h>

int main()
{
    int ap, ano;
    char vaga, n, prof;
    printf("Digite o numero do seu apto, a sua vaga, o inicial do seu nome, a inicial"
           " do prof que te deixa sugado\n");
    scanf("%d %c %c %c", &ap, &vaga, &n, &prof);
    printf("Digite o ano da sua graduacao:");
    scanf("%d", &ano);
    printf("Apto: %d\nVaga = %c\nInicial do seu nome = %c\nInicial do prof = %c\n"
           "Ano da graduacao = %d", ap, vaga, n, prof, ano);
    return 0;
}
