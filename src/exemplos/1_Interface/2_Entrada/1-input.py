#  -*- coding: utf-8 -*-
#       @file: 1-input.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de uso das funções de entrada de dados.

i = input('Digite um número inteiro: ')

# Esta instrução é composta por diversos componentes:
#
#                            Elemento | Descrição
# ------------------------------------+----------------------------------------
#                                   i | identificador da variável que vai
#                                     | armazenar a informação lida da entrada
# ------------------------------------+----------------------------------------
#                                   = | operador de atribuição, indica que o
#                                     | valor retornado pela função input deve
#                                     | ser armazenado na variável indicada (no
#                                     | caso, i)
# ------------------------------------+----------------------------------------
# input('Digite um número inteiro: ') | função de entrada de dados, que pode
#                                     | ser decomposta em:
#                                     |
#                               input | identificador da função
#                                     |
#                                  () | os parênteses delimitam as informações
#                                     | passadas a função
#                                     |
#        'Digite um número inteiro: ' | a informação a ser escrita na saída
#                                     | padrão

print 'Você digitou', i

# Outro exemplo:
r = input('Digite um número real: ')
print 'Você digitou', r

# A função input processa o dado recebido (esperando que seja um número). Para
# lidar com dados simbólicos, use a função raw_input:

c = raw_input('Digite um caractere: ')
print 'Você digitou', c
