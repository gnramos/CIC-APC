Agentes Autônomos
=================

A ideia é programar diversos agentes autônomos, cada qual como uma entidade que age [ativamente] com independência em relação a um poder central. Este comportamento pode ser definido conforme suas interações com outros elementos do ambiente. A referência ideal para mais detalhes (e complexidade) relacionadas a isto é o [Nature of Code](http://natureofcode.com/), mas a referência "padrão" é o artigo [Steering Behaviors for Autonomous Characters](http://www.red3d.com/cwr/steer/gdc99/).

A movimentação do agente é definida pela composição de forças ([vetoriais](http://pt.wikipedia.org/wiki/Vetor_%28matem%C3%A1tica%29)) aplicadas a ele, de modo que é possível considerar diversos elementos ao mesmo tempo, proporcionando uma movimentação fluida e natural. A definição de comportamentos é relativamente simples, o exemplo mais trivial é o [passeio aleatório](http://pt.wikipedia.org/wiki/Passeio_aleat%C3%B3rio), que aplica uma força com magnitude e orientação aleatórias.

Outro exemplo de fácil implementação é o comportamento de _Fuga_. Supondo que o agente queira fugir do cursor do _mouse_, basta considerar a diferença vetorial (de posições) entre o agente e o cursos, e aplicar uma força na direção oposta (fica mais interessante se esta força for proporcional a distância entre eles). Diversos comportamentos mais complexos podem ser obtidos pela composição de comportamentos simples (veja o comportamento de agrupamento/_flocking_).

Processing
----------

Este exemplo foi implementado em Java, utilizando o [Processing](https://processing.org/). A página do projeto apresenta todas as informações necessárias para uso, além de muitos outros recursos interessantes. Uma vez instalado, basta abrir este projeto e executá-lo:

```bash
processing /caminho/para/AgentesAutonomos/AgentesAutonomos.pde
```

Código
------

O código é feito em [Java](http://pt.wikipedia.org/wiki/Java_%28linguagem_de_programa%C3%A7%C3%A3o%29), [infelizmente] evita explorar as possibilidades da orientação a objetos, tentando aproximar as instruções às que seriam utilizadas em C. O programa está modularizado em arquivos, para facilitar a organização. O funcionamento de uma simulação em _Processing_ pode ser simplificado considerando que este é implementado com o seguinte laço:

```Java
void main() {
    setup();
    while(true)
        draw();
}
```

As funções ```setup``` e ```draw``` são definidas no arquivo [AgentesAutonomos.pde](AgentesAutonomos.pde), pelo qual você deve começar a analisar o código.