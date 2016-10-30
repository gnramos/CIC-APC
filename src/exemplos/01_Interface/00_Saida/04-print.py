#  -*- coding: utf-8 -*-
#       @file:4-print.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de uso da função de saída de dados.


# Ponto de entrada do programa (1a instrução)

print '2 + 2 = %d' % 5

# Esta instrução é composta por diversos componentes:
#
#         Elemento | Descrição
# -----------------+---------------------------------------------------------
#            print | função que envia o comando 'escreva na saída padrão'
# -----------------+---------------------------------------------------------
# '2 + 2 = %d' % 5 | a informação a ser escrita na saída padrão, que pode ser
#                  | ser decomposta em:
#                  |
#               '' | as aspas delimitam o texto a ser escrito
#                  |
#         2 + 2 =  | conteúdo do texto
#                  |
#               %d | marca a posição no texto onde se deseja incluir outra
#                  | informação. Neste caso específico, um valor decimal
# -----------------+---------------------------------------------------------
#                % | separa os argumentos da função (o texto a ser escrito do
#                  | valor a ser escrito nele)
# -----------------+---------------------------------------------------------
#                5 | o valor a ser escrito no lugar de %d


# Outros exemplos:
print '2 + %d = 5' % 2
#           |        ^
#           |        |
#           +--------+

# Também funciona com múltiplos valores (atenção aos parênteses)

#                +--------+
#                |        |
#                |        v
print '2 + %d = %d' % (2, 5)
#           |          ^
#           |          |
#           +----------+

# E diferentes tipos

print 'Agora, uma letra: %c' % 'a'
#                         |     ^
#                         |     |
#                         +-----+

#                             +------------+
#                             |            |
#                             |            v
print 'Agora, duas letras: %c %c' % ('s', 'b')
#                          |          ^
#                          |          |
#                          +----------+

#                          +---------+
#                          |         |
#                          |         v
print 'E %d de cada tipo: %c' % (1, 'c')
#         |                      ^
#         |                      |
#         +----------------------+

#                                                   +------------------+
#                                                   |                  |
#                                                +--+-------------+    |
#                                                |  |             |    |
#                                                |  |             v    v
print 'Ou %d de cada tipo:\n\tQuer %d café(s)? (%c/%c)' % (2, 1, 'S', 'N')
#          |                        |                      ^  ^
#          |                        |                      |  |
#          +------------------------+----------------------+  |
#                                   |                         |
#                                   +-------------------------+
