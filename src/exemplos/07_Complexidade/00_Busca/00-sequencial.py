#  -*- coding: utf-8 -*-
##    @package 0-sequencial.py
#      @author Guilherme N. Ramos (gnramos@unb.br)
#  @disciplina Algoritmos e Programação de Computadores
#
# Exemplos de busca sequencial em vetor.


import apc_busca as apc


lista = [1, 2, 1, 4, 8, 7, 6, 5, 10, 9]

print('lista: {}'.format(lista))

apc.testa_busca(-1, lista, apc.busca_sequencial)
apc.testa_busca(0, lista, apc.busca_sequencial)
apc.testa_busca(1, lista, apc.busca_sequencial)
apc.testa_busca(2, lista, apc.busca_sequencial)
apc.testa_busca(5, lista, apc.busca_sequencial)
apc.testa_busca(9, lista, apc.busca_sequencial)
apc.testa_busca(10, lista, apc.busca_sequencial)
apc.testa_busca(11, lista, apc.busca_sequencial)

print('\nComparações acumuladas: {}\n'.format(apc.COMPARACOES_NA_BUSCA))
