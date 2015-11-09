#  -*- coding: utf-8 -*-
#       @file: 2-main.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de funções que chamam funções.

import subprocess

if __name__ == "__main__":
    resultado = subprocess.call('python 1-main.py', shell=True)
    print 'Resultado da execução:', resultado
