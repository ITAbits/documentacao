///Vamos aprender hoje ferramentas versateis que podem tornar seu codigo mais compreensivel: typedef e define.

#include <stdio.h>

///1) Usando o define: a declaracao do define ocorre fora da main e tem a seguinte sintaxe #define (nome da variavel) (alguma coisa)
///onde alguma coisa pode ser uma letra ou um numero, por exemplo:

#define bixo 20
#define letraLegal j
#define numero 23

///Isso eh totalmente equivalente a const int = 20, porem como a atribuiacao ocorre fora da main, o codigo fica muito mais compreen-
///sivel, alem disso, falando em termos da ITAndroids, costumamos usar o atribuidor define para as constantes fisicas do problema,
///por exemplo, o raio da roda do VSS, o comprimento do pe do humanoide, dentre outras. Ao usar o define, fazemos um codigo no qual
///as constantes (caso tenham nome significativo) podem ser facilmente alteradas se necessario, sem que o alterador faca ideia do
///que esta escrito no codigo. Isso tambem eh util para problemas nos quais temos que alocar um espaco maximo de memoria, que nao
///sabemos se vamos usar inteiro ou nao, por exemplo, o numero de pessoas no carro (tem maximo 5, mas nao necessariamente 5 pessoas)

///2)Usando o typedef: ele substitui expressoes de codigo pela expressao que vc quiser. Sintaxe: #typedef (expressao que sera
///substituida) (expressao que vc quer); . Por exemplo:

typedef char carac;
typedef float intdote;

///OBS nao funciona (nem compila) pra alguns comandos de C, por exemplo, if, &&, ||, for, ...

///Usando typedef pra vetores, muda um pouquinho:

typedef char casa[20]; ///ou seja, a declaracao casa rua1; eh equivalente a char rua1[20];

///Apenas mostrando que funciona:

int main()
{
    intdote a = 2.5;
    casa h8b234;

    printf("Diga o nome de um morador dessa casa: ");
    scanf("%s", h8b234);
    printf("Na casa h8b234 mora o %s\n\n", h8b234);

    printf("1) Numero a = %.2f\n", a);
    a*=numero;
    printf("2) Numero a = %.2f\n",a);

    return 0;
}





