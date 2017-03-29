#  -*- coding: utf-8 -*-
#    @package: 03-ponteiro.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Comportamento com referências (ponteiros).

# Python sempre realiza passagem por referência, não há exceção. Qualquer
# atribuição significa copiar o valor da referência.

# Exemplo:

# Inicializa vetor de 5 elementos.
vetor = [0.0 for _ in range(5)]

# Mostra cada elemento de vetor
for elemento in vetor:
    print(elemento)
# 0.0
# 0.0
# 0.0
# 0.0
# 0.0


# Copiamos a referência de vetor para uma outra variável
n = vetor

# Modificamos alguns elemento
n[0] = 1.0
n[3] = 3.14

# Verificando a situação do vetor
for elemento in vetor:
    print(elemento)
#  1.0
#  0.0
#  0.0
#  0.0
#  0.0

# Qual seria uma forma correta de copiar todos os valores para n e realizar as
# alterações sem modificar o vetor?
