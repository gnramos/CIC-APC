#  -*- coding: utf-8 -*-
#    @package: pdb.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de erro de aritmética. O console Python já apresenta uma mensagem
# identificando o erro e sua localização. O pbd pode ser utilizado para um
# acompanhamento iterativo.


def divisao(x, y):
    return (x / y)


if __name__ == '__main__':
    x = 5
    y = 2
    print('{}/{} = {}'.format(x, y, divisao(x, y)))

    x = 0
    print('{}/{} = {}'.format(x, y, divisao(x, y)))

    x = 5
    y = 0
    print('{}/{} = {}'.format(x, y, divisao(x, y)))
