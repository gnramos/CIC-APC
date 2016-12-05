#  -*- coding: utf-8 -*-
##   @package: 04-escopo.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de escopos de variáveis locais e globais. */


var_global = 1


def incrementa(local):
    '''Incrementa as variáveis 'local' e 'var_global'.'''

    global var_global  # é preciso declarar a variável como global

    local += 1
    var_global += 1
    print('incrementa: local = %d, var_global = %d' % (local, var_global))

    return local


def duplica(local):
    '''Duplica as variáveis 'local' e 'var_global'.'''

    global var_global

    local *= 2
    var_global *= 2
    print('duplica: local = %d, var_global = %d' % (local, var_global))

    return local


def incrementa_e_duplica(local):
    '''Incrementa e duplica as variáveis 'local' e 'var_global'.'''

    global var_global

    local = incrementa(local)
    print('INCREMENTA_e_duplica: local = %d, var_global = %d' % (local, var_global))
    local = duplica(local)
    print('incrementa_e_DUPLICA: local = %d, var_global = %d' % (local, var_global))

    return local


local = 1

print('main: local = %d, var_global = %d\n' % (local, var_global))

incrementa(local)
print('main: local = %d, var_global = %d\n' % (local, var_global))

duplica(local)
print('main: local = %d, var_global = %d\n' % (local, var_global))

incrementa_e_duplica(local)
print('main: local = %d, var_global = %d\n' % (local, var_global))
