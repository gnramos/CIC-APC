#  -*- coding: utf-8 -*-
##   @package: 02-input.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de uso das funções de entrada de dados.


# Na verdade mesmo, Python 3 lê somente uma sequência de caracteres, para lidar
# com valores numéricos a abordagem é indireta: é preciso 'forçar' o tipo
# desejado.

entrada = input('Digite um número inteiro: ')
print('A variável \'entrada\' é do tipo:', type(entrada))
print('entrada = \'%s\'' % entrada)

i = int(entrada)  # transforma o dado 'entrada' em tipo inteiro
print('A variável \'i\' é do tipo:', type(i))
print('i = %d' % i)
print('i + 2 = %d' % (i + 2))

# Outro exemplo:
entrada = input('Digite um número real: ')
r = float(entrada)  # transforma a informação em tipo real
print('A variável \'r\' é do tipo:', type(r))
print('r = %f' % r)
print('r + 0.25 = %f' % (r + 0.25))
