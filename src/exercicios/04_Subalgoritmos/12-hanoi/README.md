Exercício: As Torres de Hanoi
=============================


Problema
--------

O deus Brahma supostamente criou uma torre com 64 discos de ouro e mais duas estacas equilibradas sobre uma plataforma, e ordenou que movessem todos os discos de uma estaca para outra. Mas:

* apenas um disco pode ser movido por vez;
* cada disco só pode ser movido de uma estaca para outra;
* nunca um disco maior pode ser posto sobre um disco menor.


Implemente a função `hanoi`, que resolve o problema o problema das Torres de Hanoi. A função deve receber como argumentos a quantidade de discos a serem movidos, e as torres de origem, destino e auxiliar.

Entrada
-------

A entrada consiste de um número inteiro positivo _n > 1_, indicando quantos discos compõem a torre.

Saída
-----

A saída é a sequência de movimentações de discos necessárias para mover todos os discos da torre _A_ para a torre _C_, utilizando a torre _B_ para auxiliar o processo, uma por linha. É composta por uma série de linhas com a informação _O -> D_, onde _O_ representa a torre de origem do disco e _D_ a torre destino.


Exemplo(s)
----------

| Entrada | Saída  |
|---------|--------|
| 2       | A -> B |
|         | A -> C |
|         | B -> C |

| Entrada | Saída  |
|---------|--------|
| 3       | A -> C |
|         | A -> B |
|         | C -> B |
|         | A -> C |
|         | B -> A |
|         | B -> C |
|         | A -> C |
