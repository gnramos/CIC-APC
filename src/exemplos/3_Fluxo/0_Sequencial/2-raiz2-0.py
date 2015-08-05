#  -*- coding: utf-8 -*-
#       @file: 2-raiz2-0.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implementação de código para aproximar o valor da raiz quadrada de um número
# inteiro.


n = input('Qual o valor de n? ')

# 1a tentativa
r = input('Qual sua estimativa inicial para a raiz de ' + str(n) + '? ')
print r, '*', r, '=', r*r

# 2a tentativa
r = (r+(n/r))/2  # Algo estranho com esta instrução...
print r, '*', r, '=', r*r

# 3a tentativa
r = (r+(n/r))/2
print r, '*', r, '=', r*r

print 'Depois de 3 tentativas, a aproximação da raiz de', n, 'é', r, '.'
