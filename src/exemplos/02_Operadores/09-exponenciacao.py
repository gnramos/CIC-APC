#  -*- coding: utf-8 -*-
#       @file: 9-exponenciacao.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplos de utilização do operador de exponenciação.


print 'Exponenciação:'

base = 0
expoente = 0
resultado = base ** expoente
print '   (%d)**(%d) = %d' % (base, expoente, resultado)
expoente = 1
resultado = base ** expoente
print '   (%d)**(%d) = %d' % (base, expoente, resultado)
expoente = 2
resultado = base ** expoente
print '   (%d)**(%d) = %d' % (base, expoente, resultado)
expoente = 3
resultado = base ** expoente
print '   (%d)**(%d) = %d' % (base, expoente, resultado)

base = 1
expoente = 0
resultado = base ** expoente
print '   (%d)**(%d) = %d' % (base, expoente, resultado)
expoente = 1
resultado = base ** expoente
print '   (%d)**(%d) = %d' % (base, expoente, resultado)
expoente = 2
resultado = base ** expoente
print '   (%d)**(%d) = %d' % (base, expoente, resultado)
expoente = 3
resultado = base ** expoente
print '   (%d)**(%d) = %d' % (base, expoente, resultado)

base = 2
expoente = 0
resultado = base ** expoente
print '   (%d)**(%d) = %d' % (base, expoente, resultado)
expoente = 1
resultado = base ** expoente
print '   (%d)**(%d) = %d' % (base, expoente, resultado)
expoente = 2
resultado = base ** expoente
print '   (%d)**(%d) = %d' % (base, expoente, resultado)
expoente = 3
resultado = base ** expoente
print '   (%d)**(%d) = %d' % (base, expoente, resultado)

base = 3
expoente = 0
resultado = base ** expoente
print '   (%d)**(%d) = %d' % (base, expoente, resultado)
expoente = 1
resultado = base ** expoente
print '   (%d)**(%d) = %d' % (base, expoente, resultado)
expoente = 2
resultado = base ** expoente
print '   (%d)**(%d) = %d' % (base, expoente, resultado)
expoente = 3
resultado = base ** expoente
print '   (%d)**(%d) = %d' % (base, expoente, resultado)

# O expoente pode ser negativo (portanto o resultado é um número real).
base = 2
expoente = -2
resultado = base ** expoente
print '   (%d)**(%d) = %f' % (base, expoente, resultado)
expoente = -1
resultado = base ** expoente
print '   (%d)**(%d) = %f' % (base, expoente, resultado)

# O expoente pode ser um número real (portanto o resultado é um número real).
expoente = 0.5
resultado = base ** expoente
print '   (%d)**(%f) = %f' % (base, expoente, resultado)
base = 4
expoente = 0.5
resultado = base ** expoente
print '   (%d)**(%f) = %f' % (base, expoente, resultado)
base = 8
expoente = 1.0/3.0
resultado = base ** expoente
print '   (%d)**(%f) = %f' % (base, expoente, resultado)
