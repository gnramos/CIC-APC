#  -*- coding: utf-8 -*-
#    @package: 03-leia_no_intervalo.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de implementação de uma função.


#        +--------------------------------------------------------------------+
#        |                                                                    |
#        V                                                                    |
def leia_real():                                                            # |
    num = float(input('Digite o número: '))                                 # |
                                                                            # |
    return num                                                              # |
                                                                            # |
                                                                            # |
# Uma vez que a função foi definida, pode-se utilizá-la como desejado.        |
#                                                                             |
#         +-- Identificador da função.                                        |
#         |                                                                   |
#         |           +-- Valores mínimo e máximo do intervalo aceitável.     |
#         |           |                                                       |
#         V           V                                                       |
def leia_no_intervalo(min, max):  #                                           |
    num = min - 1                                                           # |
    while (min > num or num > max):                                         # |
        print('Digite um número entre {} e {}.'.format(min, max))           # |
        num = leia_real()  # -------------------------------------------------+

    # Instrução explicitando o valor a ser retornado.
    return num     # O valor armazenado define o tipo do dado retornado.


for x in range(1, 6):
    numero = leia_no_intervalo(x, 5)
    print('{}) Li o número: {}\n'.format(x, numero))
