#  -*- coding: utf-8 -*-
##   @package: 03-print.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de uso da função de saída de dados.


# Ponto de entrada do programa (1a instrução)

print('2 + 2 = ' + str(5))

# Esta instrução é composta por diversos componentes:
#
#            Elemento | Descrição
# --------------------+--------------------------------------------------------
#               print | função que envia o comando 'escreva na saída padrão'
# --------------------+--------------------------------------------------------
#                  () | os parênteses delimitam as informações passadas a
#                     | função "print"
# --------------------+--------------------------------------------------------
# '2 + 2 = ' + str(5) | a informação a ser escrita na saída padrão, que pode
#                     | ser decomposta em:
#                     |
#                  '' | as aspas delimitam o texto a ser escrito
#                     |
#            2 + 2 =  | conteúdo do texto
#                     |
#                   + | concatena strings
#                     |
#              str(5) | retorna o argumento (5) como string

# Outros exemplos:
print('2 + ' + str(2) + ' = 5')
print('2 + ' + str(2) + ' = ' + str(5))
print('Agora, uma letra: ' + str('a'))
print('Agora, duas letra' + 's' + ':', 'b')
print('E ' + str(1) + ' de cada tipo: ' + str('c'))
print('Ou ' + str(2) + ' de cada tipo:' + \
      '\n\tQuer ' + str(1) + ' café(s)? (' + 'S' + '/' + 'N' + ')')
      # a barra invertida (\)  indica que a instrução continua na próxima linha
