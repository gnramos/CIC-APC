Exercício: STRNCMP
==================


Problema
--------

Implemente a função _strncmp_ nas linguagens C ou Python, que receba duas _strings_ e o número _n_ de caracteres que deverão ser comparados. A função deve retornar um inteiro indicando o resultado da comparação lexicográfica entre os _n_ caracteres dessas duas strings, segundo os mesmos critérios do exercício `02-strcmp`.


Entrada
-------

A entrada consiste em 3 linhas, as duas primeiras possuem uma _string_ cada, e a terceira contém o número inteiro _n_ de caracteres de cada _string_ que devem ser levados em consideração na comparação.


Saída
-----

O programa deverá imprimir na saída padrão, respectivamente: os _n_ caracteres da primeira _string_;`<` caso o resultado da comparação seja `-1`, `==` caso o resultado seja `0`, `>` caso o resultado seja `1`; os _n_ caracteres da segunda _string_. 


Exemplo(s)
----------

| Entrada		     | Saída            |
|--------------------|------------------|
| iguais             | iguais == iguais |
| iguais, só que não |                  |
| 6                  |                  |

| Entrada		     | Saída            |
|--------------------|------------------|
| iguais             | ==               |
| iguais, só que não |                  |
| 0                  |                  |

| Entrada		     | Saída                           |
|--------------------|---------------------------------|
| iguais             | iguais < iguais, só que não     |
| iguais, só que não |                                 |
| 18                 |                                 |