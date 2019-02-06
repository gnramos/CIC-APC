# Código #

O código está organizado conforme os tópicos a serem abordados em sala de aula, veja primeiro os [exemplos](exemplos) e depois tente fazer os [exercícios](exercicios). Atenção às boas práticas de [programação][prog], principalmente a definição dos identificadores e a [indentação][ind].

Os programas são feitos para exemplificar certos conceitos, os detalhes são apresentados no cabeçalho e em comentários ao longo dos arquivos. Assume-se serão executados pela [linha de comando][cli].

## Pseudocódigo ##

Os exemplos em [pseudocódigo][pseudo] [nos arquivos ```.txt```] seguem um padrão arbitrário. Não há interpretador/compilador para isso (ainda), a ideia é obter familiaridade com algoritmos.

## Código C ##

Os exemplos [nos arquivos ```.c```] seguem o [padrão ANSI][ansi], e devem ser compilados/executados com os seguintes comandos:

```bash
gcc -Wall -ansi codigo_fonte.c -o nome_executavel
./nome_executavel
```

Por exemplo:

```bash
gcc -Wall -ansi 00-hello_world.c -o ola_mundo
```

Gera o arquivo ```ola_mundo``` (se não houver problemas), que pode ser executado da seguinte forma:

```bash
./ola_mundo
```

## Código Python ##

Os exemplos [nos arquivos ```.py```] tentam seguir os [PEP8][pep8] e [PEP257][pep257], e podem ser executados com o seguinte comando:

```bash
python codigo_fonte.py
```

Por exemplo:

```bash
python 00-hello_world.py
```

Dicas de Programação
--------------------

* [Redirecionamento](exemplos/02_Interface)
* [Testes e Depuração](exemplos/06_DepuracaoTestes)

Além disso:

1. _Cada um percebe/aprende as coisas de um jeito._ Certas pessoas tem dificuldade com questões de lógica de programação, outras com a linguagem, outras com o material de estudo, etc. Faz parte do processo identificar as suas dificuldades e tentar se adaptar a elas (estudar mais, praticar mais, buscar outras fontes de informação, etc.). É importante persistir, a programação tem se tornado cada dia mais importante.
1. _Pratique!_ Programar é como "andar de bicicleta", é preciso treinar muito para conseguir fazer direito. Você pode ler tudo sobre como andar de bicicleta, ver todos os tutoriais e assistir às competições, os recursos ajudam muito a guiar o seu aprendizado, mas somente a prática o leva a ser um bom ciclista/programador.
1. _Aprenda a procurar ajuda._ Discutir problemas com um colega, monitor ou professor pode ser extremamente esclarecedor. Saber [como procurar][stack] a resposta ao seu problema em [outras fontes][lmgtfy] também. Claro, o pedido de ajuda nunca será algo como "Faça este problema para mim?" ou "Onde copio o código para resolver isso?".
1. _Faça uma mudança no seu código de cada vez._ Programação é uma arte cujo processo é inerentemente permeado por erros. Entretanto, tentar descobrir o erro pode ser um processo muito complicado, ainda mais se houver uma grande quantidade de modificações no código. Se você só fez uma alteração e algo deu errado, a origem só pode ser a sua última atividade.
1. _Considere um problema de cada vez_. Muitas vezes o contexto da tarefa a ser realizada pode ser separado em tarefas menores, que tendem a ser - isoladamente - muito mais simples de serem resolvidos. Eventualmente a solução da tarefa será apenas juntar estas soluções menores.


[ansi]: https://pt.wikipedia.org/wiki/Biblioteca_padrão_do_C#Padr.C3.A3o_ANSI
[cli]: http://www.ibm.com/developerworks/br/linux/library/l-lpic1-v3-103-1/
[ind]: https://pt.wikipedia.org/wiki/Indenta%C3%A7%C3%A3o
[pep8]: http://wiki.python.org.br/GuiaDeEstilo
[pep257]: https://www.python.org/dev/peps/pep-0257/
[prog]: http://www.ft.unicamp.br/liag/programacao/arquivos/qualidade.pdf
[pseudo]: https://pt.wikipedia.org/wiki/Pseudoc%C3%B3digo
[stack]: https://pt.stackoverflow.com/help/on-topic
[lmgtfy]: http://pt-br.lmgtfy.com/?iie=1&q=como+melhorar+meus+estudos
