#  -*- coding: utf-8 -*-
#       @file: 15-vetorND.c
#     @author: Gabriel O. Taumaturgo
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo uso de vetor com 3 dimensões utilizado para armazenar as notas de
# todos os alunos de um professor.


# Biblioteca que auxilia com procedimentos "aleatorios".
import random


def nota_aleatoria():
    '''Retorna uma nota aleatória (inteira) entre 0 e 10.'''
    return random.randint(0, 10)


NUM_TURMAS = 2
NUM_ALUNOS = 40
NUM_PROVAS = 3
MEDIA = 7.0


# Inicializa listas
notas = [[[0.0 for k in range(NUM_PROVAS)] for j in range(NUM_ALUNOS)] for i in range(NUM_TURMAS)]
medias = [[0.0 for j in range(NUM_ALUNOS)] for i in range(NUM_TURMAS)]
aprovados = [0.0 for i in range(NUM_TURMAS)]

# Valores iniciais aleatórios.
for i in range(NUM_TURMAS):
    for j in range(NUM_ALUNOS):
        for k in range(NUM_PROVAS):
            notas[i][j][k] = nota_aleatoria()

# Outra forma equivalente seria:
# notas = [[[nota_aleatoria() for _ in range(NUM_PROVAS)] for _ in range(NUM_ALUNOS)] for _ in range(NUM_TURMAS)]

# Calculando a média de cada aluno:
for i in range(NUM_TURMAS):
    for j in range(NUM_ALUNOS):
        for k in range(NUM_PROVAS):
            medias[i][j] += (1.0 * notas[i][j][k])
        medias[i][j] /= NUM_PROVAS




# Calculando o índice de aprovação de cada turma:
for i in range(NUM_TURMAS):
    for j in range(NUM_ALUNOS):
        if medias[i][j] >= MEDIA:
            aprovados[i] += 1

    print("Turma %d obteve %.0f%% de aprovacao.\n" % ( i, aprovados[i] * 100.0 / NUM_ALUNOS))
