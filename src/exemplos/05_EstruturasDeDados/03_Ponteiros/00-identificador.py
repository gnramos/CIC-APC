#  -*- coding: utf-8 -*-
#    @package: 00-identificador.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Python não dá acesso direto a endereços de memória.


x = 'A'
id_x = id(x)

# O identificador não é necessariamente o endereço de
# memória do objeto!
# https://docs.python.org/3/library/functions.html?highlight=id#id

# O conteúdo de x é:
print('    x = {}'.format(x))
# O conteúdo de id_x é:
print(' id_x = {}'.format(id_x))

# É possível obter o objeto a partir de seu identificador,
# mas isso NÃO é um procedimento adequado (vai contra muitas
# decisões de projeto da linguagem).
