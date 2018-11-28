Batalha Naval
=============

O projeto consiste em implementar um programa que possibilite que duas pessoas joguem [Batalha Naval](https://pt.wikipedia.org/wiki/Batalha_naval_(jogo)).

Especificação do Problema
-------------------------

Pode-se jogar em diversas configurações diferentes, mas consideremos uma versão mais simples onde tem-se:

* Componentes do jogo
  * 2 jogadores
  * 1 Campo composto por 15x15 posições para cada jogador
  * 4 Embarcações para cada jogador, cada uma ocupando posições contíguas, sem sobreposição:
    * Porta-aviões (ocupa 5 posições)
    * Destroyer (ocupa 4 posições)
    * Cruzador (ocupa 3 posições)
    * Submarino (ocupa 2 posições)

A regras são simples, os usuários alternam ataques, e vence o primeiro a destruir completamente todos os navios do oponente. Cada ataque é definido por 3 tiros em posições do campo oponente, e cada tiro pode acertar uma das embarcações ou ser desperdiçado nas águas onde ocorre a batalha.

Elaboração do Algoritmo
-----------------------

Com um entendimento claro do problema, pode-se começar a projetar o algoritmo [computacional] para resolvê-lo. De maneira simplificada, proponho aqui uma solução composta pela resolução de subproblemas, que foi construída aos poucos a medida que considerada o problema (arquivos [0](00-batalha_naval.c) a [14](04-batalha_naval.c)). 

Codificação
-----------

Uma vez definido o algoritmo, passa-se à implementação dele em uma linguagem de programação (como ```C```). Os arquivos [15](15-batalha_naval.c) a [17](07-batalha_naval.c) indicam considerações quanto a forma de organizar as informações do jogo; os de [18](18-batalha_naval.c) a [46](46-batalha_naval.c) a efetiva implementação do código e, a partir do arquivo [47](47-batalha_naval.c) passa-se a refatoração do código.