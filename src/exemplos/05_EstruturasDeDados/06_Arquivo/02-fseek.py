#  -*- coding: utf-8 -*-
#    @package: 02-fseek.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo da utilização da função seek.


if __name__ == '__main__':
    arquivo = 'apc.python.bin'

    string = 'Disse o corvo, \'Nunca mais\'.\n'

    try:
        with open(arquivo, 'wb') as f:
            f.write(string)
            f.seek(16, 0)
            f.write('Chega')

            # O que você espera que tenha acontecido? Abra o arquivo gerado e
            # confira...
    except:
        print('Não foi possível abrir \'%s\'.\n' % arquivo)
        exit(1)
