#  -*- coding: utf-8 -*-
#    @package: 00-strlen.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implemente a função strlen.


def strlen(string):
    '''Retorna a quantidade de caracteres da string.'''

    # Implemente o código aqui.
    pass


if __name__ == '__main__':
    str0 = None
    str1 = 'a'
    str2 = 'Hello World!'
    str3 = 'Olha a pamonha.'
    str4 = 'Um, dois, feijão com arroz...'

    print('strlen(\'{}\') = {}'.format(str0, strlen(str0)))
    print('strlen(\'{}\') = {}'.format(str1, strlen(str1)))
    print('strlen(\'{}\') = {}'.format(str2, strlen(str2)))
    print('strlen(\'{}\') = {}'.format(str3, strlen(str3)))
    print('strlen(\'{}\') = {}'.format(str4, strlen(str4)))

# Resultado esperado:
#
# strlen('(None)') = 0
# strlen('a') = 1
# strlen('Hello World!') = 12
# strlen('Olha a pamonha.') = 15
# strlen('Um, dois, feijão com arroz...') = 30
