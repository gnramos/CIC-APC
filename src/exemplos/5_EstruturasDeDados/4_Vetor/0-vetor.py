#  -*- coding: utf-8 -*-
#       @file: 0-vetor.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo uso de vetor. Em Python, vetores são implementados como listas.

vetor = [0]*10

for i in range(10):
    vetor[i] = input("Digite o " + str(i) + "-ésimo elemento:")

print "\nOs elementos são:"
print "{%s}" % ' '.join(str(v) for v in vetor)

print "\nE a soma deles é:", sum(vetor)

# soma = 0
# for i in xrange(len(vetor)):
#     soma += vetor[i]
#
# ou então
#
# for valor in vetor:
#     soma += valor
