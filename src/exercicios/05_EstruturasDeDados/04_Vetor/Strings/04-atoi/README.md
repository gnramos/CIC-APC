Exercício: ATOI
===============


Problema
--------

A comunicação de dados geralmente é feita por meio de símbolos, mas nem sempre é o que se deseja: muitas vezes é preciso lidar com valores _numéricos_. Elabore um programa que transforme uma sequência de símbolos ASCII em seu valor numérico inteiro equivalente, e realize a operação dada.

É claro que é trivial fazer isso utilizando a função [atoi](http://www.cplusplus.com/reference/cstdlib/atoi/), mas a ideia aqui é praticar suas habilidades de manipulação de dados.


Entrada
-------

A entrada consiste de um sequência de caracteres _N_ e _M_, todos representando dígitos, separados por um operador matemático. A entrada termina com a operação `0 + 0`, que não deve ser processada. Assuma que nunca haverá uma divisão por zero.


Saída
-----

A saída consiste em um linha para cada operação, indicando o valor resultante desta.


Exemplo(s)
----------

| Entrada      | Saída  |
|--------------|--------|
| 2 * 98653    | 197306 |
| 3 * 8        | 24     |
| 40874 * 2    | 81748  |
| 05176 / 717  |  7     |
| 802 + 41898  | 42700  |
| 3069 / 37    | 82     |
| 576 - 369    | 207    |
| 0 + 9        | 9      |
| 10487 / 32   | 327    |
| 26344 - 1155 | 25189  |
| 32 * 498     | 15936  |
| 0 + 0        |        |

| Entrada      | Saída    |
|--------------|----------|
| 8212 + 62736 | 70948    |
| 917 + 3      | 920      |
| 7 + 75631    | 75638    |
| 7 - 2        | 5        |
| 9029 * 1287  | 11620323 |
| 77 - 2       | 75       |
| 67373 + 7518 | 74891    |
| 46 / 55      | 0        |
| 468 * 15187  | 7107516  |
| 8 - 75       | -67      |
| 8 + 419      | 427      |
| 18 * 53      | 954      |
| 5 * 91837    | 459185   |
| 0 + 0        |          |