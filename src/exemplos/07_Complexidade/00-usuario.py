#  -*- coding: utf-8 -*-
#    @package: 00-usuario.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
#
# Exemplo de código com complexidade constante.
#
# Você pode testar com sua própria percepção de tempo para argumentos
# diferentes:
#
# python 00-usuario.py 1
# python 00-usuario.py 10
# python 00-usuario.py 100     <- cuidado com 'grandes' valores de n e
# python 00-usuario.py 1000    <- complexidades com crescimento de maior ordem.


import sys
import apc_complexidade as apc


def __instrucao__():
    print('.', end='')

apc.instrucao = __instrucao__  # Redefinindo a instrução a ser executada


# Assume que é passado um argumento inteiro indicando o tamanho da entrada,
# executa uma quantidade de instruções proporcional a complexidade do algoritmo
# implementado.

argc = len(sys.argv)


# Verificação de argumentos.
if argc != 2:
    print('Forneça apenas um número inteiro (representando o tamanho da '
          'entrada).')
    exit(1)

# Assume que o segundo argumento é um inteiro positivo.
n = int(sys.argv[1])

# Validação da entrada.
if 0 > n:
    print('Valor inválido (%d).'.format(n))
    exit(1)

if n > 10:
    print('Não, isso demoraria demais...\n')
    exit(1)

# Vamos lá...
print('     O(1): ', end='')
apc.O_1(n)

print('\n O(log2n): ', end='')
apc.O_log2n(n)

print('\n     O(n): ', end='')
apc.O_n(n)

print('\nO(nlog2n): ', end='')
apc.O_nlog2n(n)

print('\n   O(n^2): ', end='')
apc.O_cn(n, 2)

print('\n    (2^n): ', end='')
apc.O_cn(2, n)

print('\n    O(n!): ', end='')
apc.O_n_fat(n)

print('\n')
