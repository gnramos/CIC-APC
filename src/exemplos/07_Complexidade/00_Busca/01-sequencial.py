#  -*- coding: utf-8 -*-
##   @package: 01-sequencial.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplos de busca sequencial em vetor.


import apc_busca as apc


lista = [1, 2, 2, 3, 5, 7, 8, 9, 9, 10]


print(('lista: {}'.format(lista)))

apc.testa_busca(-1, lista, apc.busca_sequencial_ord)
apc.testa_busca(0, lista, apc.busca_sequencial_ord)
apc.testa_busca(1, lista, apc.busca_sequencial_ord)
apc.testa_busca(2, lista, apc.busca_sequencial_ord)
apc.testa_busca(5, lista, apc.busca_sequencial_ord)
apc.testa_busca(9, lista, apc.busca_sequencial_ord)
apc.testa_busca(10, lista, apc.busca_sequencial_ord)
apc.testa_busca(11, lista, apc.busca_sequencial_ord)

print(('\nComparações acumuladas: {}\n'.format(apc.COMPARACOES_NA_BUSCA)))
