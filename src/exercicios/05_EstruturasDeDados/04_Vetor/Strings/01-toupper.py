#  -*- coding: utf-8 -*-
#    @package: 01-toupper.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implemente a função toupper.


def toupper(string):
    '''Retorna o string modificado. Todas as letras do alfabeto presentes no
    string dado em sua versão maiúscula, não altera os demais caracteres.
    '''

    # Implemente o código aqui.
    pass


def test(string):
    maiusculas = toupper(string)
    print('{} -> {}'.format(string, maiusculas))


if __name__ == '__main__':
    str0 = 'abc'
    str1 = 'ABC'
    str2 = 'a'
    str3 = 'Hello World!'
    str4 = 'Hello, KiTTy...'

    test(str0)
    test(str1)
    test(str2)
    test(str3)
    test(str4)

# Resultado esperado:
#
# abc -> ABC
# ABC -> ABC
# a -> A
# Hello World! -> HELLO WORLD!
# Hello, KiTTy... -> HELLO, KITTY...
