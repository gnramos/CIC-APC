#  -*- coding: utf-8 -*-
#    @package: 11-main.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de manipulação do valor de retorno de programas.

import subprocess

# ************
# * ATENÇÃO! *
# ************
# A instrução "call" faz o sistema operacional executar o comando
# fornecido como argumento, e isto pode ser *MUITO* perigoso.
print(subprocess.call('python 10-main.py 1 2 3', shell=True))


# A função "call" (definida em subprocess) é usada no seu programa para
# solicitar que o sistema operacional execute um comando. Neste exemplo, foi
# usada para dizer ao sistema operacional que interprete o programa
# "10-main.py."
#
# Imagine se este programa apagasse todos os seus arquivos, ou enviasse e-mails
# com todos os seus dados pessoais (que deveriam ser privados) ou que fosse um
# ransomware (https://pt.wikipedia.org/wiki/Ransomware) ou pior...
#
# ********************************
# * O ideal é evitar utilizá-la. *
# ********************************
