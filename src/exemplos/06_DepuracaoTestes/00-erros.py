#  -*- coding: utf-8 -*-
#    @package: 00-erros.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplos de tipos de erros mais comuns (tente corrigi-los).

# Erro sintático:
print(funcao_inexistente())

# Erro de execução:
print(x)

# Erro de execução:
print(1 + 'string')

# Erro de execução:
print('%f', 2 / 0)

# Erro semântico
lado = 2
perimetro = lado * lado
print('O perimetro do quadrado de lado {} é {}'.format(lado, perimetro))

# Erro semântico
perimetro = 4 * lado
print('E se dobrarmos o lado, o perimetro torna-se:', perimetro)
lado *= 2
