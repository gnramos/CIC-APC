Exercício: Newton-Raphson
=========================


Problema
--------

O método de Newton-Raphson é uma forma eficiente para aproximar o valor da raiz de um polinômio qualquer. Para simplificar, considere o que define a raiz cúbica de um número _n_ qualquer: _p(r) = r^3 = n_. O método define que o valor da estimativa _r_ deve ser ajustado conforme os valores do polinômio e de sua primeira [derivada](https://pt.wikipedia.org/wiki/Derivada) seguinte forma: `r = r - p(r)/p'(r)`.

Neste problema, defina a estimativa inicial de _r_ como sendo a metade de _n_.

Entrada
-------

A entrada é composta por 12 números, um por linha. O primeiro é um número inteiro positivo I, definindo a quantidade máxima de iterações, seguido de um número real P que define a precisão a ser utilizada na aproximação, seguido de 10 números reais.


Saída
-----

A saída é composta pelos resultados da aproximação da raiz cúbica dos números da entrada, com precisão de 6 casas decimais. __Muita atenção__, devido a erros de aproximação de números reais, os resultados obtidos na sua máquina podem ser diferentes dos resultados apresentados nos arquivos de teste. Se a diferença não for significativa (na ordem de milésimos), considere sua resposta correta.


Exemplo(s)
----------

| Entrada  | Saída    |
|----------|----------|
| 100      | 1.000000 |
| 0.000001 | 1.259921 |
| 1        | 1.587401 |
| 2        | 2.000000 |
| 4        | 3.000000 |
| 8        | 4.000000 |
| 27       | 5.000000 |
| 64       | 6.000000 |
| 125      | 7.000000 |
| 216      | 8.000000 |
| 343	   |          |
| 512      |          |
