Exercício: STRCMP
=================


Problema
--------

A comparação lexicográfica é uma operação realizada para dizer se dois textos são iguais ou então qual deles é maior, de acordo com algum padrão de codificação de caracteres. Implemente a função _strcmp_ nas linguagens C ou Python, que receba duas _strings_ e retorne um inteiro indicando o resultado da comparação entre elas.


Entrada
-------

A entrada consiste em duas linhas, cada contendo uma _string_.


Saída
-----

A saída deverá ser -1, caso a primeira _string_ seja menor que a segunda, 0 se forem iguais, ou 1 se a primeira for maior que a segunda.


Exemplo(s)
----------

| Entrada            | Saída              |
|--------------------|--------------------|
| aaaaaaa            | -1                 |
| bbbbbbb            |                    |

| Entrada            | Saída              |
|--------------------|--------------------|
| aaaaaaa            | 0                  |
| aaaaaaa            |                    |

| Entrada            | Saída              |
|--------------------|--------------------|
| bbbbbbb            | 1                  |
| b                  |                    |
