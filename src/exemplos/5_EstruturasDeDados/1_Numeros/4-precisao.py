#  -*- coding: utf-8 -*-
#       @file: 4-precisao_float.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implementação de código para exemplificar o acúmulo do erro de precisão com
# ponto flutuante após diversas iterações.


def erro(a, b):
    """Retorna o erro percentual entre a e b."""
    return abs(a-b)/a*100

escala = 1.0
soma = 0.0

for x in xrange(10):
    soma += 0.1

print 'soma %c= 1\n' % ('=' if soma == 1 else '!')

# O erro pode ser acumulado com o uso...
soma = 0.0
for x in xrange(1, 1000000001):
    # diferente de soma += 1
    for y in xrange(10):
        soma += 0.1

    if x%escala == 0:
        print '%10d) soma == %16f (erro = %lf%%)' % (x, soma, erro(soma, x))
        escala *= 10
