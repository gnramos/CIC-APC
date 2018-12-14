#  -*- coding: utf-8 -*-
#    @package: 02-min.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de implementação de uma função.


#       +-- Identificador da função.
#       |
#       |  +-- Argumentos. Valores a serem comparados. <----------------------+
#       |  |                                                                  |
#       V  V                                                                  |
def min(x, y):                                                              # |
    # Uma função é um (sub)algoritmo completo, portanto segue as mesmas       |
    # diretrizes de composição.                                               |
                                                                            # |
    if x < y:                                                               # |
        return x  # --+                                                       |
    else:         #   +--> O valor armazenado define o tipo do dado retornado.|
        return y  # --+                                                       |
                                                                            # |
# O valor armazenado aqui define o tipo do dado retornado.                    |
                                                                            # |
#                                                                             |
#                               +-----------------+         Os valores que    |
#                               |                 |         são fornecidos    |
#                               |  +--------------+--+      para a função ----+
for a in range(5, 0, -1):  # ---+  |              |  |      são definidos
    for b in range(6):  # ---------+              V  V      aqui.
        print('min({}, {}) = {}'.format(a, b, min(a, b)))  #     ^
                                                # |  |           |
                                                # |  +-----------+
                                                # +--------------+
