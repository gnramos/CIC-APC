#  -*- coding: utf-8 -*-
#    @package: 11-teste_parada.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplos de testes de parada em laços de repetição.


# A condição de parada deve ser modificada dentro do próprio laço.
deve_parar = False

i = 0
while not deve_parar:
    i += 1
    deve_parar = ((i % 31) == 0)
    # ...

print('Saiu do while porque deve_parar.')

# É possível indicar o fim do laço dentro do próprio laço.
i = 0
while True:  # Laço infinito!
    # ...

    i += 1
    if (i % 31) == 0:
        break  # sai quando for múltiplo de 31

    # ...

print('Saiu do while porque (%d %% 31) == 0.' % i)
