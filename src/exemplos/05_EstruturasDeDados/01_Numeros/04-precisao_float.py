#  -*- coding: utf-8 -*-
#    @package: 04-precisao_floar.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implementação de código para exemplificar o erro de precisão com ponto
# flutuante.


f = 1 / 10
print('  1 / 10   == %.1f' % f)

f = 1.0 / 10
print('1.0 / 10   == %.1f' % f)

f = 1 / 10.0
print('  1 / 10.0 == %.5f' % f)

f = 1.0 / 10.0
print('1.0 / 10.0 == %.28f' % f)
