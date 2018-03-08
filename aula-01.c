//Isso é um comentário de uma linha.
///Isso é um comentário de documentação de varias linhas, vou usar esse pois é mais legivel que o cinza.

/*
    Isso é um comentário de várias linhas.
*/

/**
    Isso é um comentário de documentação de várias linhas. */

#include <stdio.h> ///Essa é a bliblioteca que contém as declarações de printf() e scanf().
///stdio.h é o nome em si do arquivo. Veremos a razão do < > nas próximas aulas.


int main() ///Essa é a principal função do programa, o ponto de inicio da execução do programa. Até a aula de funções isso é macaco.
{ ///Essa é a chave que inicia o bloco de execução da função main.

    /** Tipos básicos de variável: int, float, double, char.
     *  Podem ser declaradas várias variáveis de um mesmo tipo em uma mesma linha.
     *  É opcional inicializar as variáveis com um valor inicial.
     */
    int i1, i2 = 18, i3 = 70;
    float f1 = 10.3, f2;
    double d1 = 42.12, d2 = 50.7234;
    char c1 = 'k';

    i1 = 15; ///As variáveis também podem ser atribuídas um valor em linhas após sua declaração

    /**
     *  No C, o operador '=' não denota igualdade e sim atribuição. O que está do lado esquerdo recebe o valor do lado direito.
     *  logo 30 = i1 está errado, pois 30 não é uma variável e não pode receber outro valor.
     */

    ///Operadores matemáticos do C:  +  -  *  /  % (modulo, e apenas pode ser usado para operandos inteiros)
    f1 = i2 * d2 + 3; ///f1 recebe o valor 916,0212
    i1 = i3 / 2;      ///i1 recebe o valor 7, pois, como é uma divisão entre inteiros, o resultado é inteiro
    f2 = f1 / i1;     ///Numa divisão entre um float e um int, a divisão é tratada como divisão entre floats, e o resultado é um float.
    i1 = f2 * f1;     ///Acontece um truncamento, por tentar colocar um float em um inteiro.
    i1 = 3 * 5;
//  i1 = i2 / 0;      ///Não fazer divisões por 0, pois crasha o programa

    /** Uso do prinf():
     *  printf() é uma função que imprime texto na tela.
     */

    printf("Exemplos de printf():\n");
    printf("Hello World!\n");

    /** O caractere \n significa quebra de linha. (O printf() imprime Hello World! e pula uma linha).
     *  O printf também pode imprimir o valor de variáveis na tela:
     *  Associação entre tipos de variável e especificadores de formatação:
     *
     *  int     : %d (escreve inteiros na base decimal, para a base octal se usa %o e hexadecimal %x)
     *  float   : %f (escreve números em ponto flutuante, para escrever em notação científica se usa %e)
     *  double  : %f (na hora da impressão somente, para a leitura pelo scanf se usaria %lf)
     *  char    : %c
     *
     *  ex: printf("O valor de i2 na base decimal e: %d\nE o valor de i2 na base hexadecimal e: %x\n", i2, i2);
     *  imprime:
     *      O valor de i2 na base decimal e: 18
     *      E o valor de i2 na base hexadecimal e: 12
     */

    printf("O valor de i2 na base decimal e: %d\nE o valor de i2 na base hexadecimal e: %x\n", i2, i2);
    printf("%d %f %f %c\n", i1, f1, d1, c1);
    printf("O valor do produto de i1 e i2 e %d", i1 * i2);
    printf("\n");
//  printf('Um exemplo de erro, usei aspas simples');
//  print("Outro exemplo de erro, equeci o f no printf");
//  printf("Um exemplo de erro em que eu esqueço de fechar as aspas);
//  Printf("Um exemplo de erro em que o printf começa com P maiusculo");

    /** Uso do scanf():
     *  scanf() é uma função que lê dados do teclado e armazena-os em variaveis daquele tipo.
     *
     *  Ex: scanf("%d", &i3);
     *     lê um inteiro do teclado e salva ele em i3. Logo i3 passa a ter aquele valor.
     *     O & denota "Endereço de" e será visto com mais detalhes na aula de ponteiros,
     *     é necessário colocá-lo para que scanf consiga modificar o valor de i3,
     *     porem veremos isso com mais detalhes apenas na aula de ponteiros.
     *
     *  Associação entre tipos de variável e especificadores de formatação:
     *
     *  int     : %d (lê inteiros na base decimal, para a base octal se usa %o e hexadecimal %x)
     *  float   : %f
     *  double  : %lf (na hora da leitura somente, para a impressão pelo printf se usaria %f)
     *  char    : %c
     */

    scanf("%c", &c1);
    scanf("%f %lf", &f1, &d2);
    /**
     *  Boa prática para scanf: somente colocar %algo ou espaços dentro dos "" do scanf(),
     *  pois pode bugar o funcionamento correto caso contrário.
     */

    /**
     *  Uso do if:
     *
     *  if(condição) {
     *      comandos;
     *  }
     *
     *  Ou, caso só haja um comando, pode-se omitir as chaves {}
     *
     *  if(condição) comando;
     *
     *  se a condição for verdadeira, executam-se os comandos dentro do bloco {} imediatamente após o if.
     *  se a condição for falsa, ignoram-se os comandos do bloco {}
     *
     *  a condição pode ser um numero (ex: 34) ou uma expressão condicional (ex: i1 > 1)
     *  caso seja um numero, a condição será verdadeira se o numero for diferente de 0 e falsa se for igual a 0.
     *
     *  ex:
     *  if(-9) {
     *      ...
     *  }
     *  esse exemplo sempre entra no if
     *
     *  if(0) {
     *      ...
     *  }
     *  esse exemplo nunca entra no if
     *
     *  no caso de uma expressão condicional, a expressão é evaluada e se transforma em um dos numeros 0 ou 1,
     *  que, então, é usado para entrar ou não no if.
     *
     *  ex:
     *  if(30 > 2) {
     *      ...
     *  }
     *  nesse exemplo, o 30 > 2 se transforma em 1, logo o exemplo vira:
     *  if(1) {
     *      ...
     *  }
     *  que sempre entra no if.
     *
     *  operadores comparativos:
     *  >   (maior que)
     *  <   (menor que)
     *  >=  (maior ou igual que)
     *  <=  (menor ou igual que)
     *  ==  (igual à)
     *  !=  (diferente de)
     */
    if(i1 > i2) {
        printf("i1:%d é maior que i2:%d\n", i1, i2);
    }
    printf("O valor de 4800 > 700 eh %d\n", 4800 > 700); ///Imprime '1' na tela, demonstrando assim que realmente (4800 > 700) vira (1)
    /**
     *  Uso do else:
     *
     *  if(condição) {
     *      comandosDoIf;
     *  }
     *  else {
     *      comandosDoElse;
     *  }
     *
     *  Ou, caso so haja um comando no bloco do else, as chaves podem ser omitidas:
     *
     *  else comandoDoElse;
     *
     *  O else deve ser sempre precedido por um if.
     *  O bloco do else só é executado caso a condição do if seja falsa.
     *
     *  ex:
     *  if(1 > 2) printf("1 é maior que 2\n");
     *  else printf("1 não é maior que 2\n");
     *
     *  o programa imprime a segunda mensagem na tela.
     */
    ///Outro Exemplo:
    int a = 5, b = 5;
    if(a < b) {
        printf("%d < %d\n", a, b);
    }
    else {
        printf("%d >= %d\n", a, b);
    }
    /**
     *  uso do else if:
     *  o else if é apenas a junção do else com outro if. ex:
     *  if(a < b) {
     *      printf("a eh menor que b\n");
     *  }
     *  else if(a > b) {
     *      printf("a eh maior que b\n");
     *  }
     *  else {
     *      printf("a eh igual a b\n");
     *  }
     *
     *  varios if else podem ser encadeados
     */

    /**
     *  mais detalhes sobre expressões condicionais:
     *  pode-se encadear expressões condicionais com o uso dos operadores lógicos:
     *
     *  &&  :AND
     *  ||  :OR
     *  !   :NOT
     *
     *  o and verifica se as duas condições são verdadeiras, e, no caso, retorna verdadeiro. ex:
     *  (2 > 1) && (7 >= -9) é uma expressão verdadeira, já
     *  (1 != 1) && (9 > 0) é uma expressão falsa, pois 1 != 1 é falso.
     *
     *  o or verifica se alguma das condições é verdadeira, e, no caso, retorna verdadeiro. ex:
     *  (10 > -100) || (1 == 1000) é verdadeiro, pois a condição da esquerda é verdadeira, já
     *  (0 > 1 || 10000 == 100) é falso, pois as duas condições são falsas.
     *
     *  o not nega uma expressão à sua direita. ex:
     *  !(10 != 10) é uma expressão verdadeira, pois 10 != 10 é falsa.
     *
     *  pode-se encadear várias condições desse modo.
     */
    ///Ex:
    if(100 > 20 && !(7 > 8 || 9 == 1)){ ///por incrivel que pareça, da verdadeiro.
        printf("Entrou no if\n");
    }
    else {
        printf("Entrou no else\n");
    }


    return 0;
}
