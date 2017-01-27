#  -*- coding: utf-8 -*-
#    @package: 02-iniciante.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de erro simples para depuração.


a = int(input('Digite um número inteiro: '))
b = int(input('Digite outro número inteiro: '))

# Queremos números diferentes.

if a != b:
    print('São diferentes, tudo bem.')
else:
    print('São iguais, consertando...')
b += 1

# Realizar tarefas com valores diferentes. Mas... a lógica
# está correta para todas as possibilidades (de valores para
# 'a' e 'b')?
