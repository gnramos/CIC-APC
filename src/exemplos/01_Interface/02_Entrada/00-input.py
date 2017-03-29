#  -*- coding: utf-8 -*-
#    @package: 00-input.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de uso das funções de entrada de dados.


c = input('Digite um caractere: ')

# Esta instrução é composta por diversos componentes:
#
#                       Elemento | Descrição
# -------------------------------+---------------------------------------------
#                              c | identificador da variável que vai armazenar
#                                | a informação lida da entrada
# -------------------------------+---------------------------------------------
#                              = | operador de atribuição, indica que o valor
#                                | retornado pela função input deve ser
#                                | armazenado na variável indicada (no caso, c)
# -------------------------------+---------------------------------------------
# input('Digite um caractere: ') | função de entrada de dados, que pode ser
#                                | decomposta em:
#                                |
#                          input | identificador da função
#                                |
#                             () | os parênteses delimitam as informações
#                                | passadas a função
#                                |
#        'Digite um caractere: ' | a informação a ser escrita na saída
#                                | padrão

print('Você digitou %c.' % c)

c = input('Digite outro caractere: ')
print('Agora você digitou %c.' % c)
