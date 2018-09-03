Exercícios
==========

Os exercícios visam a fixação dos conceitos apresentados. A programação é uma _habilidade_ que deve ser desenvolvida, principalmente via:

* prática
* leitura de [bons exemplos de] código
* prática

Todos os problemas são apresentados no arquivo README.md, e alguns exercícios apresentados têm também arquivos exemplos de entrada (`#.in`) e suas respectivas saídas (`#.out`) para comparação. A análise do seu programa pode facilitada pela utilização deles, redirecionando tanto a entrada quanto a saída, e utilizando uma ferramenta como [diff][wiki].


diff
----

Em Unix, o comando [diff][diff] compara o conteúdo de dois arquivos e mostra as diferenças entre eles. Está ferramenta é especialmente útil neste contexto, principalmente em função de comparação de espaços ou quebras de linha. Basta [direcionar](../exemplos/02_Interface) o arquivo de entrada  para o seu programa, direcionar a saída do seu programa para um outro arquivo qualquer, e então comparar este com arquivo com gabarito. Por exemplo, no caso do exercício [raiz2](3_Fluxo/0_Sequencial/1-raiz2):

```bash
gcc -Wall -ansi raiz2.c -o raiz2
./raiz2 < 1.in > saida.txt
diff 1.out saida.txt
```

Ou ainda:

```bash
python raiz2.py < 1.in > saida.txt
diff 1.out saida.txt
```


Roteiros de Laboratório
-----------------------

São [listas de exercícios](roteiros_lab.zip) propostas pela [Profa. Carla Koike](http://cic.unb.br/~ckoike/), uma excelente forma de reforçar os conceitos vistos em aula.


[diff]: https://www.vivaolinux.com.br/dica/diff-Comando-com-exemplos
[wiki]: https://pt.wikipedia.org/wiki/Diff