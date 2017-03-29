#  -*- coding: utf-8 -*-
#    @package: 03-binaria.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
#
# Exemplos de busca binária (recursiva) em vetor.


import apc_busca as apc


lista = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

print(('lista: {}'.format(lista)))

apc.testa_busca(-1, lista, apc.busca_binaria_r)
apc.testa_busca(0, lista, apc.busca_binaria_r)
apc.testa_busca(1, lista, apc.busca_binaria_r)
apc.testa_busca(2, lista, apc.busca_binaria_r)
apc.testa_busca(5, lista, apc.busca_binaria_r)
apc.testa_busca(9, lista, apc.busca_binaria_r)
apc.testa_busca(10, lista, apc.busca_binaria_r)
apc.testa_busca(11, lista, apc.busca_binaria_r)

print(('\nComparações acumuladas: {}\n'.format(apc.COMPARACOES_NA_BUSCA)))
