#  -*- coding: utf-8 -*-
#       @file: 0-ascii.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Mostra o mapeamento de inteiros para caracteres ASCII.


# Em Python, a codificação determina a representação na memória, mas o símbolo
# do caractere em ASCII pode ser obtido com a função chr.

for i in xrange(65, 65+26):
    print '%c: %i' % (chr(i), i)

print

for i in xrange(97, 97+26):
    print '%c: %i' % (chr(i), i)
