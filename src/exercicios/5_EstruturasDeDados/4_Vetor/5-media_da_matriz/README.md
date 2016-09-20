Exercício: Média da Matriz
==========================


Problema
--------

Implemente um algoritmo que leia as dimensões N x M de uma matriz de valores reais, calcule a média de cada linha e a média geral da matriz.



Entrada
-------

A entrada consiste de 2 + N Linhas, A primeira contém o valor N, a segunda M, as outras N linhas contém M valores reais cada.

 0 <= N, M <= 100

Saída
-----

A saída são N + 1 Linhas, sendo as N primeiras as médias de cada linhas e a última a média da matriz.

Exemplo(s)
----------

| Entrada | Saída |
|---------|-------|
| 1       | 1.0   |
| 1       | 1.0   |
| 1.0     |       |

| Entrada     | Saída  |
|-------------|--------|
| 2           | 2.0    |
| 3           | 5.0    |
| 1.0 2.0 3.0 | 3.5    |
| 4.0 5.0 6.0 |        |

| Entrada            | Saída  |
|--------------------|--------|
| 4                  | 3.0    |
| 4                  | 6.0    |
| 1.0 2.0 3.0 6.0    | 7.25   |
| 4.0 5.0 6.0 9.0    | 9.0    |
| 3.0 7.0 9.0 10.0   | 6.3    |
| 10.0 12.0 14.0 0.0 |        |
