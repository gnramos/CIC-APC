#  -*- coding: utf-8 -*-
#    @package: 04-bhaskara.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de implementação de funções.


def leia_real():
    '''Lê um valor real.'''
    return float(input('Digite o número: '))


def absoluto(n):
    '''Retorna o valor absoluto do número dado.'''
    if n < 0:
        return -n
    return n


def raiz(n):
    '''Calcula a raiz quadrada do número (pelo método Babilônico).'''
    r = n / 2.0

    while (absoluto(r*r - n) > r):
        r = (r+(n/r))/2

    return r


def delta(a, b, c):
    '''Calcula o Delta.'''
    return (b*b) - (4*a*c)


a = leia_real()
b = leia_real()
c = leia_real()

r1 = (-b + raiz(delta(a, b, c))) / 2
r2 = (-b - raiz(delta(a, b, c))) / 2

print('As raízes são: {} e {}'.format(r1, r2))
