///Exercicio para fazer durante a aula logo apos falar de operadores logicos
///Suponha que o usuario fez um vestibular com mat, fis, quim, port e ing e que os criterios para ser aprovado sao: nota de ing
///maior que 4.00 e a media das outras 4 materias maior ou igual a nota de corte. Verifique se o usuario foi aprovado e determine
///sua media com precisao de 2 casas decimais.
#include <stdio.h>

int main()
{
    float notaCorte;
    float notaQuim, notaIng, notaMat, notaFis, notaPort;
    float media;

    printf("Qual foi a nota de corte do vestibular? ");
    scanf("%f", &notaCorte);
    printf("Digite as suas medias na ordem: ingles, portugues, matematica, fisica e quimica\n");
    scanf("%f %f %f %f %f", &notaIng, &notaPort, &notaMat, &notaFis, &notaQuim);
    media = (notaPort+notaFis+notaMat+notaQuim)/4;
    if (notaIng > 4.0 && media >= notaCorte)
        printf("Voce passou\n");
    else
        printf("Voce nao passou\n");
    printf("Sua media foi %.2f\n", media);
    return 0;
}
