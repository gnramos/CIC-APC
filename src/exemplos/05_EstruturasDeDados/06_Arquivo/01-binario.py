#  -*- coding: utf-8 -*-
#    @package: 01-binario.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de leitura e escrita em arquivo binário.


import struct


LETRAS = 26  # Valor constante global.
NUMEROS = 12  # Valor constante global.


def cria(arquivo):
    '''Cria um arquivo com o nome dado como argumento. Retorna True caso seja
    possível, False caso contrário.
    '''
    string = 'abcdefghijklmnopqrstuvwxyz'

    try:
        with open(arquivo, 'wb') as f:
            # Escreve string em bloco.
            f.write(struct.pack('26s', string.encode('ASCII')))

            # Escreve números, um de cada vez.
            for i in range(1, NUMEROS + 1):
                f.write(struct.pack('i', i))

            return True
    except:
        print('Não foi possível abrir \'%s\'.\n' % arquivo)
        return False


def mostra(arquivo):
    '''Mostra na saída padrão o conteúdo do arquivo dado como argumento.'''
    try:
        with open(arquivo, 'rb') as f:
            # Lê um caractere de cada vez, +1 para o caractere de terminação do
            # string.
            string = ''
            for i in range(LETRAS):
                string += f.read(1).decode('ASCII')
            print('string: ' + string)

            # Sabendo que o tamanho padrão de um inteiro (escrito no arquivo
            # com struct.pack('i', i), é possível ler em bloco com o comando:
            # f.read(4*NUMEROS)
            #
            # Mas isso resulta em um string binário que precisa ser processado.
            # Uma alternativa mais simples é ler de um em um:
            numeros = [struct.unpack('i', f.read(4))[0] for _ in range(NUMEROS)]
            print('numeros:', numeros)
    except:
        print('Não foi possível abrir \'%s\'.\n' % arquivo)


if __name__ == '__main__':
    arquivo = 'apc.python.bin'

    if cria(arquivo):
        mostra(arquivo)
