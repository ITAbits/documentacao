/* Ola pessoal, parabens por terem passado!*/
/// Primeira informacao a vcs, o que significa '//' ou '///'? Para que vc faça comentarios no codigo, sem atrapalhar o mesmo, basta
/// por '//' ou '///' no inicio do comentario, para comentarios de mais de uma linha, tambem pode-se usar '/*' comeca o comentario e
/// '*/' termina o comentario

///Essas sao as principais bibliotecas que vcs vão precisar

#include <stdio.h>
///Essa biblioteca engloba quase todas as principais funcoes que vc pode precisar, por exemplo, printf, scanf, for, while, do while
///etc, sempre ponham ela.

#include <stdlib.h>
///Essa biblioteca engloba funcoes de alocacao dinamica, por exemplo, malloc e algumas outras funcoes, por exemplo, system("PAUSE"),
///ou system("cls"), ou ainda, funcoes de limpeza de buffer, por exemplo, fflush (stdin)

#include <math.h>
///Essa biblioteca contem as principais funcoes de matematica, por exemplo, sqrt() - raiz quadrada, log() - logaritmo na base 2,etc

#include <ctype.h>
///Essa biblioteca contem algumas funcoes uteis quando se trabalha com strings, por exemplo, isdigit() que verifica se um caractere
///eh um dígito ou atoi() que converte um caractere da string num int, etc...

#include <conio.h>
///Essa biblioteca vcs vao usar mais pra funções de entrada do fluxo, por exemplo, getch(), getche() e getchar()

int main() ///funcao principal, todo o código deve ser chamado na main e será executado na ordem em que aqui estiver escrito
{
    ///Geralmente se declara as variaveis aqui, por exemplo:
    int a; ///int = inteiro
    float b; ///float = numero com parte decimal, precisao de 6 casos
    double c; ///double = igual ao float, porém com precisao de 12 casos
    char d; ///char = caractere em geral, por exemplo, 'a', 'b'
    ///Eh permitido atribuir valores as variaveis já em sua declaracao, por exemplo:

    int e = 2; ///se vc atribuisse um numero quebrado (com parte decimal), o compilador truncaria (pra baixo), por exemplo, se vc
               ///colocasse a = 2.5, a variavel armazenaria a = 2;
    float f = 2.5;
    double g = 2.52;
    char h = 'a'; ///lembrar de por entre aspas

    return 0; ///em geral, se poe return 0 -> maneira de encerrar o programa... a funcao int espera um retorno, e retornar 0
              ///significa que o programa foi compilado sem erros (geralmente, na linguagem C, retorna 1 ou -1 quando da erro)
}

