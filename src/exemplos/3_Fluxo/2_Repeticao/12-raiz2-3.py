#  -*- coding: utf-8 -*-
#       @file: 12-raiz2-3.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implementação de código para aproximar o valor da raiz quadrada de um número
# real não negativo, com aproximação pelo método babilônico.


n = input('Qual o valor de n? ')

if n < 0:
    print 'Não sei calcular a raiz quadrada de número negativo.'
else:
    r = 0
    tentativas = 0
    while abs(r * r - n) > r:
        r = (r + (n / r)) / 2
        tentativas += 1

    print 'Depois de %d tentativas, a aproximação da raiz de %d é %d.' % (tentativas, n, r)
