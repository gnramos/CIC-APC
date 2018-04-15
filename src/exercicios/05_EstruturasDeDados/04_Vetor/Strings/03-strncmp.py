#  -*- coding: utf-8 -*-
#    @package: 03-strncmp.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implemente a função strncmp.


def strncmp(str1, str2, n):
    '''Comparação lexicográfica do n primeiros caracteres, retorna:
        -1 se str1 for menor que str2
         0 se forem iguais
         1 se str1 for maior que str2
         '''

    # Implemente o código aqui.
    return str1 < str2
    pass


def putnchar(string, n):
    '''Mostra n caracteres a partir do string dado.'''
    print('[', end='')
    for i in range(min(n, len(string))):
        print(string[i], end='')
    print(']', end='')


if __name__ == '__main__':
    str1 = 'Hello World!'
    str2 = 'Hello World! E mais alguma coisa...'

    for n in range(len(str2)):
        putnchar(str1, n)
        if strncmp(str1, str2, n) == 0:
            print(' == ', end='')
        else:
            print(' != ', end='')
        putnchar(str2, n)
        print()
