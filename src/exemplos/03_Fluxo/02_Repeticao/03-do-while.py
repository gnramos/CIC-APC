#  -*- coding: utf-8 -*-
#    @package: 03-do-while.py
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

while True:
    print('1: Água (vitamina de frutas e iogurte)')
    print('2: Terra (suco de mamão, frutas frescas)')
    print('3: Fogo (café preto, ovos & bacon)')
    print('4: Ar (café preto)')
    print('5: Coração! (todas as anteriores)')
    resposta = int(input())  # Atualização da condição de parada.

    if 1 <= resposta <= 5:
        break  # Termina o laço.
