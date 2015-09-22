#  -*- coding: utf-8 -*-
#       @file: 2-vetor.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo uso de vetor como argumento de função.


def mostra(vetor):
    """Mostra todos os elementos do vetor."""
    print "{", ' '.join(str(v) for v in vetor), '}'


def maior(vetor):
    """Retorna o maior elemento do vetor."""
    return max(vetor)

    # m = 0
    # for i in range(len(vetor)):
    #     if vetor[i] > vetor[m]:
    #         m = i
    # return vetor[m]
    #
    # ou então
    #
    # m = vetor[0]
    # for v in vetor:
    #     if v > m:
    #         m = v
    # return m


vetor = [1, 2, 1, 4, 8, 7, 6, 5, 10, 9]
mostra(vetor)
print "O maior elemento é:", maior(vetor)
