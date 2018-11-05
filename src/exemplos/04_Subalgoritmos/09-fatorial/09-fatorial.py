#  -*- coding: utf-8 -*-
#    @package: 09-fatorial.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implementação da função fatorial de forma recursiva.


def fatorial(n):  # <---------------------------------------------------+-----+
    '''Retorna o valor do fatorial de n.'''  #                          |     |
    if n < 1:     # Verifica a condição de parada.                      |     |
        return 1  # Caso base.                                          |     |
    #                                                                   |     |
    # Se não é um resultado conhecido, calcule-o repetindo o processo   |     |
    return n*fatorial(n-1)  # A função é chamada outra vez aqui, abre   |     |
#                             um novo escopo para ----------------------+     |
#                                                                             |
#                                                                             |
n = 5  #                                                                      |
#                                                      A função é chamada a   |
print('fatorial(%d) -> %d ='.format(n, fatorial(n))  # primeira vez aqui,     |
#                                                      abre um escopo para ---+