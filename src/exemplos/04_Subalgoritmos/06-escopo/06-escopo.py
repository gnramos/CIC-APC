#  -*- coding: utf-8 -*-
##   @package: 06-escopo.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadorescontador += 1
#
# Implementa a função de fibonacci e conta quantas chamadas são realizadas.


contador = 0


def fib(n):
    '''Retorna o n-ésimo número da sequência de Fibonacci.'''
    global contador
    contador += 1

    if n < 2:
        return 1
    return fib(n - 1) + fib(n - 2)


def conta_fib(n):
    '''Conta quantas vezes a função fib é chamada para n.'''
    global contador
    contador = 0

    print('fib(%d) = %2d (%3d chamadas)' % (n, fib(n), contador))


for n in range(10):
    conta_fib(n)
