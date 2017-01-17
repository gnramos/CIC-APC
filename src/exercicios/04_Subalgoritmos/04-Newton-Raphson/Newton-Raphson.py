#  -*- coding: utf-8 -*-
#       @file: newton.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implemente as funções valor_inicial, erro, f, e fp para aproximar a raiz
# cúbica com o método de Newton-Raphson.


def f(r, n):
    '''Retorna o resultado do polinômio.'''

    # f(r) = r^3 - n

    # Implemente o código aqui.


def fp(r, n):
    '''Retorna o resultado da 1a derivada do polinômio.'''
    # f'(r) = 3r^2

    # Implemente o código aqui.


def valor_inicial(n):
    '''Retorna uma estimativa inicial da raiz.'''

    return n/2.0


def aproxima(r, n):
    '''Retorna o valor da aproximação da raiz.'''

    # Implemente o código aqui.


def erro(r, n):
    '''Retorna o erro entre a estimativa atual da raiz e seu valor real.'''

    # Se soubesse o valor real da raiz, não estaria tentando aproximá-lo. Mas é
    # possível quantificar o erro sabendo o valor real da raiz ao cubo.

    # Implemente o código aqui.


def Newton_Raphson(n, iteracoes, precisao):
    '''Retorna uma aproximação do valor da raiz quadrada de n.

    A quantidade de iterações e a precisão dadas limitam o esforço gasto na
    aproximação.'''

    r = valor_inicial(n)

    for x in xrange(iteracoes):
        r = aproxima(r, n)

        if(precisao >= erro(r, n)):
            break

    return r


# Implemente a função principal aqui.