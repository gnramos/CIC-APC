#  -*- coding: utf-8 -*-
##   @package: 13-ternario.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplos de utilização do operador ternário. Este operador é relativamente
# novo em Python (incluso na versão 2.5), e não é considerado no estilo
# "Pythonista", por ser diferente to padrão de outras linguagens (como C e
# Java), o fluxo não ser o "normal" (de pensar primeiro na condição e depois
# nos valores), e questões de estilo.

print('Ternário:')

i = 1 if 1 < 2 else -1
print('\'i = 1 if 1 < 2 else -1\' -> i =', i)
i = 1 if 1 > 2 else -1
print('\'i = 1 if 1 > 2 else -1\' -> i =', i)

print('1 é maior que 2? Resposta:', 'S' if 1 > 2 else 'N')
print('1 é menor que 2? Resposta:', 'S' if 1 < 2 else 'N')

print('O teste é:', 'verdadeiro' if True else 'falso')
print('O teste é:', 'verdadeiro' if False else 'falso')
