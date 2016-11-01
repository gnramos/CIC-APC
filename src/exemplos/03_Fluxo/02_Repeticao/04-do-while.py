#  -*- coding: utf-8 -*-
##   @package: 04-do-while.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Em Python, não há o laço de repetição DO-WHILE. Mas o
# comportamento pode ser replicado da seguinte forma:
#
# while True:
#     # iteração
#
#     if criterio_de_parada:
#         break


N = 10

print('do-while(i < %d)' % N)
print('\t', end=' ')
i = 0  # Inicialização do critério de parada.
while True:
    print(i, end=' ')
    i += 1  # Atualização da condição de parada.

    if i >= N:
        break

print()
