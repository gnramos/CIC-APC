#  -*- coding: utf-8 -*-
#    @package: apc_ordenacao_eficiente.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implementação de funções de ordenação.

from apc_ordenacao import crescente, troca

###############################################################################
# Heap Sort
###############################################################################


def transforma_em_heap(vetor, inicial, final):
    '''Transforma o vetor de inteiros em um Heap.'''
    esquerda = 2 * inicial + 1
    direita = esquerda + 1

    max = inicial
    if esquerda <= final and not crescente(vetor[esquerda], vetor[inicial]):
        max = esquerda
    if(direita <= final and not crescente(vetor[direita], vetor[max])):
        max = direita

    if max != inicial:
        troca(vetor, inicial, max)
        transforma_em_heap(vetor, max, final)


def heap_sort(vetor):
    '''Ordena os elementos do vetor em ordem crescente.'''
    for i in range(len(vetor) // 2, -1, -1):
        transforma_em_heap(vetor, i, len(vetor) - 1)

    for i in range(len(vetor) - 1, 0, -1):
        troca(vetor, 0, i)
        transforma_em_heap(vetor, 0, i - 1)



###############################################################################
# Merge Sort
###############################################################################

def merge(esquerda, direita):
    vetor = []

    while esquerda and direita:
        if crescente(esquerda[0], direita[0]):
            vetor.append(esquerda.pop(0))
        else:
            vetor.append(direita.pop(0))

    if esquerda:
        vetor.extend(esquerda)
    if direita:
        vetor.extend(direita)

    return vetor


def merge_sort(vetor):
    '''Ordena os elementos do vetor em ordem crescente.'''
    if len(vetor) < 2:
        return vetor

    meio = len(vetor) // 2
    esquerda = merge_sort(vetor[:meio])
    direita = merge_sort(vetor[meio:])
    return merge(esquerda, direita)


###############################################################################
# Quicksort
###############################################################################

def particiona(vetor):
    pivo = 0
    for i in range(1, len(vetor)):
        if crescente(vetor[i], vetor[0]):
            pivo += 1
            troca(vetor, pivo, i)

    troca(vetor, 0, pivo)

    return pivo


def quicksort(vetor):
    '''Ordena os elementos do vetor em ordem crescente.'''
    if len(vetor) < 2:
        return vetor

    pivo = particiona(vetor)
    esquerda = quicksort(vetor[:pivo])
    direita = quicksort(vetor[pivo + 1:])

    return esquerda + [vetor[pivo]] + direita
