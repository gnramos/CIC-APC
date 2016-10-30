#Python sempre realiza passagem por referência, não há nenhuma exceção. 
#Qualquer atribuição significa copiar o valor da referência.
#Exemplo:

#Inicializa matriz uma matriz m de dimensões 5x5.
m = [[0.0 for j in range(5)] for i in range(5)]

#imprima todas as linhas de m
for line in m:
  print line

  
#Copiamos a referência de m  para n
n = m

#modificamos um elemento da matriz n
n[0][0] = 1.0

#Há mudanças nos valores de m também. 
for line in m:
  print line

#Como seria uma forma correta de copiar todos os valores para uma outra matriz?
