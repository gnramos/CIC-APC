#  -*- coding: utf-8 -*-
#       @file: 1-ascii.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Mostra o mapeamento de caracteres ASCII para inteiros.


# Em Python, a codificação determina a representação na memória, mas o valor do
# caractere em ASCII pode ser obtido com a função ord.
for c in 'ABCDEFGHIJKLMNOPQRSTUWXYZ':
    print '%c: %i' % (c, ord(c))

print

for c in 'abcdefghijklmnopqrstwxyz':
    print '%c: %i' % (c, ord(c))
