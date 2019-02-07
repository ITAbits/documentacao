#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a,j;
    float b;
    double c;
    char d;

    ///Como receber dados do usuario? scanf!!!
    printf("Digite um inteiro: ");
    scanf("%d",&a);
    printf("Digitado = %d\n\n",a);

    ///Bizus de scanf, ele le conforme o usuario entra, veja:
    printf("Usuario digite um int seguido de 3 hifens e dps um float\n");
    scanf("%d---%f",&a,&b);
    printf("Digitado => a = %d, b = %f\n\n",a,b);
    ///isso eh bizu pra pegar entradas tipo "n--  4 f", por exemplo e evitar buffer

    ///COMO LIMPAR BUFFER:
    printf("BUFFER 1: Ele existe\n");
    ///Produzindo buffer:
    printf("Digite 2 ints separados por um espaco\n");
    scanf("%d",&a);
    printf("a = %d\n",a); ///ha apenas um numero dentre os dois que vc digitou
    ///Agora ha buffer no teclado, para comprovar, veja:
    printf("Digite um inteiro: ");
    scanf("%d",&j);
    printf("j = %d\n\n",j);

    ///Viu que mesmo com o scanf a variavel j nao recebeu nada do usuario? Isso se deve ao buffer, agr veja a seguir
    printf("BUFFER 2: Eliminando-o\n");
    ///Produzindo buffer:
    printf("Digite 2 ints\n");
    scanf("%d",&a);
    printf("Digitado a = %d\n",a); ///ha apenas um numero dentre os dois que vc digitou
    ///Agora ha buffer no teclado, para comprovar, veja:
    fflush(stdin);
    printf("Digite um inteiro: ");
    scanf("%d",&j);
    printf("Digitado j = %d\n\n",j);

    ///Outros comandos de entrada de fluxo: getch(), getche(), getchar()
    ///1 - getch() - Nao usa o buffer e aguarda que o operador digite uma tecla
    printf("TESTANDO GETCH()\n");
    printf("Digite um caractere:\n");
    d = getch();
    printf("d = %c\n\n",d);
    ///2 - getche() - Similar a funcao getch() porem o caractere digitado aparece na tela
    printf("TESTANDO GETCHE()\n");
    printf("Digite um caractere:\n");
    d = getche();
    printf("\nd = %c\n\n",d);
    ///3 - getchar() - Retira o primeiro caractere do buffer do teclado ou aguarda o usuario digitar
    printf("TESTANDO GETCHAR()\n");
    printf("Digite um caractere:\n");
    fflush(stdin);
    d = getchar();
    printf("d = %c\n\n",d);
    ///tente utilizar pra limpar o buffer la em cima ;-)
    return 0;
}
