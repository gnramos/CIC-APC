#  -*- coding: utf-8 -*-
#       @file: le_float.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implemente a função le_float.


def le_float():
    """Lê um valor real da entrada padrão e o retorna."""

    # Escreva o código aqui.


N = input()

for x in xrange(N):
    num = leia_inteiro_positivo()
    print 'Li %.5f' % num
