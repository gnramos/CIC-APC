#  -*- coding: utf-8 -*-
##   @package: 02-limites.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de limites das representações de tipos de dados.
#
#
# No caso de inteiros e símbolos, os limites são definidos pela quantidade de
# memória disponível na máquina. Por exemplo, se quiser um inteiro de 5000
# dígitos, é possível armazená-lo (desde que haja memória suficiente).
#
# No caso de números reais, geralmente são implementados como double da
# linguagem C.
#
# No caso de símbolos, caracteres são implementados conforme a codificação
# definida no arquivo, se não houver definição, utiliza-se o padrão ASCII.
#
# Mais informações em: https://docs.python.org/2/library/stdtypes.html
#

import sys
print('%d <= inteiro <= %d' % (-sys.maxsize - 1, sys.maxsize))
print('%E <= real <= %E' % (sys.float_info.min, sys.float_info.max))

# Informacoes sobre o sistema:
# help(sys)
