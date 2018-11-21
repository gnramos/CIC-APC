/**      @file: 11-main.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de manipulação do valor de retorno de programas. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int resultado;

  /************
   * ATENÇÃO! *
   ************
  A instrução "system" faz o sistema operacional executar o comando fornecido
  como argumento, e isto pode ser *MUITO* perigoso. Veja mais detalhes ao final
  deste arquivo. */
  resultado = system("gcc -Wall -ansi 10-main.c -o soma");

  /* Assumindo que o processo terminou sem erros, deve-se usar a macro WEXITSTATUS.
    Mais detalhes em:http://stackoverflow.com/questions/808541/any-benefit-in-using-wexitstatus-macro-in-c-over-division-by-256-on-exit-statu */
  printf("Resultado de gcc: %d \n", WEXITSTATUS(resultado));

  if(resultado == EXIT_SUCCESS) {
    resultado = system("./soma 50 -1 6 -47 2");
    printf("Resultado da soma: %d\n",WEXITSTATUS(resultado));
  }

  return EXIT_SUCCESS;
}

/* A função "system" (definida em stdlib.h) é usada no seu programa para
solicitar que o sistema operacional execute um comando. Neste exemplo, foi usada
para compilar o programa "10-main.c" e executar o arquivo resultante.

Imagine se este executável apagasse todos os seus arquivos, ou enviasse e-mails
com todos os seus dados pessoais (que deveriam ser privados) ou que fosse um
ransomware (https://pt.wikipedia.org/wiki/Ransomware) ou pior...

********************************
* O ideal é evitar utilizá-la. *
********************************

Na disciplina de Algoritmos e Programação de Computadores, esta função
geralmente é utilizada para "limpar" o terminal durante a execução de um
programa mais complexo de modo que a interação com o usuário seja mais
interessante, da seguinte forma:

system("clear");

Este é um uso simples que não tem maiores consequências, mas a função é muito
poderosa e, se mal utilizada, pode causar sérios problemas. Além de potenciais
prejuízos a seus dados e sistema, o uso da função tem um custo computacional
muito elevado (e isso pode fazer toda a diferença na sua aplicação) e não é
portátil (não funciona na maioria dos sistemas operacionais, embora esteja
presente nas versões mais recentes de Gnu/Linux e Windows. */
