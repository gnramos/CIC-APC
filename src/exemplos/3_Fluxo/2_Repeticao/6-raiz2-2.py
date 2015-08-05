#  -*- coding: utf-8 -*-
#       @file: 6-raiz2-2.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implementação de código para aproximar o valor da raiz
# quadrada de um número inteiro não negativo, com um laço
# de repetição. */


n = input('Qual o valor de n? ')

if n < 2:
    if n < 0:
        print 'Não sei calcular a raiz quadrada de número negativo.'
    else:
        print 'A raiz quadrada de %d é %d.' % (n, n)
else:
    r = input('Qual sua estimativa inicial para a raiz de ' + str(n) + '? ')
    iteracoes = input('Quantas iterações? ')

    if r <= 0 or iteracoes < 0:
        print 'Raiz e/ou quantidade de iterações inválida(s).'
    else:
        i = 0
        while i < iteracoes:
            r = (r+(n/r))/2
            i += 1

        print 'Depois de %d tentativas, a aproximação da raiz de %d é %d.\n' % (iteracoes, n, r)
