#  -*- coding: utf-8 -*-
#    @package: 00-ascii.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Mostra o mapeamento de inteiros para caracteres ASCII.


# Em Python, a codificação determina a representação na memória, mas o símbolo
# do caractere em ASCII pode ser obtido com a função chr.

for i in range(65, 65 + 26):
    print('%c: %i' % (chr(i), i))

print()

for i in range(97, 97 + 26):
    print('%c: %i' % (chr(i), i))
