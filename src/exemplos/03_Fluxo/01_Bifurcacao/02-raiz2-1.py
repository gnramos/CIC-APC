#  -*- coding: utf-8 -*-
#       @file: 2-raiz2-1.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implementação de código para aproximar o valor da raiz quadrada de um número
# inteiro não negativo.


n = input('Qual o valor de n? ')

if n < 0:
    print 'Não sei calcular a raiz quadrada de número negativo.'
else:
    r = input('Qual sua estimativa inicial para a raiz de ' + str(n) + '? ')

    if r <= 0:
        print 'A raiz não pode ser menor que zero.'
    else:
        r = (r+(n/r))/2
        r = (r+(n/r))/2

        print 'A aproximação da raiz de %d é %d.' % (n, r)
