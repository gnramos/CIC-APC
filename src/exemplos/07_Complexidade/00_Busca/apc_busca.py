#  -*- coding: utf-8 -*-
##   @package: apc_busca.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implementação de funções de busca.


COMPARACOES_NA_BUSCA = 0  # Variável global para contar a quantidade de
                          # comparações realizadas em uma função de busca. Veja
                          # a função testa_busca.


def testa_busca(valor, lista, busca):
    '''Realiza a busca pelo valor dado na lista, indicando
    quantas comparações foram realizadas.
    '''
    global COMPARACOES_NA_BUSCA
    acumulado = COMPARACOES_NA_BUSCA  # A quantidade de comparações é acumulada

    COMPARACOES_NA_BUSCA = 0
    i = busca(valor, lista)
    if i != -1:
        print(('{} está na posição {} da lista ({} comparações)'.format(valor, i, COMPARACOES_NA_BUSCA)))
    else:
        print(('{} não está na lista ({} comparações)'.format(valor, COMPARACOES_NA_BUSCA)))

    COMPARACOES_NA_BUSCA += acumulado


def busca_sequencial(valor, lista):
    '''Retorna o índice do elemento cujo conteúdo é 'valor',
    se existir na lista, -1 caso contrário.
    '''
    global COMPARACOES_NA_BUSCA

    for i in range(len(lista)):
        COMPARACOES_NA_BUSCA += 1
        if valor == lista[i]:
            return i

    return -1


def busca_sequencial_ord(valor, lista):
    '''Retorna o índice do elemento cujo conteúdo é 'valor',
    se existir na lista ordenada, -1 caso contrário.
    '''
    global COMPARACOES_NA_BUSCA

    for i in range(len(lista)):
        COMPARACOES_NA_BUSCA += 1
        if valor == lista[i]:
            return i
        else:
            COMPARACOES_NA_BUSCA += 1
            if lista[i] > valor:  # 'otimização'
                return -1

    return -1


def busca_binaria_i(valor, lista):
    '''Retorna o índice do elemento cujo conteúdo é 'valor',
    se existir na lista ordenada, -1 caso contrário.
    '''
    global COMPARACOES_NA_BUSCA

    meio, inf, sup = 0, 0, len(lista) - 1

    while inf <= sup:
        meio = (inf + sup) // 2
        COMPARACOES_NA_BUSCA += 1
        if lista[meio] < valor:
            inf = meio + 1  # busca a direita
        else:
            ++COMPARACOES_NA_BUSCA
            if lista[meio] > valor:
                sup = meio - 1  # busca a esquerda
            else:
                return meio

    return -1


def busca_binaria_r(valor, lista):
    '''Retorna o índice do elemento cujo conteúdo é 'valor',
    se existir na lista ordenada, -1 caso contrário.
    '''
    global COMPARACOES_NA_BUSCA

    if not lista:
        return -1

    meio = len(lista) // 2

    COMPARACOES_NA_BUSCA += 1
    if lista[meio] > valor:  # busca a esquerda
        return busca_binaria_r(valor, lista[:meio])
    else:
        COMPARACOES_NA_BUSCA += 1
        if lista[meio] < valor:  # busca a direita
            resultado = busca_binaria_r(valor, lista[meio+1:])
            if resultado == -1:
                return -1
            return meio + resultado + 1
        else:
            return meio


# O jeito "correto" de se realizar uma busca em Python é o mais simples:
def valor_existe_na_lista(valor, lista):
    return valor in lista


def indice_da_primeira_ocorrencia_do_valor_na_lista(valor, lista):
    return lista.index(valor)
