#  -*- coding: utf-8 -*-
##   @package: 05-escopo.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de escopos de funções.


def limita(x, inf, sup):
    '''Limita o valor de x ao intervalo entre inf e sup.
    Supõe que inf <= sup.
    '''

    def maior(x, y):
        '''Retorna o maior valor entre x e y.'''
        return x if x > y else y

    def menor(x, y):
        '''Retorna o menor valor entre x e y.'''
        return x if x < y else y

    return maior(inf, menor(x, sup))


for inf in range(-1, 3):
    for sup in range(5, inf - 1, -1):
        for x in range(inf - 2, sup + 3):
            print('limita(%2d, %2d, %2d) = %2d' % (x, inf, sup, limita(x, inf, sup)))

            # Fora do escopo!
            # print('maior(%d, %d) = %d' % (x, inf, maior(x, inf)))
            # print('menor(%d, %d) = %d' % (x, inf, menor(x, sup)))
