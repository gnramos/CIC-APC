/**      @file: 04-automatica.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de consumo excessivo de memória com alocação automática. Gera
 * dois processos que alocam automaticamente, cada um, de 1 MB por chamada, e
 * repetem (recursivamente) estas alocações até que a pilha de execução de cada
 * processo seja insuficiente.
 *
 * NÃO REPITA ISSO EM CASA! */

#include <stdio.h>
#include <unistd.h>

#define BYTES_POR_KB 1000
#define BYTES_POR_MB 1000*BYTES_POR_KB

/* Variável global para contar quantas vezes a função mais_um_MB é chamada. */
int i = 0;

/* Variável global para indicar qual o processo em execução. */
int pid;

/* Processo recursivo que indica os endereços de início e fim do vetor alocado.
Assume-se que o sistema operacional executa até estourar a pilha de execução. */
void mais_um_MB() {
    char c[BYTES_POR_MB];

    printf("%d-%d) v=[%p,%p]\n", pid, ++i,c, c+BYTES_POR_MB);

    mais_um_MB();
}

int main(){
    pid = fork(); /* Inicia outro processo (thread) para analisar a ordem de
                     execução e alocação de memória.

                     MUITO CUIDADO COM ESTE COMANDO! */

    mais_um_MB();

    return 0;
}