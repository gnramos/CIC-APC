#  -*- coding: utf-8 -*-
#       @file: 2-vetor.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo uso de vetor como argumento de função e de ponteiro para função.


def mostra(vetor, prefixo):
    """Mostra todos os elementos do vetor."""
    print prefixo, ' '.join(str(v) for v in vetor)


def crescente(a, b):
    """Indica se a <= b."""
    return a <= b


def decrescente(a, b):
    """Indica se b <= a."""
    return a >= b


def ordena(vetor, em_ordem):
    """Ordena os elementos do vetor conforme a função em_ordem."""

    for i in xrange(len(vetor)):
        for j in xrange(i+1, len(vetor)):
            if not em_ordem(vetor[i], vetor[j]):
                vetor[i], vetor[j] = vetor[j], vetor[i]

    # A forma mais compacta é usar a função sorted, indicando como comparar os
    # elementos.
    #
    # sorted(vetor, cmp=em_ordem)


vetor = [1, 2, 1, 4, 8, 7, 6, 5, 10, 9]
mostra(vetor, '         Original:')

ordena(vetor, crescente)
mostra(vetor, '  Ordem crescente:')

ordena(vetor, decrescente)
mostra(vetor, 'Ordem decrescente:')
