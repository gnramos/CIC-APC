#  -*- coding: utf-8 -*-
#    @package: busca_binaria.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implementação de testes para a função para busca binária, que assume-se estar
# implementada na função bb.


import random


def bb(vetor, tamanho, elemento):
    '''Recebe um vetor (endereço inicial e tamanho) e um elemento a se buscar
    neste vetor. Retorna o índice da posição deste elemento, se existir, -1
    caso contrário.
    '''
    # Escreva o código aqui.
    pass


# Testes
def testa_vetor_nulo():
    assert -1 == bb(None, 1, 1)


def testa_tamanho_negativo():
    vetor = [1, 2, 3]

    assert -1 == bb(vetor, -1, 1)


def testa_tamanho_zero():
    vetor = [1, 2, 3]

    assert -1 == bb(vetor, 0, 1)


def testa_tamanho_positivo():
    vetor = [1, 2, 3]

    assert -1 != bb(vetor, 1, 1)


def testa_encontra_em_vetor_de_tamanho_1():
    vetor = [1]

    assert 0 == bb(vetor, 1, 1)


def testa_nao_encontra_em_vetor_de_tamanho_1():
    vetor = [1]

    assert -1 == bb(vetor, 1, 2)


def testa_encontra_primeiro_em_vetor_de_tamanho_2():
    vetor = [1, 2]

    assert 0 == bb(vetor, 2, 1)


def testa_encontra_segundo_em_vetor_de_tamanho_2():
    vetor = [1, 2]

    # Escreva o teste adequado aqui.
    assert False


def testa_nao_encontra_em_vetor_de_tamanho_2():
    vetor = [1, 2]

    assert -1 == bb(vetor, 2, 0)


def testa_encontra_diminuindo_tamanho_do_vetor_de_tamanho_2():
    vetor = [1, 2]

    assert 0 == bb(vetor, 1, 1)


def testa_nao_encontra_diminuindo_tamanho_do_vetor_de_tamanho_2():
    vetor = [1, 2]

    assert -1 == bb(vetor, 1, 2)


def testa_encontra_primeiro_em_vetor_de_tamanho_3():
    vetor = [1, 2, 3]

    assert 0 == bb(vetor, 3, 1)


def testa_encontra_segundo_em_vetor_de_tamanho_3():
    vetor = [1, 2, 3]

    assert 1 == bb(vetor, 3, 2)


def testa_encontra_terceiro_em_vetor_de_tamanho_3():
    vetor = [1, 2, 3]

    assert 2 == bb(vetor, 3, 3)


def testa_nao_encontra_em_vetor_de_tamanho_3():
    vetor = [1, 2, 3]

    assert -1 == bb(vetor, 3, 0)


def testa_encontra_diminuindo_tamanho_do_vetor_de_tamanho_3():
    vetor = [1, 2, 3]

    # Escreva o teste adequado aqui.
    assert False


def testa_nao_encontra_diminuindo_tamanho_do_vetor_de_tamanho_3():
    vetor = [1, 2, 3]

    assert -1 == bb(vetor, 1, 2)


def testa_encontra_aleatorio_em_vetor_de_tamanho_10():
    vetor = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

    i = bb(vetor, 10, random.randint(1, 10))

    assert i >= 0 and i < 10


def testa_encontra_todos_em_vetor_de_tamanho_50():
    vetor = [x for x in range(1, 51)]

    # Escreva o teste adequado aqui.
    assert False


if __name__ == '__main__':
    testa_vetor_nulo()
    testa_tamanho_negativo()
    testa_tamanho_zero()
    testa_tamanho_positivo()
    testa_encontra_em_vetor_de_tamanho_1()
    testa_nao_encontra_em_vetor_de_tamanho_1()
    testa_encontra_primeiro_em_vetor_de_tamanho_2()
    testa_encontra_segundo_em_vetor_de_tamanho_2()
    testa_nao_encontra_em_vetor_de_tamanho_2()
    testa_encontra_diminuindo_tamanho_do_vetor_de_tamanho_2()
    testa_nao_encontra_diminuindo_tamanho_do_vetor_de_tamanho_2()
    testa_encontra_primeiro_em_vetor_de_tamanho_3()
    testa_encontra_segundo_em_vetor_de_tamanho_3()
    testa_encontra_terceiro_em_vetor_de_tamanho_3()
    testa_nao_encontra_em_vetor_de_tamanho_3()
    testa_encontra_diminuindo_tamanho_do_vetor_de_tamanho_3()
    testa_nao_encontra_diminuindo_tamanho_do_vetor_de_tamanho_3()
    testa_encontra_aleatorio_em_vetor_de_tamanho_10()
    testa_encontra_todos_em_vetor_de_tamanho_50()

    # Se chegou aqui sem indicar erros, passou por todos os testes.
