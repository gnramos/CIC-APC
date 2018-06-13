#  -*- coding: utf-8 -*-
#    @package: 02-ordem.py
#     @author: Gabriel O. Taumaturgo
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de uso de registros em vetores.


# Definição do tipo.
class Data():
    def __init__(self):
        self.dia, self.mes, self.ano = 0, 0, 0  # A 'data' em si.


class Aniversario():
    def __init__(self):
        self.nome = ''
        self.data = Data()


def mostra(aniversario):
    print('%12s: %02d/%02d/%04d' % (aniversario.nome, aniversario.data.dia,
                                    aniversario.data.mes,
                                    aniversario.data.ano))


# Indica a ordem alfabética.
def alfabetica(a, b):
    return a.nome < b.nome  # Python compara strings com facilidade!


# Indica a ordem cronológica.
def cronologica(a, b):
    if a.data.ano != b.data.ano:
        return a.data.ano < b.data.ano
    if a.data.mes != b.data.mes:
        return a.data.mes < b.data.mes
    return a.data.dia <= b.data.dia


# Indica ordem alfabética, utilizando a cronológica em caso de igualdade.
def alfabetica_cronologica(a, b):
    em_ordem = alfabetica(a, b)

    if em_ordem:
        return em_ordem
    else:
        return cronologica(a, b)


def troca(a, b):
    return b, a


# Aplica a função de comparação dada em todos os elementos do vetor, alterando
# suas posições de modo que fique ordenado.
def ordena(vetor, em_ordem):
    n = len(vetor)
    for i in range(n - 1):
        for j in range(i + 1, n):
            if not em_ordem(vetor[i], vetor[j]):
                    vetor[i], vetor[j] = troca(vetor[i], vetor[j])


# Vetor de classes.
aniversarios = [Aniversario() for _ in range(10)]

aniversarios[0].nome = 'Charlie Zeta'
aniversarios[0].data.dia = 1
aniversarios[0].data.mes = 1
aniversarios[0].data.ano = 1980

aniversarios[1].nome = 'Alice'
aniversarios[1].data.dia = 1
aniversarios[1].data.mes = 1
aniversarios[1].data.ano = 1988

aniversarios[2].nome = 'Bob 1'
aniversarios[2].data.dia = 1
aniversarios[2].data.mes = 1
aniversarios[2].data.ano = 2000

aniversarios[3].nome = 'Alice'
aniversarios[3].data.dia = 1
aniversarios[3].data.mes = 1
aniversarios[3].data.ano = 2009

aniversarios[4].nome = 'Bob 2'
aniversarios[4].data.dia = 1
aniversarios[4].data.mes = 1
aniversarios[4].data.ano = 1999

aniversarios[5].nome = 'Bob 3'
aniversarios[5].data.dia = 1
aniversarios[5].data.mes = 7
aniversarios[5].data.ano = 2000

aniversarios[6].nome = 'Bob Silva'
aniversarios[6].data.dia = 12
aniversarios[6].data.mes = 1
aniversarios[6].data.ano = 2000

aniversarios[7].nome = 'Alice'
aniversarios[7].data.dia = 1
aniversarios[7].data.mes = 1
aniversarios[7].data.ano = 1999

aniversarios[8].nome = 'Charlie Alfa'
aniversarios[8].data.dia = 1
aniversarios[8].data.mes = 1
aniversarios[8].data.ano = 1980

aniversarios[9].nome = 'Charlie Beta'
aniversarios[9].data.dia = 1
aniversarios[9].data.mes = 1
aniversarios[9].data.ano = 1980

ordena(aniversarios, cronologica)
print('Ordem Cronológica\n')
for aniversario in aniversarios:
    mostra(aniversario)

ordena(aniversarios, alfabetica)
print('\nOrdem Alfabética\n')
for aniversario in aniversarios:
    mostra(aniversario)

ordena(aniversarios, alfabetica_cronologica)
print('\nOrdem Alfabética/Cronológica\n')
for aniversario in aniversarios:
    mostra(aniversario)
