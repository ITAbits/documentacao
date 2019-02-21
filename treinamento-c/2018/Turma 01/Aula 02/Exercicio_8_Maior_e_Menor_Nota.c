/**
  * Esse programa l� um n�mero n de notas numa turma e
  * devolve a maior e menor notas obtidas. � interessante notar
  * que nesse problema n�o ser� necess�rio armazenar todas as notas
  * digitadas para comparar depois, pois sabemos os valores m�ximo e
  * m�nimo que a nota pode assumir.
  * Problema para refletir: Como voc� resolveria o mesmo problema
  * caso n�o fosse poss�vel saber nem a maior nem a menor nota poss�vel?
  */

//Inclus�o de bibliotecas
#include <stdio.h>

//Fun��o Principal de um programa em C
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
  /* A maior nota � colocada como zero, pois qualquer nota inserida ser� maior ou igual a ela */
  /* A menor nota foi colocada como cem, pois qualquer nota inserida ser� menor ou igual a ela */
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
