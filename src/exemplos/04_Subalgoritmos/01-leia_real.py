#  -*- coding: utf-8 -*-
#    @package: 01-leia_real.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de implementação de uma função.


#       +-- Identificador da função. "leia_real" é uma descrição adequada
#       |   do comportamento definido.
#       |
#       |     +-- Argumentos. Neste caso, nenhum é fornecido.
#       |     |
#       V     V
def leia_real():
    # Uma função é um (sub)algoritmo completo, portanto segue as mesmas
    # diretrizes de composição.

    # Declaração de variáveis.
    num = float(input('Digite o número: '))

    # Instrução explicitando o valor a ser retornado.
    return num
    #       |
    #       +--------> O valor armazenado aqui define o tipo do dado retornado.

# Uma vez que a função foi definida, pode-se utilizá-la como desejado.

for i in range(1, 6):
    numero = leia_real()
    print('{}) Li o número: {}'.format(i, numero))
