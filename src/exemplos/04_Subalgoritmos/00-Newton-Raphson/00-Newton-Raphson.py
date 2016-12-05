#  -*- coding: utf-8 -*-
##   @package: 00-Newton-Raphson.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implementação do método de Newton-Raphson para aproximação de raiz quadrada.


def f(r, n):
    '''Retorna o resultado do polinômio.'''
    # f(r) = r^2 - n
    return (r * r) - n


def fp(r, n):
    '''Retorna o resultado da 1a derivada do polinômio.'''
    # f'(r) = 2*r
    return 2 * r


def valor_inicial(n):
    '''Retorna uma estimativa inicial da raiz.'''
    return n / 2


def aproxima(r, n):
    '''Retorna o valor da aproximação da raiz.'''
    return r - f(r, n) / fp(r, n)


def erro(r, n):
    '''Retorna o erro entre a estimativa atual da raiz e seu valor real.'''
    return abs(r * r - n)
    # Se soubesse o valor real da raiz, não estaria tentando aproximá-lo. Mas é
    # possível quantificar o erro sabendo o valor real da raiz ao quadrado.


def Newton_Raphson(n, iteracoes, precisao):
    '''Retorna estimativa da raiz quadrada de n.

    A quantidade de iterações e a precisão dadas limitam o esforço gasto na
    aproximação.
    '''
    r = valor_inicial(n)

    for i in range(iteracoes):
        r = aproxima(r, n)

        if precisao >= erro(r, n):
            break

    return r

# Testa a função com diversas configurações
for n in [1.0, 2.0, 4.0, 8.0, 16.0, 32.0, 64.0]:
    for iteracoes in [1, 10, 100]:
        for precisao in [1.0, 0.1, 0.01, 0.001, 0.0001, 0.00001]:
            r = Newton_Raphson(n, iteracoes, precisao)
            print('Newton_Raphson(%.0f, %d, %.5f) = %f' % (n, iteracoes, precisao, r))
        print(' ')
