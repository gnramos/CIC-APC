#  -*- coding: utf-8 -*-
#       @file: 0-while.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo do laço de repetição WHILE. */


PICANHA = 'free(B01)'


def sirva(opcao):
    """Mostra o que está sendo servido."""
    print 'Servindo %s.' % opcao

resposta = 'n'

print 'Bem-vindo ao rodízio!'

while resposta == 'n' or resposta == 'N':
    sirva(PICANHA)

    resposta = raw_input('Satisfeito? ')
