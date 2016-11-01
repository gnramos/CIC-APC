#  -*- coding: utf-8 -*-
##   @package: 10-main.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implementação de um programa que soma inteiros dados como argumentos na linha
# de comando.


import sys


# Assume que todos os argumentos são inteiros.
soma = 0
for i in range(1, len(sys.argv)):
    soma += int(sys.argv[i])

sys.exit(soma)
