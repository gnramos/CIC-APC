#  -*- coding: utf-8 -*-
#       @file: int_positivo.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implemente a função leia_inteiro_positivo.


def leia_inteiro():
    '''Retorna um valor inteiro lido da entrada padrão.'''

    return int(input('Digite o número inteiro: '))


def leia_inteiro_positivo():
    '''Retorna um valor inteiro positivo lido da entrada padrão.

    Lê valor(es) da entrada padrão até receber um valor inteiro positivo, que é
    retornado.
    '''

    # Use a função leia_inteiro()


N = input()

for x in xrange(N):
    num = leia_inteiro_positivo()
    print 'Li', num