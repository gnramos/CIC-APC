#  -*- coding: utf-8 -*-
#       @file: apc.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de módulo com funcionalidades.

# #ifndef UNB_CIC_APC_SUBALGORITMOS_H /* Testa se o módulo já foi definido. */
# #define UNB_CIC_APC_SUBALGORITMOS_H /* Caso não tenha sido, defina agora,
#                                        efetivamente evitando a duplicação das
#                                       funcionalidades definidas aqui. */


# A inclusão é recursiva...
import datetime  # Funcionalidades de tempo
import random    # Funcionalidades de números pseudo-aleatórios

import apc  # Duplicação!

            # Mas o interpretador é mais espero e controla se o módulo já foi
            # carregado ou não para evitar repetição.


def mostra_agora():
    """Escreve a hora atual na saída padrão."""

    print datetime.datetime.now()


def qualquer():
    """Retorna um número inteiro aleatório entre 0 e 0xFFFFFFFF."""

    # Teoricamente, o máximo valor inteiro é limitado apenas pela quantidade de
    # memória, então é preciso definir um para obter o mesmo comportamento que
    # em apc_subalgoritmos.h

    return random.randint(0, 0xFFFFFFFF)


def aleatorio(max):
    """Retorna um número inteiro aleatório entre 0 e o valor dado (não incluso)."""

    return random.randint(0, max)
