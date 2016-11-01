#  -*- coding: utf-8 -*-
##   @package: apc_vetor.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implementação de funções comuns para vetores.


def mostra_indices(n):
    '''Mostra os índices de cada posição do string.'''
    print('           ', end='')
    for x in range(1, n // 10 + 1):
        print('         ' + str(x), end='')
    print('\n          ', end='')
    for x in range(n):
        print(str(x % 10), end='')
    print()


def mostra_n_chars(string, n):
    '''Mostra os n primeiros caracteres da partir do endereço dado.'''
    print('string = [', end='')
    for i in range(n):
        print(string[i], end='')
    print(']')
