#  -*- coding: utf-8 -*-
#    @package: 03-texto.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de leitura de um arquivo texto e escrita em outro
# arquivo.


import sys


def copia(arquivo):
    '''Cria um arquivo como cópia do arquivo de nome dado como argumento.
    Retorna True caso seja possível, False caso contrário.
    '''
    try:
        with open(arquivo, 'r') as f:
            conteudo_original = f.read()

        backup = 'copia_de_' + arquivo
        with open(backup, 'w') as f:
            f.write('#  -*- coding: utf-8 -*-\n'
                    '#    @package: ' + backup + '\n'
                    '#     @author: [gerado automaticamente]\n'
                    '# @disciplina: Algoritmos e Programação de Computadores\n'
                    '#\n'
                    '# Exemplo de manipulação de arquivos. Este arquivo foi\n'
                    '# gerado a partir de \'' + arquivo + '\'.\n\n')
            f.write(conteudo_original)
        return True
    except:
        print('Erro!')
        return False


if __name__ == '__main__':
    if len(sys.argv) < 2:
        print('É preciso fornecer um arquivo texto como argumento.')
        exit(1)

    if not copia(sys.argv[1]):
        print('Houve um erro ao tentar copiar \'%s\'' % sys.argv[1])
