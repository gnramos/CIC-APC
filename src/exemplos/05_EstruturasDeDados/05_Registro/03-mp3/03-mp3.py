# @file: 3-mp3.c
# @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de uso de registro (ID3v1) para armazenar as
# informações de um arquivo no formato MP3. Veja mais em:
# http://en.wikipedia.org/wiki/ID3#ID3v1 */

import struct
import os
import sys

class mp3_ID3v1():

   def __init__(self):
       this.header = ""
       this.titulo = ""
       this.artista = ""
       this.album = ""
       this.ano = ""
       this.comentario = ""
       this.genero  = ""

def tamanho_mp3_ID3v1():
    #Tamanho de cada campo.
    return 3 + 30 + 30 + 30 + 4 + 30 + 1

# Retorna 1 se o arquivo existe, 0 caso contrário. */
def existe_e_pode_abrir(arquivo):
    file = open(arquivo, "rb");
    if(not file.closed):
        file.close()
        return True
    else:
        return False


# Retorna 1 se o registro estiver preenchido corretamente, 0
#  caso contrário.
def valido(id):
    return id.header == "TAG"

# Tenta abrir e ler o arquivo MP3 para preencher um registro
# com as informações (supõe que o arquivo existe). Retorna o
# registro preenchido, se conseguiu abrir, vazio caso
# contrário. */




def le_ID3v1(arquivo):

    file  = open(arquivo, "rb");
    if (not file.closed):
        file.seek(-tamanho_ID3v1(), 2)
        id = fread(tamanho_ID3v1())
        file.close()
    else:
        print ("Erro ao tentar abrir %s.\n" % (arquivo))

    return id

# Exibe as informações do registro na saída padrão. */
def mostra_ID3v1(id):
    print ("Título: %.30s\n" % id.titulo)
    print ("Artista: %.30s\n" % id.artista)
    print ("Album: %.30s\n" %id.album)
    print ("Ano: %.4s\n" % id.ano)

    # segundo a documentação, o comentário pode conter 28 ou 30 caracteres
    if (id.comentario[28] == '\0'):
        print ("Comentário: %.28s\n" % id.comentario)
        print ("Número: %d\n" % id.comentario[29])

    else:
        print ("Comentário: %.30s\n" % id.comentario)

    print ("Gênero: %u\n\n" % id.genero)


# Retorna 1 se o usuário indicar que deseja abrir o arquivo
#   com o programa padrão ('s' ou 'S'), 0 caso contrário. */
def quer_abrir_com(aplicativo):
    printf("Abrir o arquivo com o aplicativo \"%s\"? (S/N)\n" % aplicativo)
    resposta = input()

    if resposta == 's' or resposta == 'S':
        return True
    else:
        return False


# Tenta abrir o arquivo dado com o aplicativo dado,
# retornando o resultado da chamada. */
def abre(arquivo, aplicativo):
    comando = aplicativo + " '" + arquivo + "'"
    return os.system(comando)



# Validação da entrada.

aplicativo = ""
if(len(sys.argv) < 2): # Equivalente a argc
    print ("É preciso passar pelo menos um arquivo MP3 como argumento.\n")
    exit(1)
elif(argc > 2):
    aplicativo = sys.argv[2]

# Verificação da entrada.
arquivo = argv[1];
if(not existe_e_pode_abrir(arquivo)):
    print ("Arquivo \"%s\" não encontrado ou não pode ser lido.\n" % arquivo)
    exit(1)


# Leitura do cabeçalho.
id = le_ID3v1(arquivo)
if(not valido(id)):
    print ("Não foi possível ler cabeçalho arquivo \"%s\".\n" % arquivo)
    exit(1)


mostra_ID3v1(id);

# "Bônus"
if(aplicativo != "" and quer_abrir_com(aplicativo)):
    if(abre(arquivo, aplicativo)):
        print ("Erro ao tentar abrir o arquivo \"%s\" com o aplicativo \"%s\".\n" %( arquivo, argv[2]))

