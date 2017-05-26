Exercício: Cartas na Mão
========================


Problema
--------

Em um jogo de cartas há três times (5 jogadores em cada), em que cada jogador dispõe de 3 cartas em cada mão. Cada time posiciona um jogador por vez ao redor da mesa, de modo que cada jogador está ao lado de um representante de um time adversário. As cartas são distribuídas uma a uma entre os jogadores, sendo que todos pegam a primeira carta dada com a mão direita, a segunda com a esquerda, e assim sucessivamente.

Faça um programa que exiba as cartas nas mãos de cada jogador.


Entrada
-------

A entrada consiste em 90 linhas contendo a ordem de distribuição das cartas, aqui representadas por 2 caracteres na forma _VN_, onde _V_ em {2, 3, 4, 5, 6, 7, 8, 9, J, Q, K, A} é o valor da carta e _N_ em {C, E, O, P} é o naipe da mesma.


Saída
-----

Para cada time, a partir pelo primeiro jogador, exiba todas as cartas em suas mãos direita e depois as da esquerda, na ordem em que foram dadas, e separadas por um espaço. Indique o time e coloque uma linha em branco entre times.


Exemplo(s)
----------

| Entrada | Saída                 |
|---------|-----------------------|
| 3E      | Time 1                |
| 3P      | J1: 3E 3E KE JE QC 6O |
| 5C      | J2: JC 7P 5P 4P 6C 4P |
| JC      | J3: 6E 5C 2P 2C QP QE |
| 9P      | J4: 5E KE 2E 6C 5O 6P |
| JO      | J5: KP AC AP 2E 3C 8O |
| 6E      |                       |
| AE      | Time 2                |
| 8P      | J1: 3P 7C 7E 5O 3C 4E |
| 5E      | J2: 9P 9E 2O AO 6P 8P |
| 7E      | J3: AE AO 9O 4O 2C 2O |
| QO      | J4: 7E 7P KP JC 7O 9E |
| KP      | J5: QE 5P 8E JO 9O 9C |
| QE      |                       |
| AC      | Time 3                |
| JE      | J1: 5C QO KC 3O 3P 8C |
| 5O      | J2: JO 3O AE 8E 4O AP |
| 3O      | J3: 8P 8C 7O 4E 9P JP |
| 4P      | J4: QO KO 8O QP JP JE |
| AO      | J5: AC 6O 6E 4C 5E QC |
| 8E      |                       |
| 2C      |                       |
| 4O      |                       |
| 4E      |                       |
| 6C      |                       |
| JC      |                       |
| QP      |                       |
| 2E      |                       |
| JO      |                       |
| 4C      |                       |
| 3E      |                       |
| 7C      |                       |
| QO      |                       |
| 7P      |                       |
| 9E      |                       |
| 3O      |                       |
| 5C      |                       |
| AO      |                       |
| 8C      |                       |
| KE      |                       |
| 7P      |                       |
| KO      |                       |
| AC      |                       |
| 5P      |                       |
| 6O      |                       |
| QC      |                       |
| 3C      |                       |
| 3P      |                       |
| 6C      |                       |
| 6P      |                       |
| 4O      |                       |
| QP      |                       |
| 2C      |                       |
| 9P      |                       |
| 5O      |                       |
| 7O      |                       |
| JP      |                       |
| 3C      |                       |
| 9O      |                       |
| 5E      |                       |
| KE      |                       |
| 7E      |                       |
| KC      |                       |
| 5P      |                       |
| 2O      |                       |
| AE      |                       |
| 2P      |                       |
| 9O      |                       |
| 7O      |                       |
| 2E      |                       |
| KP      |                       |
| 8O      |                       |
| AP      |                       |
| 8E      |                       |
| 6E      |                       |
| 6O      |                       |
| 4E      |                       |
| 8C      |                       |
| 4P      |                       |
| 8P      |                       |
| AP      |                       |
| QE      |                       |
| 2O      |                       |
| JP      |                       |
| 6P      |                       |
| 9E      |                       |
| JE      |                       |
| 8O      |                       |
| 9C      |                       |
| QC      |                       |
