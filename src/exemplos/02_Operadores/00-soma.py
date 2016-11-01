#  -*- coding: utf-8 -*-
##   @package: 00-soma.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplos de utilização do operador de soma. Em Python, é possível "somar"
# valores simbólicos.


print('Soma (numéricos):')

# Escreva o resultado da operação 1 + 2. A soma de valores inteiros também é um
# valor inteiro.
print('      1 + 2   =', 1 + 2)

# Escreva o resultado da operação 2 + 1.
print('      2 + 1   =', 2 + 1)

# Escreva o resultado da operação 2 + 1.0. A soma de valores inteiros com reais
# é um valor real.
print('      2 + 1.0 =', 2 + 1.0)

# Escreva o resultado da operação 2.0 + 1.
print('    2.0 + 1   =', 2.0 + 1)

# Escreva o resultado da operação 2.0 + 1.0. A soma de valores reais também é
# um valor real.
print('    2.0 + 1.0 =', 2.0 + 1.0)

# No caso de valores simbólicos, a soma é na verdade uma concatenação, ou seja,
# o segundo operando é acrescentado ao fim do primeiro (como um sufixo).
print('\nSoma (simbólicos):')

# Escreva o resultado da operação 'a' + 'b'. A soma de valores simbólicos
# também é um valor simbólico.
print('    \'a\'  + \'b\'  =', 'a' + 'b')

# Escreva o resultado da operação 'b' + 'a'.
print('    \'b\'  + \'a\'  =', 'b' + 'a')

# Escreva o resultado da operação 'a' + 'bc'.
print('    \'a\'  + \'bc\' =', 'a' + 'bc')

# Escreva o resultado da operação 'ab' + 'c'.
print('    \'ab\' + \'c\'  =', 'ab' + 'c')

# Escreva o resultado da operação '12' + '34'. Símbolos também podem
# representar números.
print('    \'12\' + \'34\' =', '12' + '34')
