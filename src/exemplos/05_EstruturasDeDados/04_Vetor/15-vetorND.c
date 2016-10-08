/**      @file: 15-vetorND.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo uso de vetor com 3 dimensões utilizado para
 * armazenar as notas de todos os alunos de um professor. */

#include "../../4_Subalgoritmos/modulos/apc_subalgoritmos.h"

/* Retorna um valor aleatório entre 0 e 10. */
float nota_aleatoria() {
  return aleatorio(11);
}

int main() {
  const int NUM_TURMAS = 2;
  const int NUM_ALUNOS = 40;
  const int NUM_PROVAS = 3;
  const float MEDIA = 7.0;

  int notas[NUM_TURMAS][NUM_ALUNOS][NUM_PROVAS];
  float medias[NUM_TURMAS][NUM_ALUNOS];
  int aprovados[NUM_TURMAS];

  int i, j, k;

  /* Valores iniciais aleatórios. */
  for(i = 0; i < NUM_TURMAS; ++i)
    for(j = 0; j < NUM_ALUNOS; ++j)
      for(k = 0; k < NUM_PROVAS; ++k)
        notas[i][j][k] = nota_aleatoria();

  /* Calculando a média de cada aluno: */
  for(i = 0; i < NUM_TURMAS; ++i) {
    for(j = 0; j < NUM_ALUNOS; ++j) {
      medias[i][j] = 0;
      for(k = 0; k < NUM_PROVAS; ++k)
        medias[i][j] += (1.0*notas[i][j][k]);
      medias[i][j] /= NUM_PROVAS;

      /*printf("Aluno(a) %d da turma %d foi aprovado(a) com média %.2f.\n", j, i, medias[i][j]);*/
    }
  }

  /* Calculando o índice de aprovação de cada turma: */
  for(i = 0; i < NUM_TURMAS; ++i) {
    aprovados[i] = 0;
    for(j = 0; j < NUM_ALUNOS; ++j)
      if(medias[i][j] >= MEDIA)
        aprovados[i] += 1;

    printf("Turma %d obteve %.0f%% de aprovação.\n", i, (aprovados[i]*100.0)/NUM_ALUNOS);
  }

  return 0;
}