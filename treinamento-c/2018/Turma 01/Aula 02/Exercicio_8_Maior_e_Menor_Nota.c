/**
  * Esse programa lê um número n de notas numa turma e
  * devolve a maior e menor notas obtidas. É interessante notar
  * que nesse problema não será necessário armazenar todas as notas
  * digitadas para comparar depois, pois sabemos os valores máximo e
  * mínimo que a nota pode assumir.
  * Problema para refletir: Como você resolveria o mesmo problema
  * caso não fosse possível saber nem a maior nem a menor nota possível?
  */

//Inclusão de bibliotecas
#include <stdio.h>

//Função Principal de um programa em C
int main() {
  int n,         /* guarda o numero de alunos      */
      nota,      /* usada para a leitura das notas */
      contador,  /* numero de notas ja' lidas      */
      notamaior, /* guarda a maior nota            */
      notamenor; /* guarda a menor nota            */


  printf("\n\tCalculo de maior e menor nota de uma turma\n");
  printf("\nDigite o numero de alunos: ");
  scanf("%d", &n);

  /* inicializacoes */
  /* A maior nota é colocada como zero, pois qualquer nota inserida será maior ou igual a ela */
  /* A menor nota foi colocada como cem, pois qualquer nota inserida será menor ou igual a ela */
  contador = 0;
  notamaior = 0;
  notamenor = 100;

  while (contador <  n) {
    printf("Digite uma nota (0 a 100): ");
    scanf("%d", &nota);
    contador = contador + 1;
    if (notamaior < nota)
      notamaior = nota;
    if (notamenor > nota)
      notamenor = nota;
  }

  if(n <= 0)
      printf("Quantidade de notas invalida!");
  else
  {
      printf("A maior nota obtida foi: %d\n", notamaior);
      printf("A menor nota obtida foi: %d\n", notamenor);
  }

  return 0;
}
