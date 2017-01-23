#  -*- coding: utf-8 -*-
#    @package: 00-binario.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de leitura e escrita em arquivo binário.


import struct


def cria(arquivo):
    '''Cria um arquivo com o nome dado como argumento.
    Retorna True caso seja possível, False caso contrário.
    '''
    msg = 'Algoritmos e Programacao de Computadores'
    d = 12.23
    i = 101

    # O que acontece se não for possível abrir o arquivo?
    # (ele não existe, você não tem permissão para tanto,
    # alguém já o está manipulando, etc.)
    f = open(arquivo, 'wb')  # 'b' de 'binário'...

    # É fácil verificar: se for possível abrir o arquivo,
    # o arquivo não está fechado após a abertura.
    if(f.closed):
        print('Não foi possível abrir \'%s\'.' % arquivo)
        return False

    # Escreve no arquivo na ordem: string -> real -> inteiro.
    f.write(struct.pack('50s', msg.encode('ASCII')))
    f.write(struct.pack('d', d))
    f.write(struct.pack('i', i))

    # O programador é responsável pelo arquivo.
    f.close()

    return True


def mostra(arquivo):
    '''Mostra na saída padrão o conteúdo do arquivo dado como argumento.'''

    # Em Python, a forma recomendada de se manipular um arquivo é usando
    # 'with'. Caso ocorra algum erro, é preciso tratá-lo. O erro é indicado por
    # uma exceção, portanto o tratamento envolve try/except.
    try:
        with open(arquivo, 'rb') as f:
            # Lê do arquivo na ordem: string -> real -> inteiro. É essencial
            # que seja a mesma ordem em que foi escrito, pois as informações
            # estarão incorretas caso contrário.
            msg = f.read(50)  # tem de ser do tamanho certo!
            d = struct.unpack('d', f.read(8))
            i = struct.unpack('i', f.read(4))

            print('string = %s' % msg.decode('ASCII'))
            print('double = %lf' % d)
            print('int = %d' % i)
    except:
        print('Erro ao manipular o arquivo \'' + arquivo + '\'.')
        exit(1)  # encerre o programa com código de erro 1


def mostra_errado(arquivo):
    '''Mostra na saída padrão o conteúdo do arquivo dado como argumento, mas
    lê as informações em ordem diferente da que foi escrita.
    '''
    try:
        with open(arquivo, 'rb') as f:
            # Lê do arquivo na ordem: inteiro -> real -> string.
            i = struct.unpack('i', f.read(4))
            d = struct.unpack('d', f.read(8))
            msg = f.read(50)  # tem de ser do tamanho certo!

            # print('string = %s' % msg.decode('ASCII'))
            print('string = %s' % msg)  # A decodificação resulta em erro!
            print('double = %lf' % d)
            print('int = %d' % i)
    except:
        exit(1)  # encerre o programa com código de erro 1


if __name__ == '__main__':
    arquivo = 'apc.python.bin'

    if cria(arquivo):
        print('Leitura correta:')
        mostra(arquivo)
        print('\nLeitura incorreta:')
        mostra_errado(arquivo)
