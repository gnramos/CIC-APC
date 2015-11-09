#  -*- coding: utf-8 -*-
#       @file: 1-while.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplos de laços de repetição com WHILE.


N = 10
i = 0

print 'while(i < %d)' % N
print '\t',
while i < N:
    print i,
    i += 1


# De novo!
print '\nwhile(i > 0)\n\t',
while i > 0:
    print i,
    i -= 1
