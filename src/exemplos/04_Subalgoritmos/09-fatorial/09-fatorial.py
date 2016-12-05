#  -*- coding: utf-8 -*-
##   @package: 09-fatorial.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implementação da função fatorial de forma iterativa e recursiva. */


def fatorial_i(n):
    '''Retorna o valor do fatorial de n.'''

    fat = 1
    while n > 1:
        fat = n * fat
        n -= 1
    return fat


def fatorial_r(n):
    '''Retorna o valor do fatorial de n.'''

    if n < 2:
        return 1

    return n * fatorial_r(n - 1)


for n in range(15):
    print('fatorial_r(%d) -> %d =' % (n, fatorial_r(n)), end=' ')
    print('%d <- fatorial_i(%d)' % (fatorial_i(n), n))
    # Por que não há problema se n >= 14 ?
