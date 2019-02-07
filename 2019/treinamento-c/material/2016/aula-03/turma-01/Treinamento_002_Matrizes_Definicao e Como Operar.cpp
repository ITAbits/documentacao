///Matriz eh na verdade uma extensao do conceito de vetor, porem agora com mais dimensoes enquanto um vetor era equivalente a uma
///matriz matematica 1 x n, uma matriz equivale a uma matriz matematica m x n. Talvez a principio nao pareca ta util, mas imagine
///algumas situacoes basicas de armazenamento de informacoes: um tabuleiro de dama, a ocupacao de cadeira do cinema, informacoes de
///notas de alunos numa escola (por exemplo, Aij indica quantos alunos da serie i obtiveram a nota j), dentre outras aplicacoes.

#include <stdio.h>

int main()
{
    ///Como declarar? Eh analogo a declaracao de vetor: tipo, nome da variavel, [numero de posicoes na dimensao 1][numero de
    ///posicoes na dimensao 2];
    int matriz1[20][15];

    ///Como preencher: tambem analogo a vetor: (lembre da numeracao de 0 -> n-1
    int matriz2[5][5] = {{1,1,1},{1,0}}; ///preencheu as posicoes 00,01,02,10,11;
    ///Ou fora da declaracao:
    matriz[2][3] = 25;

    ///Operacoes basicas eh totalmente analogo tambem, pode somar termos e por em outro, multiplicar, subtrair, etc, tais como com
    ///variaveis normais. Exemplo:
    matriz[0][0] = matriz[1][0]*matriz[2][0];
    matriz[0][4] *= 32;

    ///Eh tambem analoga a vetores a impressao e preenchimento, por exemplo:
    printf("%d", matriz[0][0]);
    printf("Preencha a posicao 1 0: ");
    scanf("%d",&matriz[1][0]);

    return 0;
}
