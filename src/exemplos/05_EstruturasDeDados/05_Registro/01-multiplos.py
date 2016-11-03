#  -*- coding: utf-8 -*-
##   @package: 01-multiplos.py
#     @author: Ga(briel O. Taumaturgo
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de uso de registros. Em linguagens orientadas a objetos, um registro
# é um tipo especial de "classe" - um dos principais conceitos do paradigma de
# Orientação a Objetos.
# (http://pt.wikipedia.org/wiki/Orienta%C3%A7%C3%A3o_a_objetos)


# Definição do registro:
class Data():
	def __init__(self):
		self.dia, self.mes, self.ano = 0, 0, 0  # Armazenam "data" em si.

class Aniversario():

	def __init__(self):
		self.data = Data() # Aniversario é uma data atrelada a um aniversariante.
		self.nome = ""


def le_data():
	data = Data()
	data.ano = int(input("Digite o ano:"))
	data.mes = int(input("Digite o mes:"))
	data.dia = int(input("Digite o dia:"))
	return data

def valida(data):
    if 1 > data.dia or data.dia > 31:  # correto? 
        print ("Dia %d inválido.\n" % (data.dia))

    if 1 > data.mes or data.mes > 12:
        print ("Mes %d inválido.\n" % (data.mes))

    if 0 > data.ano: # correto?
        print ("Ano %d inválido.\n" % (data.ano))


def mostra(aniversario):
	print("Aniversariante %s:\n%02d/%02d/%04d\n" % (aniversario.nome , 	# Acesse as informações dentro de aniversário        
                                  aniversario.data.dia, 	# Acesse as informações de data que estão dentro de aniversário
                                  aniversario.data.mes, 	
                                  aniversario.data.ano))	



def le_aniversario():
	aniversario = Aniversario()
	aniversario.data = le_data()	#Modularizando corretamente o código, você pode reutilizá-lo.
	aniversario.nome = input("Digite o nome do aniversariante:")
	return aniversario;


#inicializa aniversarios
aniversarios = [Aniversario() for i in range(5)]




for i in range(5):
	aniversarios[i] = le_aniversario()
	valida(aniversarios[i].data)
	mostra(aniversarios[i])

