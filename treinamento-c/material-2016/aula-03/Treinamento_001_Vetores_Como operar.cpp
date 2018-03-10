///Até agora trabalhamos apenas com um numero pequeno de variaveis, onde podiamos declarar todas, porem imagine um caso em que
///100 informacoes sobre uma mesma dependencia sao necessarias, por exemplo, a idade dos alunos de uma turma. Declarar 100
///variaveis e preenche-las individualmente, eh no minimo muito trabalhoso, alem de quase impraticavel. Vamos ver agora uma
///ferramenta que nos permite manipular um numero maior de variaveis: vetor. (Obs.: nao ha relacao explicita entre o vetor usado
///na fisica ou na matematica e o vetor utilizado na computacao). Uma analogia para visualizar o que eh um vetor: uma matriz 1xn
///na qual em cada posicao voce guarda uma informacao

#include <stdio.h>

int main()
{
    ///Primeiro: como declarar? Sintaxe: tipo de todos os elementos do vetor, nome da variavel e [quantidade], veja:
    int idades[10], vetor[20];

    ///Como preencher cada posicao do vetor? Sintaxe vetor[i] = x; Saiba que a numeracao vai de 0 ate a quantidade - 1, dando
    ///'quantidade' elementos. Dai, podemos ter:
    idades[0] = 16;
    idades [9] = 11;
    ///poderia ser idades [10] = 25? O codeblocks as vezes permite que voce acesse memoria que voce nao alocou, porem como nao esta
    ///alocado, esta volatil ao uso de outros programas e pode ter seu valor alterado fora do controle do programador. Em suma,
    ///quer mais espaco? Aloque um vetor maior.

    ///Outra maneira de preencher: durante a declaracao. OBS.: o preenchimento pode ser total ou parcial, veja:
    char bixaral [25] = {'a','b','c','c','f','h'};

    ///Como acessar, funciona como se cada vetor[i] fosse uma variavel, ou seja, pode-se operar da seguinte forma:
    vetor[0] = 89;
    vetor[4]+=25;
    vetor[2] = vetor[3];

    ///Eh tambem analoga a variaveis a impressao e preenchimento, por exemplo:
    printf("%d", vetor[0]);
    printf("Preencha a posicao 0: ");
    scanf("%d", &vetor[0]);

    return 0;
}
