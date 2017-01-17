#  -*- coding: utf-8 -*-
#       @file: le_float.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implemente a função le_float.


def le_float():
    '''Lê um valor real da entrada padrão e o retorna.'''

    # Escreva o código aqui.


N = 10

for x in range(N):
    num = le_float()
    print('Li {:.5f}'.format(num))
