/**      @file: 2-ordem.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de uso de registros em vetores. */

#include <stdio.h>
#include <string.h>

/* Definição do tipo. */
typedef struct {
    int dia, mes, ano;
} data_t;

/* Composição por múltiplos registros. */
typedef struct {
    char nome[50];
    data_t data;
} aniversario_t;

/* Ponteiro para registro */
void mostra_data(data_t *data) {
    printf("%02d/%02d/%04d\n", data->dia,
                               data->mes,
                               data->ano);
}

void mostra(aniversario_t *aniversario) {
    printf("%12s: ", aniversario->nome);
    mostra_data(&(aniversario->data));
}

/* Indica a ordem alfabética. */
int alfabetica(aniversario_t a, aniversario_t b) {
  return strncmp(a.nome, b.nome, 50) < 0;
}

/* Indica a ordem cronológica. */
int cronologica(aniversario_t a, aniversario_t b) {
  if(a.data.ano != b.data.ano)
    return (a.data.ano < b.data.ano);
  if(a.data.mes != b.data.mes)
    return (a.data.mes < b.data.mes);
  return (a.data.dia <= b.data.dia);
}

/* Indica ordem alfabética, utilizando a cronológica em caso
 * de igualdade. */
int alfabetica_cronologica(aniversario_t a, aniversario_t b){
    int em_ordem = alfabetica(a,b);
    return (em_ordem ? em_ordem : cronologica(a, b));
}

void troca(aniversario_t *a, aniversario_t *b) {
    aniversario_t aux = (*a);
    (*a) = (*b);
    (*b) = aux;
}

/* Aplica a função de comparação dada em todos os elementos
 * do vetor, alterando suas posições de modo que fique
 * ordenado. */
void ordena(aniversario_t *vetor, int n, int (*em_ordem)(aniversario_t, aniversario_t)) {
    int i, j;
    for(i = 0; i < n; ++i)
        for(j = i + 1; j < n; ++j)
            if(!em_ordem(vetor[i], vetor[j]))
                troca(vetor+i, vetor+j);
}


int main() {
    int i;

    /* Vetor de registros. */
    const int n = 10;
    aniversario_t aniversarios[10] = {
        {"Charlie Zeta", 1, 1, 1980},
        {"Alice", 1, 1, 1988},
        {"Bob 1", 1, 1, 2000},
        {"Alice", 1, 1, 2009},
        {"Bob 2", 1, 1, 1999},
        {"Bob 3", 1, 7, 2000},
        {"Bob Silva", 12, 1, 2000},
        {"Alice", 1, 1, 1999},
        {"Charlie Alfa", 1, 1, 1980},
        {"Charlie Beta",1, 1, 1980}};

    ordena(aniversarios, n, cronologica);
    printf("Ordem Cronológica\n");
    for(i = 0; i < n; ++i)
        mostra(aniversarios + i);

    ordena(aniversarios, n, alfabetica);
    printf("\nOrdem Alfabética\n");
    for(i = 0; i < n; ++i)
        mostra(aniversarios + i);

    ordena(aniversarios, n, alfabetica_cronologica);
    printf("\nOrdem Alfabética/Cronológica\n");
    for(i = 0; i < n; ++i)
        mostra(aniversarios + i);

    return 0;
}