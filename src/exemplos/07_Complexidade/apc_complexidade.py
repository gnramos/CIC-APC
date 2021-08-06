#  -*- coding: utf-8 -*-
#    @package: apc_complexidade.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
#
# Implementação de funções comuns para exemplos de complexidade de algoritmos.
# A complexidade é medida em função da quantidade de execuções da função
# instrucao(), que é declarada aqui mas definida conforme a vontade do usuário.
#
# Pode ser qualquer conjunto de instruções cuja complexidade seja constante.
# Exemplos:
#     1) print('.', end='')  # essa é a indicada para facilitar a visualização.
#
#     2) if condicao:
#            i += 1
#            print('.', end='')
#        else:
#            i -= 1
#
#     3) for i in range(100):
#            for j in range(1000000):
#                print('.', end='')
#

# Executa uma instrução.
def instrucao():
    pass  # Faz nada (mas em tempo constante!)...


# Implementação de algoritmo com complexidade O(1) em relação a quantidade de
# execuções da função instrucao().
def O_1(n):
    instrucao()


# Implementação de algoritmo com complexidade O(log2 n) em relação a quantidade
# de execuções da função instrucao().
def O_log2n(n):
    while n > 0:
        O_1(n)
        n = (n // 2)  # // é a divisão inteira


# Implementação de algoritmo com complexidade O(n) em relação a quantidade de
# execuções da função instrucao().
def O_n(n):
    for _ in range(n):
        O_1(n)


# Implementação de algoritmo com complexidade O(n*log2(n)) em relação a
# quantidade de execuções da função instrucao().
def O_nlog2n(n):
    for _ in range(n):
        O_log2n(n)


# Implementação de algoritmo com complexidade O(n^c) em relação a quantidade de
# execuções da função instrucao().
def O_nc(n, c):
    if c > 0:
        for _ in range(n):
            O_nc(n, c - 1)
    else:
        O_1(n)


# Implementação de algoritmo com complexidade O(c^n) em relação a quantidade de
# execuções da função instrucao().
def O_cn(c, n):
    O_nc(c, n)


# Implementação de algoritmo com complexidade O(n!) em relação a quantidade de
# execuções da função instrucao().
def O_n_fat(n):
    if n > 0:
        for _ in range(n):
            O_n_fat(n - 1)
    else:
        O_1(n)
