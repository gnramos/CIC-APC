#  -*- coding: utf-8 -*-
#    @package: 07-multiplica.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implementação de código para computar o valor da multiplicação de dois
# números inteiros de forma iterativa.


def mult(a, b):
    '''Retorna a multiplicação de a, b vezes.

    Assume que b > 0.'''
    resultado = 0
    for x in range(b):
        resultado += a
    return resultado


for a in range(5):
    for b in range(5):
        print('mult(%d, %d) = %d' % (a, b, mult(a, b)))
