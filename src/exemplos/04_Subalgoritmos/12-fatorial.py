#  -*- coding: utf-8 -*-
#    @package: 12-fatorial.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implementação da função fatorial de forma recursiva.


def fatorial(n):  # <-----------------------------------------------------+---+
    '''Retorna o valor do fatorial de n.'''  #                            |   |
    if n < 1:     # Verifica a condição de parada.                        |   |
        return 1  # Caso base.                                            |   |
    #                                                                     |   |
    # Se não é um resultado conhecido, calcule-o repetindo o processo     |   |
    return n * fatorial(n - 1)  # A função é chamada outra vez aqui, abre |   |
#                               um novo escopo para ----------------------+   |
#                                                                             |
#                                                                             |
n = 5  #                                                                      |
#                                                     A função é chamada a    |
print('fatorial({}) -> {}'.format(n, fatorial(n)))  # primeira vez aqui,      |
#                                                     abre um escopo para ----+

# O fatorial de um número também pode ser facilmente calculado de forma
# iterativa:
#
# def fatorial_i(n):
#     fat = 1
#
#     for x in range(2, n = 1):
#         fat = fat * x
#
#     return fat
#
# Analisando o problema com calma, fica evidente a natureza recursiva dele e,
# portanto, que a solução mais "adequada" seria a função recursiva:
#
# def fatorial_r(n):
#     if (n < 1):
#         return 1
#
#     return n * fatorial_r(n - 1)
