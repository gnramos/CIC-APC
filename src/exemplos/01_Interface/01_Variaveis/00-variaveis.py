#  -*- coding: utf-8 -*-
##   @package: 00-variaveis.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo do uso de variáveis.


# Variáveis simplesmente identificam um espaço de memória que o programa pode
# manipular (alterar). Em Python, cada variável tem um tipo específico que
# determina o espaço a ser ocupado (quantidade de bits - diretamente
# associada a quantidade de informação que pode ser armazenada) e como
# interpretar e manipular a informação armazenada.
#
# Existem regras para nomear variáveis, tanto de sintaticamente quanto
# semanticamente. E também existem 'diretrizes' de boas práticas:
#  - https://www.python.org/dev/peps/pep-0008/#naming-conventions
#  - http://wiki.python.org.br/GuiaDeEstilo
#
# Ao identificar sua variável, tente usar um termo que indique claramente a
# utilidade desta no contexto de seu programa.

# Não é preciso declarar o tipo da variável em Python, o interpretador obtém a
# informação necessária ao atribuir o valor inicial.

# Variáveis inteiras:
idade = 0
contador1 = 0
contador_2 = 0

# Variáveis reais:
juros_ao_mes = 1.15
taxa_de_aprovacao = 0.75

# Variáveis simbólicas:
sexo = 'M'
resposta = 'N'
nome = 'Alan M. Turing'
email = 'turing@unb.??'  # ?? para evitar spam...

# Variáveis booleanas
domina_a_linguagem = False
vai_estudar = True

print('1a versão:')
print('idade              =', idade)
print('contador1          =', contador1)
print('contador_2         =', contador_2)
print('juros_ao_mes       =', juros_ao_mes)
print('taxa_de_aprovacao  =', taxa_de_aprovacao)
print('sexo               =', sexo)
print('resposta           =', resposta)
print('nome               =', nome)
print('email              =', email)
print('domina_a_linguagem =', domina_a_linguagem)
print('vai_estudar        =', vai_estudar)

# A informação armazenada em uma variável pode 'variar', e esta atualização
# permite que se realize as mais diversas tarefas.

idade = 20
contador1 = 1
contador_2 = 2
juros_ao_mes = 0.05
taxa_de_aprovacao = 1
sexo = 'F'
resposta = 'S'
nome = 'John Von Neumann'
email = 'john@unb.??'
domina_a_linguagem = True
vai_estudar = False

# Verificando as alterações:
print('2a versão:')
print('idade              =', idade)
print('contador1          =', contador1)
print('contador_2         =', contador_2)
print('juros_ao_mes       =', juros_ao_mes)
print('taxa_de_aprovacao  =', taxa_de_aprovacao)
print('sexo               =', sexo)
print('resposta           =', resposta)
print('nome               =', nome)
print('email              =', email)
print('domina_a_linguagem =', domina_a_linguagem)
print('vai_estudar        =', vai_estudar)

# As alterações podem ser feitas quantas vezes forem necessárias.

idade = 18
contador1 = 10
contador_2 = 200000
juros_ao_mes = 0
taxa_de_aprovacao = 0
sexo = '?'
resposta = '?'
nome = 'Donald E. Knuth'
email = 'knuth@jedi.???'
domina_a_linguagem = False
vai_estudar = True

# Verificando as alterações:
print('3a versão:')
print('idade              = [%d]' % idade)
print('contador1          = [%d]' % contador1)
print('contador_2         = [%d]' % contador_2)
print('juros_ao_mes       = [%f]' % juros_ao_mes)
print('taxa_de_aprovacao  = [%f]' % taxa_de_aprovacao)
print('sexo               = [%c]' % sexo)
print('resposta           = [%c]' % resposta)
print('nome               = [%s]' % nome)
print('email              = [%s]' % email)
print('domina_a_linguagem = [%s] = [%i]' % (domina_a_linguagem, domina_a_linguagem))
print('vai_estudar        = [%s] = [%i]' % (vai_estudar, vai_estudar))
