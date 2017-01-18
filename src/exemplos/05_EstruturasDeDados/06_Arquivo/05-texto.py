#  -*- coding: utf-8 -*-
#    @package: 05-texto.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de uso de arquivo texto.


if __name__ == '__main__':
    arquivo = 'apc.python.txt'

    try:
        with open(arquivo, 'w') as f:
            f.write('disse o corvo, \'Nunca mais\'.\n')
            f.seek(0)  # Não existe a função 'rewind', mas este é um
                       # comportamento equivalente
            f.write('D')
    except:
        print('Erro!')
