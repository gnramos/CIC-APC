#  -*- coding: utf-8 -*-
#    @package: 01-identificador.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Python não dá acesso direto a endereços de memória.


x, y = 'A', 'B'
id_x, id_y = id(x), id(y)

print('x={} ({}), y={} ({})'.format(x, id_x, y, id_y))

del x  # Forçando o fim do ciclo de vida do objeto x

try:  # Confirmando que x não existe mais.
    x
except NameError:
    print('Objeto \'x\' não existe!')
else:
    print('x existe e seu valor é {}'.format(x))

# Uma vez que um objeto não é mais referenciado, seu
# identificador pode ser atribuído a um novo objeto.

# Criando um novo objeto 'y' (mesmo valor que x tinha!)
y = 'A'
id_y = id(y)
print('y={} ({})'.format(y, id_y))

if id_y == id_x:
    print('y tem o mesmo id que x tinha...')
