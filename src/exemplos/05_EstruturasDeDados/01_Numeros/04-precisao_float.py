#  -*- coding: utf-8 -*-
#    @package: 04-precisao_float.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implementação de código para exemplificar o erro de precisão com ponto
# flutuante.


f = 1 // 10
print(f' 1 // 10   == {f:.1f}')

f = 1.0 / 10
print(f'1.0 / 10   == {f:.1f}')

f = 1 / 10.0
print(f'  1 / 10.0 == {f:.5f}')

f = 1.0 / 10.0
print(f'1.0 / 10.0 == {f:.28f}')
