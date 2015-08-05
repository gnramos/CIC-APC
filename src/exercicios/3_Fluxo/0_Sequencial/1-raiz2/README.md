Exercício: Raiz Quadrada (v1)
=============================


Problema
--------

Faça um programa que tenta aproximar o valor da raiz quadrada de um número inteiro n qualquer, a partir de uma estimativa inicial r. O algoritmo deve seguir os seguintes passos:

1. Leia o número inteiro n (do qual se quer a raiz)
2. Leia o valor inicial de r (a estimativa da raiz)
3. Mostre os valores de r^2 e n
4. Incremente r
5. Mostre os valores de r^2 e n
6. Incremente r
7. Mostre os valores de r^2 e n


Entrada
-------

A entrada é composta de um valor inteiro n > 0, seguido de outro valor inteiro r >= 0.


Saída
-----

A saída deve ser a exibição dos valores de "r" e de "n" para visualização da comparação.


Exemplo(s)
----------

| Entrada | Saída          |
|---------|----------------|
| 4       | r^2 = 0, n = 4 |
| 0       | r^2 = 1, n = 4 |
|         | r^2 = 4, n = 4 |


| Entrada | Saída          |
|---------|----------------|
| 4       | r^2 = 1, n = 4 |
| 1       | r^2 = 4, n = 4 |
|         | r^2 = 9, n = 4 |


| Entrada | Saída            |
|---------|------------------|
| 25      |  r^2 = 1, n = 25 |
| 1       |  r^2 = 4, n = 25 |
|         |  r^2 = 9, n = 25 |


| Entrada | Saída            |
|---------|------------------|
| 25      | r^2 = 4, n = 25  |
| 2       | r^2 = 9, n = 25  |
|         | r^2 = 16, n = 25 |


| Entrada | Saída             |
|---------|-------------------|
| 25      |  r^2 = 9, n = 25  |
| 3       |  r^2 = 16, n = 25 |
|         |  r^2 = 25, n = 25 |
