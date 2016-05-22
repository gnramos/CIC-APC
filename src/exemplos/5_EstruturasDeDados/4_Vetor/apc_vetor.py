#  -*- coding: utf-8 -*-
#       @file: apc_vetor.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implementação de funções comuns para vetores.


import sys

sys_print = sys.stdout.write


def mostra_indices(n):
    """Mostra os índices de cada posição do string."""
    print '           ',
    for x in xrange(1, n/10 + 1):
        sys_print('         ' + str(x))
    print '\n          ',
    for x in xrange(n):
        sys_print(str(x % 10))
    print


def mostra_n_chars(string, n):
    """Mostra os n primeiros caracteres da partir do endereço dado."""
    print 'string = [',
    for i in xrange(n):
        sys_print(string[i])
    print ']'
