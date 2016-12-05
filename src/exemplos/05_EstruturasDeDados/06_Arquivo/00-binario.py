#  -*- coding: utf-8 -*-
#      @file: 0-binario.py
#     @author: Gabriel O. Taumaturgo
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de leitura e escrita em arquivo binário. */



import struct

def tamanho_string():
    return 50

# /* Cria um arquivo com o nome dado como argumento. Retorna
#  * EXIT_SUCCESS caso seja possível, EXIT_FAILURE caso
#  * contrário. */
def cria(arquivo):

    str = bytearray('Algoritmos e Programacao de Computadores'.ljust(tamanho_string(), " "), 'utf8') # preencha com espaços até que tenha 50 caracteres
    d = bytearray(struct.pack("d", 12.23))
    i = bytearray(struct.pack("i", 101))
      # O que acontece se não for possível abrir o arquivo? (ele
      # não existe, você não tem permissão para tanto, alguém já
      # o está manipulando, etc.)
    file = open(arquivo, "wb") # "b" de "binário"...

    #  É fácil verificar: se for possível abrir o arquivo,
    # o arquivo não está fechado após a abertura.
    if(file.closed):
        print ("Não foi possível abrir \"%s\".\n" % arquivo)
        return False

    # Escreve no arquivo na ordem: string -> real -> inteiro.
    file.write(str)
    file.write(d)
    file.write(i)

    # O programador é responsável pelo arquivo. */
    file.close()

    return True


    # Mostra na saída padrão o conteúdo do arquivo dado como argumento. */
def mostra(arquivo):
  file = open(arquivo, "rb")

  if(file.closed):
      exit(1) # encerre o programa com código de erro 1

  # Lê do arquivo na ordem: string -> real -> inteiro. É essencial que seja
  # a mesma ordem em que foi escrito, pois as informações estarão incorretas
  # caso contrário.

  str = file.read(tamanho_string()) #  tem de ser do tamanho certo!
  d = struct.unpack("d",file.read(8))
  i = struct.unpack("i",file.read(4))
  file.close()

  print ("string = %s\n" % str)
  print ("double = %lf\n" % d)
  print ("int = %d\n" % i)


# Mostra na saída padrão o conteúdo do arquivo dado como argumento, mas lê as
# informações em ordem diferente da que foi escrita. */
def mostra_errado(arquivo):
  file = open(arquivo, "rb");

  if(file.closed):
      exit(1)

  # Lê do arquivo na ordem: inteiro -> real -> string.
  i = struct.unpack("i",file.read(4))[0]
  d = struct.unpack("d",file.read(8))[0]
  str = struct.unpack("50s", file.read(tamanho_string()))[0] #  tem de ser do tamanho certo!
  file.close()

  print ("string = %s\n" % str)
  print ("double = %lf\n" % d)
  print ("int = %d\n" % i)


arquivo = "apc.bin"

if(cria(arquivo)):
    print ("Leitura correta:\n")
    mostra(arquivo)
    print ("\nLeitura incorreta:\n")
    mostra_errado(arquivo)

