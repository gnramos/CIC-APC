/**      @file: 3-automatica.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de consumo excessivo de memória com alocação automática. Gera um
 * único processo que aloca automaticamente de 1 KB por chamada, e repete
 * (recursivamente) estas alocações até que a pilha de execução do processo seja
 * insuficiente.
 *
 * NÃO REPITA ISSO EM CASA! */

#include <stdio.h>

#define BYTES_POR_KB 1024

/* Variável global para contar quantas vezes a função mais_um_KB é chamada. */
int alocacoes = 0;

/* Processo recursivo que indica os endereços de início e fim do vetor alocado.
Assume-se que o sistema operacional executa até estourar a pilha de execução. */
void mais_um_KB() {
    ++alocacoes;

    /* Alocação automática. */
    char c[1024*BYTES_POR_KB];

    /* Exibe as informaçães atuais. */
    printf("%d) v=[%p,%p]\n", alocacoes, c, c+BYTES_POR_KB);

    /* Repete. */
    mais_um_KB();
}

int main(){
    mais_um_KB();

    return 0;
}