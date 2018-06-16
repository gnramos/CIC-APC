Exercício: ZIP
==================


Problema
--------

A compressão é o ato de reduzir o espaço ocupado por dados num determinado dispositivo. Esse procedimento é extremamente útil para otimizar o armazenamento e transmissão de arquivos e dados, e há vários algoritmos para tal, sendo um deles a eliminação de redundâncias.

Implemente a função _zip_ na linguagem C, que recebe uma cadeia de caracteres e, para cada um que possua adjacentes iguais a ele, imprima o número de repetições e apenas uma cópia do caracter.


Entrada
-------

A entrada consiste em uma linha contendo um conjunto de caracteres.


Saída
-----

A saída consiste no conjunto de caracteres comprimido, de tal forma que para cada caractere da entrada que possua adjacentes iguais a ele, sejam impressos o número de repetições e apenas uma cópia do caracter. Caso naquela ocorrência não haja repetições, imprima apenas o caractere sem o número.


Exemplo(s)
----------

| Entrada		     | Saída         |
|--------------------|---------------|
| $$$$###@@!         | 4$3#2@!       |
| YYYYYYXXXWWWWXXXXX | 6Y3X4W5X      |
| ABCDEFGHIJKLLL     | ABCDEFGHIJK3L |