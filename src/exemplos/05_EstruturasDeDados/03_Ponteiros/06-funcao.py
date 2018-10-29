#  -*- coding: utf-8 -*-
#    @package: 06-funcao.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de uso de ponteiro para função.


def chama(func, a, b):
    '''Chama a função dada usando os parâmetros dados (a,b)
    como argumentos.'''
    return func(a, b)


a, b = 1, 2

# As funções max e min já são definidas em Python
print('chama(max, %d, %d) = %d' % (a, b, chama(max, a, b)))
print('chama(min, %d, %d) = %d' % (a, b, chama(min, a, b)))

a = 7
print('chama(max, %d, %d) = %d' % (a, b, chama(max, b, a)))
print('chama(min, %d, %d) = %d' % (a, b, chama(min, b, a)))
