#  -*- coding: utf-8 -*-
#    @package: 03-iniciante.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de erro simples para depuração.


# Especificação de algum comportamento que lida com
# argumentos da linha de comando (ex: o comando gcc).
#
# Exemplo de uso para depuração:
#
# python 03-iniciante.py -o meu_executavel -f123 -t500 01-iniciante.py
#
# O resultado esperado é:
#
# executavel [meu_executavel]
#     inicio [123]
#        fim [500]


import sys


if __name__ == '__main__':
    inicio = fim = executavel = None

    # Avaliação das opções dadas na linha de comando.
    for i in range(1, len(sys.argv)):
        if sys.argv[i][0] != '-':       #  opções terminadas
            continue
        if sys.argv[i][1] == 'o':       #  nome do executável
            executavel = sys.argv[i]
        elif sys.argv[i][1] == 'f':       #  valor inicial
            inicio = int(sys.argv[i])
        elif sys.argv[i][1] == 't':       #  valor final
            fim = int(sys.argv[i])
                                                  # Resultado esperado:
    print('executavel [{}].'.format(executavel))  # executavel [meu_executavel]
    print('    inicio [{}].'.format(inicio))      #     inicio [123]
    print('       fim [{}].'.format(fim))         #        fim [500]
