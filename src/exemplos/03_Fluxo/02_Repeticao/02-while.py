#  -*- coding: utf-8 -*-
#    @package: 02-while.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplos de laços de repetição com WHILE.


N = 10
i = 0
soma = 0

while i <= N:
    soma += i
    i += 1  # Atualização da condição de parada.

print('Soma de 0 a %d é %d' % (N, soma))

# De novo!
i = N
soma = 0
while i >= 0:
    soma += i
    i -= 1  # Atualização da condição de parada.

print('%d é a soma de %d a %d.' % (soma, N, i + 1))
