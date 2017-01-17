#  -*- coding: utf-8 -*-
##   @package: 02-main.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de funções que chamam funções.

import subprocess

if __name__ == '__main__':
	# A função subprocess.call executa um novo processo com
	# o comando dado.
    resultado = subprocess.call('python 01-main.py', shell=True)
    print('Resultado da execução:', resultado)
