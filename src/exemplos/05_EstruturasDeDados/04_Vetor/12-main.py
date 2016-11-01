#  -*- coding: utf-8 -*-
##   @package: 12-main.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de má utilização de ponteiros.


import sys


# A ideia é cumprimentar o usuário...
print('Boa tarde, %s.' % sys.argv[1])


# É perigoso acessar memória além da planejada... Por isso Python não deixa o
# usuário acessar índices incorretos.
# print 'Boa tarde, %s.' % sys.argv[2]
# print 'Boa tarde, %s.' % sys.argv[3]
# print 'Boa tarde, %s.' % sys.argv[5]
# print 'Boa tarde, %s.' % sys.argv[50]
# print 'Boa tarde, %s.' % sys.argv[5000]
