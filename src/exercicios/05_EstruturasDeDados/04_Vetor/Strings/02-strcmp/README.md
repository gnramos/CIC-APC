Exercício: STRCMP
=================


Problema
--------

A comparação lexicográfica é uma operação realizada para dizer se dois textos são iguais ou então qual deles é maior, de acordo com algum padrão de codificação de caracteres. Implemente a função `strcmp`, conforme especificado no arquivo de código.


Entrada
-------

A entrada consiste em duas linhas, cada contendo um _string_ composto apenas por caracteres do alfabeto e com no máximo 1000 caracteres.


Saída
-----

A saída deverá ser -1, caso o primeiro _string_ seja menor que o segundo, 0 se forem iguais, ou 1 se o primeiro for maior que o segundo.


Exemplo(s)
----------

| Entrada | Saída |
|---------|-------|
| aaaaaaa | -1    |
| bbbbbbb |       |

| Entrada | Saída |
|---------|-------|
| aaaaaaa | 0     |
| aaaaaaa |       |

| Entrada | Saída |
|---------|-------|
| bbbbbbb | 1     |
| b       |       |
