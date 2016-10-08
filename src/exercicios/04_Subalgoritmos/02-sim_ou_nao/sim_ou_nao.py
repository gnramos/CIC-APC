#  -*- coding: utf-8 -*-
#       @file: sim_ou_nao.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implemente as funções responda_S_N e positiva.


def responda_S_N(str):
    '''Retorna a resposta do usuário.

    Pede ao usuário que forneça a resposta a pergunta dada. Caso a resposta não
    seja 'S' ou 'N', indica o erro e repete a pergunta até que o usuário
    responda corretamente.
    '''

    # Implemente o código aqui


def positiva(resposta):
    '''Indica se a resposta é positiva ou não.'''

    # Implemente o código aqui


resposta = responda_S_N('Tudo bem?\n')

if positiva(resposta):
    print 'Que bom!'
else:
    if positiva(responda_S_N('Posso ajudar?\n')):
        print 'Chego em 10 minutos.'
    else:
        print 'Espero que melhore!'
