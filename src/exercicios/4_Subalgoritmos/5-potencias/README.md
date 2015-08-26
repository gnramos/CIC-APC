Exercício: Potências
====================


Problema
--------

É simples implementar uma função que compute o resultado de se elevar um número _b_ a uma potência _p_. Basta repetir _p_ multiplicaçõe de _b_. Por exemplo, _2^3_ pode ser calculado como _(2*2)*2_. Há pelo menos duas formas distintas de se implementar uma função que calcule uma potência de um número: iterativa (mais eficiente) e recursiva (mais elegante). Implemente as funções ```eleva_i``` e ```eleva_r```, conforme especificado nos arquivos de código ```potencia.c```e ```potencia.py```.

Entrada
-------

A entrada é composta por 10 pares de números inteiros positivos _b > 0_ e _p >= 0_, um par por linha.


Saída
-----

A saída é composta pela operação _b^p_ a ser computada e pelos resultado da potenciação, respectivamente, calculados iterativamente e recursivamente, e separados pelos caracteres " = ".


Exemplo(s)
----------

| Entrada | Saída           |
|---------|-----------------|
| 2 0     | 2^0 = 1 = 1    	|
| 2 1     | 2^1 = 2 = 2    	|
| 2 2     | 2^2 = 4 = 4    	|
| 2 3     | 2^3 = 8 = 8    	|
| 2 4     | 2^4 = 16 = 16  	|
| 2 5     | 2^5 = 32 = 32  	|
| 2 6     | 2^6 = 64 = 64  	|
| 2 7     | 2^7 = 128 = 128	|
| 2 8     | 2^8 = 256 = 256	|
| 2 9     | 2^9 = 512 = 512	|

