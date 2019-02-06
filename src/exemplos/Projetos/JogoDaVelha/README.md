Jogo da Velha
=============

O projeto consiste em implementar um programa que possibilite que duas pessoas joguem [Jogo da Velha](https://pt.wikipedia.org/wiki/Jogo_da_velha).

Especificação do Problema
-------------------------

Pode-se jogar em diversas configurações diferentes, mas consideremos uma versão mais simples onde tem-se:

* Componentes do jogo
  * A marca (símbolo) do jogador atual
  * 1 Campo composto por 3x3 posições

A regras são simples, os usuários alternam alternam marcações até que alguém consiga alinhar 3 marcas iguais ou não seja mais possível marcar.

Elaboração do Algoritmo
-----------------------

Com um entendimento claro do problema, pode-se começar a projetar o algoritmo [computacional] para resolvê-lo. De maneira simplificada, proponho aqui uma solução composta pela resolução de subproblemas, que foi construída aos poucos a medida que considerada o problema (arquivos [0](00-jogo_da_velha.c) a [5](05-jogo_da_velha.c)).

Codificação
-----------

Uma vez definido o algoritmo, passa-se à implementação dele em uma linguagem de programação (como ```C```). Os arquivos [6](06-jogo_da_velha.c) a [8](08-jogo_da_velha.c) indicam considerações quanto a forma de organizar as informações do jogo; os de [9](09-jogo_da_velha.c) a [23](23-jogo_da_velha.c) a efetiva implementação do código e, a partir do arquivo [24](24-jogo_da_velha.c) passa-se a refatoração do código.