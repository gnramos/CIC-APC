/**      @file: 01-horas.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de execução sequencial de instruções. */

#include <stdio.h>

int main() {
  const int DIAS_NO_ANO = 365, HORAS_NO_DIA = 24;
  int idade_em_anos, idade_em_dias, idade_em_horas;

  printf("Olá! Quantos anos você tem?\n");
  scanf("%d", &idade_em_anos);

  /* Agora que se tem a idade em anos, é possível calcular
   * quantos dias já foram vividos (aproximadamente). */
  idade_em_dias = idade_em_anos*DIAS_NO_ANO;

  /* E agora que se sabe quantos foram os dias, calcula-se
   * quantas horas foram vividas (aproximadamente). */
  idade_em_horas = idade_em_dias*HORAS_NO_DIA;

  /* Só agora é possível mostrar o resultado. */
  printf("Sabia que já viveu %d horas?\n", idade_em_horas);

  return 0;
}