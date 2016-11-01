#  -*- coding: utf-8 -*-
##   @package: 05-do-while.py
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
i = 0
soma = 0

while True:
    soma += i
    i += 1  # Atualização da condição de parada.

    if i > N:
        break

print('Soma de 0 a %d = %d.' % (N, soma))
print('i =', i)

while True:
    soma += i
    i += 1  # Atualização da condição de parada.
    print('Teste da condição ao final, executa os comandos pelo menos uma vez.')

    if i > N:
        break

print('Agora i = %d e soma = %d.' % (i, soma))
