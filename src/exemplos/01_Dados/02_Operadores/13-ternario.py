#  -*- coding: utf-8 -*-
#    @package: 13-ternario.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplos de utilização do operador ternário. Este operador é relativamente
# novo em Python (incluso na versão 2.5), e não é considerado no estilo
# "Pythonista", por ser diferente do padrão de outras linguagens (como C e
# Java), o fluxo não ser o "normal" (de pensar primeiro na condição e depois
# nos valores), e questões de estilo.

print('Ternário:')

# O operador ternário é uma forma compacta de seleção de um valor conforme uma
# condição. Ele lida com 3 componentes:
#
#     valor_se_verdadeiro if condicao else valor_se_falso
#
# A expressão pode ser lida como "retorne valor_se_verdadeiro se condicao é
# verdadeira, caso contrário retorne valor_se_falso." O programa avalia a
# condição e escolhe o valor de acordo com ela.
#
# Não há restrição quanto ao tipo de valor de retorno.

# Tipo inteiro
i = 1 if 1 < 2 else -1
print('\'i = 1 if 1 < 2 else -1\' -> i =', i)
i = 1 if 1 > 2 else -1
print('\'i = 1 if 1 > 2 else -1\' -> i =', i)

# Tipo caractere
print('1 é maior que 2? Resposta:', 'S' if 1 > 2 else 'N')
print('1 é menor que 2? Resposta:', 'S' if 1 < 2 else 'N')

print('O teste é:', 'verdadeiro' if True else 'falso')
print('O teste é:', 'verdadeiro' if False else 'falso')

# Tipo real
r = 3.14 if 'Pi' == 'Pi' else 0
print('"Pi" == "Pi"? Resposta:', r)
r = 3.14 if 'pi' == 'PI' else 0
print('"pi" == "PI"? Resposta:', r)
