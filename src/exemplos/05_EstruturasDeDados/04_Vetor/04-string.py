#  -*- coding: utf-8 -*-
##   @package: 04-string.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de uso de lista de caracteres. A memória e as posições são
# gerenciadas automaticamente.


from apc_vetor import mostra_indices
from apc_vetor import mostra_n_chars


# string = 'abcdefghijklmnopqrstwxyzabcdefghijklmnopqrstwxyz'
string = input('Digite o string: ')

mostra_indices(len(string))
mostra_n_chars(string, len(string))
# mostra_n_chars(string, 50)  # Python não deixa você acessar memória além do
                              # tamanho do string