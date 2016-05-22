#  -*- coding: utf-8 -*-
#       @file: 11-main.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de manipulação do valor de retorno de programas.

import subprocess

print subprocess.call('python 10-main.py 1 2 3', shell=True)
