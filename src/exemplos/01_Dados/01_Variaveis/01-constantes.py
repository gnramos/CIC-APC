#  -*- coding: utf-8 -*-
#    @package: 01-constantes.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo do uso de constantes.


# Constantes se referem a valores fixos, que podem ser de quaisquer dos tipos
# básicos (inteiro, ponto flutuante, simbólico). Por decisão de projeto da
# linguagem, "não há o equivalente a constante em Python, pois o programador
# geralmente é considerado inteligente o suficiente para deixar o valor que
# quer que permaneça constante em paz".
#
# Existem regras para nomear constantes, tanto de sintaticamente quanto
# semanticamente. E também existem "diretrizes" de boas práticas:
#   - https://www.python.org/dev/peps/pep-0008/#constants
#   - http://wiki.python.org.br/GuiaDeEstilo
#
# Geralmente, utiliza-se apenas letras maiúsculas para nomes de constantes
# de modo que seja mais fácil identificá-las no código (em contraste a
# variáveis). Portanto, saiba que identificadores com esta característica não
# devem ser alterados.

# Constantes inteiras:
QUARENTA_E_DOIS = 42
OCTAL = 0o52  # 0 a esquerda.
HEXADECIMAL = 0x2A  # 0x a esquerda.

# Constantes reais:
PI = 3.14159
PI_DE_NOVO = 314159E-5

# Constantes simbólicas:
A = 'a'
TABULACAO = '\t'
QUEBRA_DE_LINHA = '\n'
NOME_DO_PROGRAMA = '01-constantes.py'
VERSAO_ATUAL = 'v0.2'

# Constantes booleanas
VERDADEIRO = True
NAO_PRECISO_ESTUDAR = False

print('QUARENTA_E_DOIS     =', QUARENTA_E_DOIS)
print('OCTAL               =', OCTAL)
print('HEXADECIMAL         =', HEXADECIMAL)
print('PI                  =', PI)
print('PI_DE_NOVO          =', PI_DE_NOVO)
print('A                   =', A)
print('TABULACAO           =', TABULACAO)
print('QUEBRA_DE_LINHA     =', QUEBRA_DE_LINHA)
print('NOME_DO_PROGRAMA    =', NOME_DO_PROGRAMA)
print('VERSAO_ATUAL        =', VERSAO_ATUAL)
print('VERDADEIRO          = ', VERDADEIRO)
print('NAO_PRECISO_ESTUDAR = ', NAO_PRECISO_ESTUDAR)

# "Constante" significa que não pode variar, mas em Python é possível alterar
# os valores armazenados (teste com as instruções a seguir). Entretanto, você é
# inteligente o suficiente para deixar o valor em paz, então NÃO fará isso nos
# seus programas.

# QUARENTA_E_DOIS = 2
# PI = 3
# A = 'b'
# VERSAO_ATUAL = '@'
# VERDADEIRO = False
