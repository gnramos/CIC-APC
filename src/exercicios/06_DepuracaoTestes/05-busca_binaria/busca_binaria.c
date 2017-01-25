/**      @file: busca_binaria.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação de testes para a função para busca binária, que assume-se estar
 * implementada na função bb. */

#include <assert.h> /* assert */
#include <stdlib.h> /* srand, rand */
#include <time.h>   /* time */


/** Recebe um vetor (endereço inicial e tamanho) e um elemento a se buscar neste
 * vetor. Retorna o índice da posição deste elemento, se existir, -1 caso
 * contrário. */
int bb(int *vetor, int tamanho, int elemento) {
    /* Escreva o código aqui. */
}

/* Testes */
void testa_vetor_nulo() {
    assert(-1 == bb(NULL, 1, 1));
}

void testa_tamanho_negativo() {
    int vetor[] = {1,2,3};

    assert(-1 == bb(vetor, -1, 1));
}

void testa_tamanho_zero() {
    int vetor[] = {1,2,3};

    assert(-1 == bb(vetor, 0, 1));
}

void testa_tamanho_positivo() {
    int vetor[] = {1,2,3};

    assert(-1 != bb(vetor, 1, 1));
}

void testa_encontra_em_vetor_de_tamanho_1() {
    int vetor[] = {1};

    assert(0 == bb(vetor, 1, 1));
}

void testa_nao_encontra_em_vetor_de_tamanho_1() {
    int vetor[] = {1};

    assert(-1 == bb(vetor, 1, 2));
}

void testa_encontra_primeiro_em_vetor_de_tamanho_2() {
    int vetor[] = {1,2};

    assert(0 == bb(vetor, 2, 1));
}

void testa_encontra_segundo_em_vetor_de_tamanho_2() {
    int vetor[] = {1,2};

    /* Escreva o teste adequado aqui. */
    assert(0);
}

void testa_nao_encontra_em_vetor_de_tamanho_2() {
    int vetor[] = {1,2};

    assert(-1 == bb(vetor, 2, 0));
}

void testa_encontra_diminuindo_tamanho_do_vetor_de_tamanho_2() {
    int vetor[] = {1,2};

    assert(0 == bb(vetor, 1, 1));
}

void testa_nao_encontra_diminuindo_tamanho_do_vetor_de_tamanho_2() {
    int vetor[] = {1,2};

    assert(-1 == bb(vetor, 1, 2));
}

void testa_encontra_primeiro_em_vetor_de_tamanho_3() {
    int vetor[] = {1,2,3};

    assert(0 == bb(vetor, 3, 1));
}

void testa_encontra_segundo_em_vetor_de_tamanho_3() {
    int vetor[] = {1,2,3};

    assert(1 == bb(vetor, 3, 2));
}

void testa_encontra_terceiro_em_vetor_de_tamanho_3() {
    int vetor[] = {1,2,3};

    assert(2 == bb(vetor, 3, 3));
}

void testa_nao_encontra_em_vetor_de_tamanho_3() {
    int vetor[] = {1,2,3};

    assert(-1 == bb(vetor, 3, 0));
}

void testa_encontra_diminuindo_tamanho_do_vetor_de_tamanho_3() {
    int vetor[] = {1,2,3};

    /* Escreva o teste adequado aqui. */
    assert(0);
}

void testa_nao_encontra_diminuindo_tamanho_do_vetor_de_tamanho_3() {
    int vetor[] = {1,2,3};

    assert(-1 == bb(vetor, 1, 2));
}

void testa_encontra_aleatorio_em_vetor_de_tamanho_10() {
    int vetor[] = {1,2,3,4,5,6,7,8,9,10};

    int i = bb(vetor, 10, (rand()%10)+1);

    assert(i >= 0 && i < 10);
}

void testa_encontra_todos_em_vetor_de_tamanho_50() {
    int vetor[50], i, j;

    for(j = 0; j < 50; ++j)
        vetor[j] = j+1;


    /* Escreva o teste adequado aqui. */
    assert(0);
}

int main() {
    srand(time(NULL));

    testa_vetor_nulo();
    testa_tamanho_negativo();
    testa_tamanho_zero();
    testa_tamanho_positivo();
    testa_encontra_em_vetor_de_tamanho_1();
    testa_nao_encontra_em_vetor_de_tamanho_1();
    testa_encontra_primeiro_em_vetor_de_tamanho_2();
    testa_encontra_segundo_em_vetor_de_tamanho_2();
    testa_nao_encontra_em_vetor_de_tamanho_2();
    testa_encontra_diminuindo_tamanho_do_vetor_de_tamanho_2();
    testa_nao_encontra_diminuindo_tamanho_do_vetor_de_tamanho_2();
    testa_encontra_primeiro_em_vetor_de_tamanho_3();
    testa_encontra_segundo_em_vetor_de_tamanho_3();
    testa_encontra_terceiro_em_vetor_de_tamanho_3();
    testa_nao_encontra_em_vetor_de_tamanho_3();
    testa_encontra_diminuindo_tamanho_do_vetor_de_tamanho_3();
    testa_nao_encontra_diminuindo_tamanho_do_vetor_de_tamanho_3();
    testa_encontra_aleatorio_em_vetor_de_tamanho_10();
    testa_encontra_todos_em_vetor_de_tamanho_50();

    /* Se chegou aqui sem indicar erros, passou por todos os testes. */

    return EXIT_SUCCESS;
}
