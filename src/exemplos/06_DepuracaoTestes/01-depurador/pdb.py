#  -*- coding: utf-8 -*-
#    @package: pdb.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de falha de segmentação. O console Python já apresenta uma mensagem
# identificando o erro e sua localização. O pbd pode ser utilizado para um
# acompanhamento iterativo.


if __name__ == '__main__':
    # O erro é claro: ler de um endereço de memória não identificado.
    print('ptr = d', ptr)
