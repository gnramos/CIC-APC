/**      @file: 13-ponteiros.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de equivalência de ponteiros. */

#include <stdio.h>

#define N 2
#define M 4

/* Mostra os elementos da matriz. */
void mostra(int v[][M]) {
    int i,j;
    for(i = 0; i < N; ++i) {
        for(j = 0; j < M; ++j)
            printf("%3d", v[i][j]);
        printf("\n");
    }
    printf("\n");
}

/* Trata o endereço como um vetor de ponteiros para inteiros. */
void f0(int**      v, int i, int j) { v[i][j] = 0; }

/* Trata o endereço como um vetor de inteiros. */
void f1(int*       v, int i, int j) { v[i*M + j] = 1; }

/* Trata o endereço como um vetor de vetores de M inteiros. */
void f2(int (* v)[M], int i, int j) { v[i][j] = 2; }

/* Trata o endereço como um vetor de vetores de M inteiros. */
void f3(int   v[][M], int i, int j) { v[i][j] = 3; }

int main() {
    int v[N][M] = {{-1,-1,-1,-1}, {-1,-1,-1,-1}};

    mostra(v);
    /*f0( v, 1, 0); mostra(v);*/
    f1(*v, 1, 1); mostra(v);
    f2(v, 1, 2); mostra(v);
    f3( v, 1, 3); mostra(v);

    return 0;
}

/* f0 não funciona, pois cada elemento do vetor não é necessariamente um
endereço válido de memória (certamente não com os valores dados.

   f1 funciona, pois a linguagem C aloca os elementos sequencialmente na memória,
portanto pode-se considerar a matriz como um grande vetor de NxM elementos.

   f2 e f3 funcionam pois o tamanho de cada elemento é definido na declaração da
função. */