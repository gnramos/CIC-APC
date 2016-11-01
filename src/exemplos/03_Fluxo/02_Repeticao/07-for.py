#  -*- coding: utf-8 -*-
##   @package: 07-for.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo do laço de repetição FOR.


n = int(input('Bom dia! Digite um número inteiro positivo: '))

soma = 0
for i in range(n + 1):
    soma += i

print('A soma de 0 a %d é: %d.' % (n, soma))

# A função range gera uma lista de n inteiros consecutivos em [0, n). Por
# exemplo, range(4) gera a lista 0, 1, 2, 3.

# Pode-se definir um valor inicial para o intervalo [i, n). Por exemplo,
# range(4, 10) gera a lista 4, 5, 6, 7, 8, 9

soma = 0
for i in range(n // 2, n):
    soma += i

print('A soma de %d a %d é: %d.' % (n // 2, n - 1, soma))


# Pode-se também definir um valor de "passo", a variação entre os número no
# intervalo [i, n). Por exemplo, range(4, 10, 3) aumenta os valores em 3
# unidades a cada iteração, gerando a lista 4, 7.

passo = 2
soma = 0
for i in range(0, n, passo):
    soma += i

print('A soma de 0 a %d, de %d em %d, é: %d.' % (n - 1, passo, passo, soma))
