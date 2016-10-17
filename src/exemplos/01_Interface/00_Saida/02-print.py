#  -*- coding: utf-8 -*-
#       @file: 2-print.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de uso da função de saída de dados.


# Ponto de entrada do programa (1a instrução)

print '2 + 2 =', 5

# Esta instrução é composta por diversos componentes:
#
#     Elemento | Descrição
# -------------+------------------------------------------------------------
#        print | função que envia o comando 'escreva na saída padrão'
# -------------+------------------------------------------------------------
# '2 + 2 =', 5 | a informação a ser escrita na saída padrão, que pode ser
#              | decomposta em:
#              |
#           '' | as aspas delimitam o texto a ser escrito
#              |
#      2 + 2 = | conteúdo do texto
#              |
#            , | separa os argumentos da função, que serão todos escritos em
#              | sequência, separados por espaços
#              |
#            5 | o valor a ser escrito

# Outros exemplos:
print '2 +', 2, '= 5'
print '2 +', 2, '=', 5
print 'Agora, uma letra:', 'a'
print 'Agora, dois símbolo', 's', '.'  # 'símbolo s .' ? (precisa-se de tantos
print 'E', 1, 'de cada tipo:', 'c'     # espaços?
