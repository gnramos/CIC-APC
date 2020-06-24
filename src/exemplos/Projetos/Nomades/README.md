Populações Nômades
==================

O projeto consiste em implementar um programa que possibilite a simulação do deslocamento de populações nômades em uma área.

Especificação do Problema
-------------------------

Pode-se simular diversas configurações diferentes, onde tem-se:
* Uma área composta por regiões que possuem:
  * uma quantidade de _recursos_, e
  * uma _taxa de regeneração_.
* Os nômades, compostos por diferentes tribos que possuem:
  * um _nome_,
  * uma _população_,
  * uma _taxa de natalidade_, e
  * uma _taxa de mortalidade_.

Partindo de uma distribuição inicial dos nômades na área, cada tribo consome os recursos da região em que se encontra e decide se permanece ou se migra para uma região vizinha. A cada período de tempo, as populações se alteram e a região se regenera. Esse processo de atualização se repete por uma quantidade finita de períodos (para verificação do resultado da simulação) enquanto houver nômades (não há interesse em acompanhar a migração de populações inexistentes).

Considerações:
* Para facilitar a visualização, considere que a área é uma matriz de regiões, e que cada região pode ser habitável ou não.
* Para acompanhar a simulação, apresente o ambiente a cada período.
* A população deve diminuir se não houver recursos suficientes para seu consumo.
* A movimentação pode levar tribos a se encontrarem, a abordagem mais simples para lidar com isso é não permitir que uma tribo migre para uma região ocupada.

Variações:
* Diferentes estratégias de migração ou de seleção de região vizinha.
* Alterações nas taxas de natalidade em função da abundância de recursos ou mutações.
* Alterações nas taxas de mortalidade em função da escassez de recursos ou mutações.
* Possibilidade de encontros, para simulação de conflitos ou fusões entre tribos.

Elaboração do Algoritmo
-----------------------

Com um entendimento claro do problema, pode-se começar a projetar o algoritmo [computacional] para resolvê-lo. De maneira simplificada, proponho aqui uma solução composta pela resolução de subproblemas, que foi construída aos poucos a medida que considerava o problema (arquivos [0](00-nomades.py) a [17](17-nomades.py)).

Codificação
-----------

Uma vez definido o algoritmo, passa-se à implementação dele em uma linguagem de programação (como ```Python```). Os arquivos [18](18-nomades.py) e [19](19-nomades.py) indicam considerações quanto a forma de organizar as informações do jogo; os de [20](20-nomades.py) a [43](43-nomades.py) a efetiva implementação do código. Do arquivo [44](44-nomades.py) ao [61](61-nomades.py), realiza-se a refatoração do código. O arquivo [62](62-nomades.py) melhora a apresentação das informações da simulação com um mapa de calor para a área e oa [63](63-nomades.py) ajusta a atualização o terminal. Por fim, o arquivo [64](64-nomades.py) acrescenta a funcionalidade de leitura da forma da área de um arquivo (como o mara do [Pará](para)).