#  -*- coding: utf-8 -*-
##   @package: 00-data.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de uso de registros. Em linguagens orientadas a objetos, um registro
# é um tipo especial de "classe" - um dos principais conceitos do paradigma de
# Orientação a Objetos.
# (http://pt.wikipedia.org/wiki/Orienta%C3%A7%C3%A3o_a_objetos)


# Definição do registro:
class Data():
    # Função de inicialização de valores, é executada sempre que uma nova
    # instância é criada.
    def __init__(self):
        dia, mes, ano = 0, 0, 0  # Armazenam a "data" em si.
        descricao = ''           # Armazenam uma descrição da data.


data = Data()  # Como um registro não é um tipo primitivo, é preciso declarar a
               # variável como tal. A instrução "Data()" cria uma nova
               # instância.


data.descricao = input('Digite a descrição: ')  # Armazene a informação lida da
                                                # entrada padrão no espaço
                                                # identificado como "descricao"
                                                # dentro da variável "data"
                                                # (registro).

data.ano = int(input('Digite o ano: '))  # Armazene a informação lida da
                                         # entrada padrão no espaço
                                         # identificado como "ano" dentro da
                                         # variável "data" (registro).

data.mes = int(input('Digite o mês: '))  # Armazene a informação lida da
                                         # entrada padrão no espaço
                                         # identificado como "mes" dentro da
                                         # variável "data" (registro).


data.dia = int(input('Digite o dia: '))  # Armazene a informação lida da
                                         # entrada padrão no espaço
                                         # identificado como "dia" dentro da
                                         # variável "data" (registro).


# Acesse as informações armazenadas e mostre-as.
print('%s:\n%02d/%02d/%04d\n' % (data.descricao,
                                 data.dia,
                                 data.mes,
                                 data.ano))
