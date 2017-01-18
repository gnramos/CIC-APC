#  -*- coding: utf-8 -*-
#    @package: 03-texto.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de leitura e escrita em arquivo texto.


def cria(arquivo):
    '''Cria um arquivo com o nome dado como argumento. Retorna True caso seja
    possível, False caso contrário.
    '''

    try:
        with open(arquivo, 'w') as f:
            string = 'Algoritmos e Programação de Computadores'
            d = 12.23
            i = 101

            f.write('%s\n%lf\n\t%d' % (string, d, i))

            return True
    except:
        print('Não foi possível abrir \'%s\'.\n' % arquivo)
        return False


def mostra(arquivo):
    '''Mostra na saída padrão o conteúdo do arquivo dado como argumento.'''

    try:
        with open(arquivo, 'r') as f:
            string = f.readline()
            print('string = %s' % string)
            string = f.readline()
            print('string = %s' % string)
            string = f.readline()
            print('string = %s' % string)
    except:
        pass


def mostra_formatado(arquivo):
    '''Mostra na saída padrão o conteúdo do arquivo dado como argumento
    conforme os tipos.
    '''
    try:
        with open(arquivo, 'r') as f:
            # Lê do arquivo na ordem: string -> real -> inteiro. É essencial
            # que seja a mesma ordem em que foi escrito, pois as informações
            # estarão incorretas caso contrário.
            string = f.readline()
            d = float(f.readline())
            i = int(f.readline())
            print('string = %s' % string)
            print('double = %s' % d)
            print('   int = %s' % i)
    except:
        pass


def mostra_errado(arquivo):
    '''Mostra na saída padrão o conteúdo do arquivo dado como argumento, mas lê
    as informações em ordem diferente da que foi escrita.
    '''
    try:
        with open(arquivo, 'r') as f:
            i = int(f.readline())
            d = float(f.readline())
            string = f.readline()
            print('string = %s' % string)
            print('double = %s' % d)
            print('   int = %s' % i)
    except Exception as e:
        print('Erro!')
        print(e)


if __name__ == '__main__':
    arquivo = 'apc.python.txt'

    if cria(arquivo):
        print('Leitura correta:')
        mostra(arquivo)
        print('\nLeitura correta com formatação:')
        mostra_formatado(arquivo)
        print('\nLeitura incorreta:')
        mostra_errado(arquivo)
