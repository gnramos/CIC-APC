#  -*- coding: utf-8 -*-
#    @package: 06-raiz2-2.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implementação de código para aproximar o valor da raiz
# quadrada de um número inteiro não negativo, com um laço
# de repetição.


n = float(input('Qual o valor de n? '))

if n < 2:
    if n < 0:
        print('Não sei calcular a raiz quadrada de número negativo.')
    else:
        print('A raiz quadrada de %d é %d.' % (n, n))
else:
    r = float(input('Qual sua estimativa inicial para a raiz de ' + str(n) + '? '))
    iteracoes = int(input('Quantas iterações? '))

    if r <= 0 or iteracoes < 0:
        print('Raiz e/ou quantidade de iterações inválida(s).')
    else:
        i = 0
        while True:
            r = (r+(n/r))/2
            i += 1

            if i >= iteracoes:
                break

        print('Depois de %d tentativas, a aproximação da raiz de %f é %f.' % (iteracoes, n, r))
