#  -*- coding: utf-8 -*-
#    @package: subalgoritmos.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de uso do módulo com funcionalidades.


import apc  # Inclui o módulo

print('Agora é a hora:', apc.mostra_agora())  # Função do módulo

for x in range(5):
    print('  Um número qualquer:', apc.qualquer())      # Função do módulo
    print('  Outro em [0,100):  ', apc.aleatorio(100))  # Função do módulo
    print('  E mais um em [0,5):', apc.aleatorio(5))
