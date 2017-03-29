#  -*- coding: utf-8 -*-
#    @package: 01-multiplos.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de uso de registros.

class Data():
    def __init__(self):
        dia, mes, ano = 0, 0, 0

# Composição por múltiplos registros.
class Aniversario():
    def __init__(self):
        nome = ''
        data = Data()


def mostra_data(data):
    print('%02d/%02d/%04d' % (data.dia, data.mes, data.ano))


def mostra(aniversario):
    print('%s:' % aniversario.nome)
    mostra_data(aniversario.data)


def le_data():
    data = Data()
    data.ano = int(input('Digite o ano: '))
    data.mes = int(input('Digite o mês: '))
    data.dia = int(input('Digite o dia: '))
    return data


def le_aniversario():
    aniversario = Aniversario()
    aniversario.nome = input('Digite o nome: ')
    aniversario.data = le_data()
    return aniversario


def valida(data):
    if 1 > data.dia or data.dia > 31:  # correto?
        print('Dia %d inválido.' % data.dia)

    if 1 > data.mes or data.mes > 12:
        print('Mes %d inválido.' % data.mes)

    if 0 > data.ano:  # correto?
        print('Ano %d inválido.' % data.ano)


# Vetor de registros.
aniversarios = []

for _ in range(5):
    aniversario = le_aniversario()
    valida(aniversario.data)
    mostra(aniversario)

    aniversarios.append(aniversario)
