Exercício: Ordenação
====================


Problema
--------

D. Florinda é trovada por distintos cavalheiros, mas tem certa dificuldade em se lembrar quais lhe agradam mais. Ele é esperta o suficiente para saber que um programa de computador poderia ordená-los conforme suas preferências,facilitando sua vida. Ela também é persuasiva o bastante para lhe convencer a resolver esta
tarefa.

D. Florinda adora dançar e por conta disso definiu que a altura ideal para seu parceiro é de 1,80 m. Seu primeiro critério é encontrar alguém que é o mais próximo possível desta altura, não faz diferença ser um pouco mais alto ou mais baixo. Dentre os candidatos, ela prefere alguém o mais próximo possível de 75 kg, mas seus pés dançantes não aceitam alguém mais pesado. Se houver pretendentes da mesma altura, ela escolhe o mais leve. Se dois ou mais candidatos têm as mesmas características físicas, ordene-os pelo sobrenome (e depois pelo primeiro nome se for necessário desempatar).

Defina um algoritmo que ordene uma lista de pretendentes conforme os critérios definidos.


Entrada
-------

A entrada consiste em um número _N_ de pretendentes, seguido de _N_  (2 <= N <= 100)linhas contendo, cada uma, o nome e sobrenome do pretendente (cada um com até 50 caracteres), sua altura (em metros) e seu peso (em quilos).


Saída
-----

A saída deve ser a lista dos pretendentes, ordenada conforme as preferências de D. Florinda.


Exemplo(s)
----------

| Entrada                   | Saída             |
|---------------------------|-------------------|
| 7                         | Costa, Bruno      |
| Guido Batista 1.95 110    | Tostes, Heitor    |
| Heitor Tostes 1.80 75     | Kleber, Joao      |
| Bruno Costa 1.80 75       | Carvalho, Juca    |
| Joao Kleber 1.80 65       | Neto, Ricardo     |
| Rafael Rodrigues 1.65 110 | Batista, Guido    |
| Ricardo Neto 1.70 70      | Rodrigues, Rafael |
| Juca Carvalho 1.80 77     |                   |

