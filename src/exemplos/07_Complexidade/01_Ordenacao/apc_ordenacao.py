#  -*- coding: utf-8 -*-
#    @package: apc_ordenacao.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implementação de funções de ordenação.


import random


COMPARACOES_NA_ORDENACAO = 0  # Variável global para contar a quantidade de
                              # comparações realizadas em uma função de busca.
                              # Veja a função testa_ordenacao.

TROCAS_NA_ORDENACAO = 0  # Variável global para contar a quantidade de trocas
                         # realizadas em uma função de busca. Veja a função
                         # testa_ordenacao.


def crescente(a, b):
    '''Retorna True se a <= b, False caso contrário.'''
    global COMPARACOES_NA_ORDENACAO
    COMPARACOES_NA_ORDENACAO += 1
    return (a <= b)


def troca(vetor, a, b):
    '''Troca os conteúdos dos inteiros.'''
    global TROCAS_NA_ORDENACAO
    TROCAS_NA_ORDENACAO += 1
    vetor[a], vetor[b] = vetor[b], vetor[a]


###############################################################################
# Bogosort
###############################################################################

def ordenado(vetor):
    '''Retorna True se o vetor de n elementos está em ordem crescente, False
    caso contrário.
    '''
    return all(crescente(vetor[x - 1], vetor[x]) for x in range(1, len(vetor)))


def bogosort(vetor):
    '''Ordena os elementos do vetor em ordem crescente.'''
    while not ordenado(vetor):
        random.shuffle(vetor)


###############################################################################
# Bubblesort
###############################################################################

def bubble_sort1(vetor):
  '''Ordena os elementos do vetor em ordem crescente.'''
  for i in range(len(vetor)):
    for j in range(i + 1, len(vetor)):
      if not crescente(vetor[i], vetor[j]):
        troca(vetor, i, j)


def bubble_sort2(vetor):
    '''Ordena os elementos do vetor em ordem crescente.'''
    houve_troca = True
    while houve_troca:
        houve_troca = False
        for i in range(1, len(vetor)):
            if not crescente(vetor[i - 1], vetor[i]):
                troca(vetor, i - 1, i)
                houve_troca = True


###############################################################################
# Selection Sort
###############################################################################

def selection_sort(vetor):
    '''Ordena os elementos do vetor em ordem crescente.'''
    for i in range(len(vetor)):
        minimo = i
        for j in range(i + 1, len(vetor)):
            if not crescente(vetor[minimo], vetor[j]):
                minimo = j
        if minimo != i:
            troca(vetor, i, minimo)


###############################################################################
# Insertion Sort
###############################################################################

def insertion_sort(vetor):
    '''Ordena os elementos do vetor em ordem crescente.'''
    for i in range(1, len(vetor)):
        j = i
        while j > 0 and not crescente(vetor[j - 1], vetor[j]):
            troca(vetor, i, j)
            j -= 1


###############################################################################
###############################################################################

def testa_ordenacao(algoritmo):
    ''' Testa a ordenação de vetores com elementos em disposições distintas
    utilizando a função dada.
    '''
    def testa(algoritmo, vetor):
        '''Realiza a ordenação do vetor de n elementos com a função dada,
        indicando o resultado e os custos envolvidos.
        '''
        global COMPARACOES_NA_ORDENACAO, TROCAS_NA_ORDENACAO
        COMPARACOES_NA_ORDENACAO = 0
        TROCAS_NA_ORDENACAO = 0

        print('     Original: ')
        print(vetor)
        vetor_ordenado = algoritmo(vetor)
        # Alguns algoritmos retornam uma cópia ordenada do vetor
        if vetor_ordenado:
            vetor = vetor_ordenado

        print('  Ordem crescente: ')
        print(vetor)
        print('({} trocas, {} comparações)\n'.format(TROCAS_NA_ORDENACAO,
                                                     COMPARACOES_NA_ORDENACAO))

    vetor_aleatorio = [1, 2, 1, 4, 8, 7, 6, 5, 10, 9]
    vetor_em_ordem = [1, 1, 2, 4, 5, 6, 7, 8, 9, 10]
    vetor_em_ordem_inversa = [10, 9, 8, 7, 6, 5, 4, 2, 1, 1]

    testa(algoritmo, vetor_aleatorio)
    testa(algoritmo, vetor_em_ordem)
    testa(algoritmo, vetor_em_ordem_inversa)


testa_ordenacao(bogosort)
