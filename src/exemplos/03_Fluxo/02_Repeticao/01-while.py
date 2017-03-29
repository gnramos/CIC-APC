#  -*- coding: utf-8 -*-
#    @package: 01-while.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplos de laços de repetição com WHILE.


N = 10
i = 0

print('while(i < %d)' % N)
print('\t', end=' ')
while i < N:
    print(i, end=' ')
    i += 1


# De novo!
print('\nwhile(i > 0)\n\t', end=' ')
while i > 0:
    print(i, end=' ')
    i -= 1
print()
