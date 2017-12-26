#  -*- coding: utf-8 -*-
#    @package: 03-precisao.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implementação de código para exemplificar o erro de precisão com ponto
# flutuante.
#
# Exemplo do livro A Whirlwind Tour of Python, de Jake VanderPlas
# http://www.oreilly.com/programming/free/files/a-whirlwind-tour-of-python.pdf

if 0.1 + 0.2 == 0.3:
    print('0.1 + 0.2 == 0.3')
else:
    print('0.1 + 0.2 != 0.3')

print('\n0.1 = {0:.17f}'.format(0.1))
print('0.2 = {0:.17f}'.format(0.2))
print('0.3 = {0:.17f}'.format(0.3))
