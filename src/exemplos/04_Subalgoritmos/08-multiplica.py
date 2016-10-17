#  -*- coding: utf-8 -*-
#       @file: 8-multiplica.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implementação de código para computar o valor da multiplicação de dois
# números inteiros de forma recursiva.


def mult(a, b):
    """Retorna a multiplicação de a, b vezes.

    Assume que b >= 0."""
    return 0 if b == 0 else a + mult(a, b-1)


for a in range(5):
    for b in range(5):
        print 'mult(%d, %d) = %d' % (a, b, mult(a, b))
