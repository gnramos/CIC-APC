Exercício: Depuração 3 (Iniciante)
==================================


Problema
--------

Dada a especificação de algum comportamento que lida com argumentos da linha de comando (ex: o comando gcc), ajuste o código para que este funcione adequadamente.


Entrada
-------

A entrada consiste de configurações via linha de comando.


Saída
-----

A saída é a exibição dos argumentos conhecidos, conforme os exemplos abaixo.


Exemplo(s)
----------

| Comando (C)                      | Saída              |
|----------------------------------|--------------------|
| ./03-iniciante -o exec -f321 -t7 |  executavel [exec] |
|                                  |      inicio [321]  |
|                                  |         fim [7]    |

| Comando (Python)                                                     | Saída                        |
|----------------------------------------------------------------------|------------------------------|
| python 03-iniciante.py -o meu_executavel -f123 -t500 01-iniciante.py |  executavel [meu_executavel] |
|                                                                      |      inicio [123]            |
|                                                                      |         fim [500]            |