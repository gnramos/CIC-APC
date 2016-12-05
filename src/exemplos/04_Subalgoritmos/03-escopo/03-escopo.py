#  -*- coding: utf-8 -*-
##   @package: 03-escopo.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de escopos de variáveis locais.


def troca(x, y):
    '''Troca os valores de x e y no escopo local.'''
    x, y = y, x
    print('troca: (x,y) = (%d,%d)' % (x, y))


x = 1
y = 2

print('(x,y) = (%d,%d)' % (x, y))
print('Trocando...', end=' ')
troca(x, y)
print('Trocou!')
print('(x,y) = (%d,%d)' % (x, y))
