#  -*- coding: utf-8 -*-
#       @file: 4-modulo.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplos de utilização do operador de módulo.


print 'Módulo:'

# O operador % calcula o resto da divisão inteira de dois números inteiros.
print '      0 % 5 =', 0 % 5
print '      1 % 5 =', 1 % 5
print '      2 % 5 =', 2 % 5
print '      3 % 5 =', 3 % 5
print '      4 % 5 =', 4 % 5
print '      5 % 5 =', 5 % 5
print '      6 % 5 =', 6 % 5
print '      7 % 5 =', 7 % 5
print '      8 % 5 =', 8 % 5
print '      9 % 5 =', 9 % 5
print '     10 % 5 =', 10 % 5

print '\nDivisão por 0 não é uma operação válida...'
# print '      2 %% 0   =', 2 % 0

# É simples, todo número inteiro n pode ser escrito como a*x + b, onde
#      a   é o resultado da divisão inteira n / x
#      b   é o resto desta divisão.
#
# Por exemplo:
#    9/5   é 1
#    9%5   é 4    -> 9 = 1*5 + 4
