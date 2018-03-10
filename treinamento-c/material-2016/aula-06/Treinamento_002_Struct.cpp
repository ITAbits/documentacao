///Ate agora sempre declaravamos variaveis que so tinham um tipo, ou seja, so podiam ser int ou float, ou char (etc), porem algumas
///variaveis, eventualmente, guardavam informacoes de tipos diferentes sobre um mesmo objeto, por exemplo, nome e idade sao, res-
///pectivamente, string e int, no entanto, elas sao variaveis usadas pra descrever um pessoa, ou seja, seria muito util se pudesse-
///mos declarar uma variavel do tipo pessoa que contivesse informacoes do nome (a string) e da idade (o int) da pessoa, ou seja, in-
///formacoes heterogeneas. Eh isso que vamos aprender nesse codigo: struct!

///Declarando struct:
struct casa
{
    int idade;
    int numeroMoradores;
    float preco;
    char dono[15];
};

///Ou seja, sempre que houver uma declaracao do tipo (struct casa abc;), sem os parenteses eh claro, significara uma variavel que
///contem 2 tipos int, 1 float e 1 string. Logo sera ensinado como acessa-las. Bizu de declaracao:

typedef struct iteano iteano;
struct iteano
{
    int anoGraduacao;
    int numeroHorasSono;
    char nome[15];
    bool ehBixo;
};

///De modo analogo ao anterior as variaveis do tipo struct iteano contem as informacoes int anoGraduacao, int numeroHorasSono ...
///o bizu da declaração acima usando typedef eh que ao usar essa struct voce pode declarar variaveis do tipo struct iteano colo
///cando apenas, iteano (nome)
#include <stdio.h>

int main()
{
    ///Como declarar?
    ///Caso 01: nao usando typedef
    struct casa rua1;
    ///Caso 02: usando typedef
    iteano patolino;

    ///Como manipular? (Preencher e atribuir valores) -> Trate sua variavel como se ela fosse o nome da variavel . nome da
    ///informacao, veja o exemplo:
    patolino.numeroHorasSono = 0;

    ///De modo analogo para somar e subtrair.

    return 0;
}
