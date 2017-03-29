#  -*- coding: utf-8 -*-
#    @package: apc.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de módulo com funcionalidades.

# A inclusão é recursiva...


import datetime  # Funcionalidades de tempo
import random    # Funcionalidades de números pseudo-aleatórios

import apc  # Duplicação!
            # Mas o interpretador é mais espero e controla se o módulo já foi
            # carregado ou não para evitar repetição.


def mostra_agora():
    '''Escreve a hora atual na saída padrão.'''

    return str(datetime.datetime.now())


def qualquer():
    '''Retorna um número inteiro aleatório entre 0 e 0xFFFFFFFF.'''

    # Teoricamente, o máximo valor inteiro é limitado apenas pela quantidade de
    # memória, então é preciso definir um para obter o mesmo comportamento que
    # em apc_subalgoritmos.h

    return random.randint(0, 0xFFFFFFFF)


def aleatorio(max):
    '''Retorna um número inteiro aleatório entre 0 e o valor dado (não
    incluso).'''

    return random.randint(0, max)
