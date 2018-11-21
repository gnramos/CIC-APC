#  -*- coding: utf-8 -*-
#    @package: 02-main.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de funções que chamam funções.

import subprocess

if __name__ == '__main__':
    # ************
    # * ATENÇÃO! *
    # ************
    # A instrução "call" faz o sistema operacional executar o comando
    # fornecido como argumento, e isto pode ser *MUITO* perigoso.
    comando = 'python ../01-main/01-main.py'
    resultado = subprocess.call(comando, shell=True)
    print('Resultado da execução:', resultado)


# A função "call" (definida em subprocess) é usada no seu programa para
# solicitar que o sistema operacional execute um comando. Neste exemplo, foi
# usada para dizer ao sistema operacional que interprete o programa
# "01-main.py."
#
# Imagine se este programa apagasse todos os seus arquivos, ou enviasse e-mails
# com todos os seus dados pessoais (que deveriam ser privados) ou que fosse um
# ransomware (https://pt.wikipedia.org/wiki/Ransomware) ou pior...
#
# ********************************
# * O ideal é evitar utilizá-la. *
# ********************************