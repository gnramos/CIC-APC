#  -*- coding: utf-8 -*-
##   @package: 02-multiplicacao.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplos de utilização do operador de multiplicação. Em Python, é possível
# "multiplicar" valores simbólicos.


print('Multiplicação:')

# Escreva o resultado da operação 3 * 2. A multiplicação de valores inteiros
# também é um valor inteiro.
print('      3 * 2   =', 3 * 2)

# Escreva o resultado da operação 2 * 3.
print('      2 * 3   =', 2 * 3)

# Escreva o resultado da operação 2 * 3.0. A multiplicação de valores inteiros
# por reais é um valor real.
print('      2 * 3.0 =', 2 * 3.0)

# Escreva o resultado da operação 2.0 * 3f. A multiplicação de valores reais
# por inteiros é um valor real.
print('    2.0 * 3   =', 2.0 * 3)

# Escreva o resultado da operação 2.0 * 3.0. A multiplicação de valores reais
# também é um valor real.
print('    2.0 * 3.0 =', 2.0 * 3.0)


# No caso de valores simbólicos, a multiplicação é na verdade uma sequência de
# concatenações. Isso implica que um dos operandos é simbólico, e o outro é um
# número inteiro positivo.
print('\nMultiplicação (simbólicos):')

# Escreva o resultado da operação 'a' * 3. A multiplicação de valores
# simbólicos também é um valor simbólico.
print('     \'a\' * 3    =', 'a' * 3)

# Escreva o resultado da operação 3 * 'a'.
print('       3 * \'a\'  =', 3 * 'a')

# Escreva o resultado da operação 3 * 'Ab'.
print('       3 * \'Ab\' =', 3 * 'Ab')

# Escreva o resultado da operação 'Ab' * 3.
print('    \'Ab\' * 3    =', 'Ab' * 3)

# Escreva o resultado da operação '0' * 3. Símbolos também podem representar
# números.
print('     \'0\' * 3    =', '0' * 3)
