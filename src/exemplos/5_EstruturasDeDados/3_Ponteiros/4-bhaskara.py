#  -*- coding: utf-8 -*-
#       @file: 4-bhaskara.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de comunicação de dados entre blocos do código.


def bhaskara(a, b, c):
    """Calcula as raízes do polinômio de coeficientes a, b, c com a fórmula da Bhaskara.

    Retorna uma tripla (raizes_reais, r1, r2), em que raizes_reais é um
    booleano indicando se as raízes são reais, r1 e r2 são os valores das
    raízes, caso sejam reais, 0 caso contrário.
    """

    delta = b**2 - 4*a*c
    raizes_reais = (delta >= 0)

    r1 = (-b + (delta**0.5))/2 if raizes_reais else 0.0
    r2 = (-b - (delta**0.5))/2 if raizes_reais else 0.0

    return (raizes_reais, r1, r2)

def testa_bhaskara(a, b, c):
    """Testa a fórmula de Bhaskara com os coeficientes dados."""

    print '%+.0lfx^2 %+.0lfx %+.0lf = 0' % (a, b, c)

    (raizes_reais, r1, r2) = bhaskara(a, b, c)

    if raizes_reais:
        print '\tr1 = %lf\n\tr2 = %lf\n' % (r1, r2)
    else:
        print '\tRaizes complexas.\n'

testa_bhaskara(1.0, -1.0, -2.0)
testa_bhaskara(1.0, -4.0, 5.0)
testa_bhaskara(2.0, 0.0, -1.0)
