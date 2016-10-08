/**      @file: apc_busca.h
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação de funções de busca. */

#ifndef UNB_CIC_APC_BUSCA_H
#define UNB_CIC_APC_BUSCA_H

int comparacoes_na_busca; /* Variável global para contar a quantidade de
                             comparações realizadas em uma função de busca. Veja
                             a função testa_busca. */


/* Realiza a busca pelo valor dado no vetor de tamanho n,
indicando quantas comparações foram realizadas. */
void testa_busca(int valor, int* vetor, int n, int (*busca)(int, int *, int)) {
    /* A quantidade de comparações é acumulada na variável
       global comparacoes_na_busca. */

    int acumulado = comparacoes_na_busca;

    comparacoes_na_busca = 0;
    int i = busca(valor, vetor, n);
    if(i != -1 )
        printf("%d está na posição %d do vetor.", valor, i);
    else
        printf("%d não está no vetor.", valor);
    printf(" (%d comparações)\n", comparacoes_na_busca);

    comparacoes_na_busca += acumulado;
}

/* Retorna o índice do elemento cujo conteúdo é "valor", se
existir no vetor de n elementos, -1 caso contrário. */
int busca_sequencial(int valor, int* vetor, int n) {
    int i;

    for(i = 0; i < n; ++i) {
        ++comparacoes_na_busca;
        if(vetor[i] == valor)
            return i;
    }

    return -1;
}

/* Retorna o índice do elemento cujo conteúdo é "valor", se
existir no vetor de n elementos, -1 caso contrário. */
int busca_sequencial_ord(int valor, int* vetor, int n) {
    int i;

    for(i = 0; i < n; ++i) {
        ++comparacoes_na_busca;
        if(vetor[i] == valor)
            return i;
        else {
            ++comparacoes_na_busca;
            if(vetor[i] > valor) /* "otimização" */
                return -1;
        }
    }

    return -1;
}

/* Retorna o índice do elemento cujo conteúdo é "valor", se
existir no vetor de n elementos, -1 caso contrário. */
int busca_binaria_i(int valor, int* vetor, int n) {
    int meio, inf = 0, sup = n-1;

    while(inf <= sup) {
        meio = (inf+sup)/2;        /* Isso não está bom... */
        ++comparacoes_na_busca;
        if(vetor[meio] < valor)
            inf = meio + 1;        /* busca a direita */
        else {
            ++comparacoes_na_busca;
            if(vetor[meio] > valor)
                sup = meio - 1;    /* busca a esquerda */
            else
                return meio;
        }
    }

    return -1;
}

/* Retorna o índice do elemento cujo conteúdo é "valor", se
existir no vetor de n elementos, -1 caso contrário. */
int busca_binaria_r(int valor, int* vetor, int n) {
    if(n < 1)
        return -1;

    int meio = n/2;

    ++comparacoes_na_busca;
    if(vetor[meio] > valor) /* busca a esquerda */
        return busca_binaria_r(valor, vetor, meio);
    else {
        ++comparacoes_na_busca;
        if(vetor[meio] < valor) { /* busca a direita */
            int resultado = busca_binaria_r(valor, vetor + meio + 1, n - meio - 1);
            if(resultado == -1)
                return -1;
            return meio + resultado + 1;
        }
        else
            return meio;
    }
}

#endif /* UNB_CIC_APC_BUSCA_H */