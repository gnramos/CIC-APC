Exercício: STRNCMP
==================


Problema
--------

A comparação de _strings_ é um problema bastante comum, e pode ser limitado a uma quantidade de caracteres de interesse. Implemente a função `strncmp`, conforme especificada no arquivo de código.


Entrada
-------

A entrada consiste em 3 linhas, as duas primeiras possuem um _string_ cada (máximo de 100 caracteres), e a terceira contém o número inteiro _n_ de caracteres (0 <= n <= 100) que devem ser considerados na comparação.


Saída
-----

Para cada entrada, a saída é composta por: "n_string1 ? n_string2", onde _n_string1_ e _n_string2_ são, respectivamente, os até _n_ primeiros caracteres dos primeiro e segundo strings, e _?_ representa a relação entre eles, podendo ser uma das seguintes três opções: `<` caso os _n_ caracteres iniciais do primeiro string sejam lexicograficamente menores que os _n_ caracteres iniciais do segundo, `>` caso sejam maiores; ou `==` se forem iguais.


Exemplo(s)
----------

| Entrada		         | Saída            |
|--------------------|------------------|
| iguais             | iguais == iguais |
| iguais, só que não |                  |
| 6                  |                  |

| Entrada		         | Saída            |
|--------------------|------------------|
| iguais             | ==               |
| iguais, só que não |                  |
| 0                  |                  |

| Entrada		         | Saída                           |
|--------------------|---------------------------------|
| iguais             | iguais < iguais, só que não     |
| iguais, só que não |                                 |
| 18                 |                                 |
