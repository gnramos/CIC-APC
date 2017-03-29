#  -*- coding: utf-8 -*-
#    @package: 00-vetor.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo uso de vetor. Em Python, vetores são implementados como listas.

vetor = [0] * 10

for i in range(10):
    vetor[i] = int(input('Digite o ' + str(i) + '-ésimo elemento:'))

print('\nOs elementos são:')
print('{', end=' ')
for i in range(len(vetor)):
    print(vetor[i], end=' ')
print('}')

soma = 0
for valor in vetor:  # É possível acessar cada valor 'diretamente'
    soma += valor

print('\nE a soma deles é:', soma)
