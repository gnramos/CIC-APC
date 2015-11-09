Exercício: Menção
=================

Problema
--------

O plano de ensino define que a nota final do aluno é composta pela média das provas e dos trabalhos, sendo que estes têm pesos diferentes. A UnB define a menção em função desta nota como: SS (9,0 a 10,0), MS (7,0 a 8,9), MM (5,0 a 6,9), MI (3,0 a 4,9), II (0,1 a 2,9), ou SR (0,0). Implemente um programa que lê o peso das provas na média (e deste infira o peso dos trabalhos), e as médias de provas e trabalhos, calcula a nota final e mostra a menção associada a nota.

Um "detalhe" importante: é preciso ter média mínima maior ou igual a 5,0 tanto para as provas quanto para os trabalhos. Caso uma das duas notas não atenda este requisito mas a nota final tenha sido pelo menos 5,0, a menção deve ser MI.


Entrada
-------

A entrada consiste de um número real por linha, sendo o primeiro o valor p indicando o peso da provas (0 < p < 1), seguido da média de provas MP (0 <= MP <= 10)e da média dos trabalhos MT (0 <= MT <= 10).


Saída
-----

A nota final, com duas casas decimais, e a menção entre parênteses, em função das notas lidas.


Exemplo(s)
----------

| Entrada | Saída     |
|---------|-----------|
| 0.75    | 8.50 (MS) |
| 8       |           |
| 10      |           |

| Entrada | Saída     |
|---------|-----------|
| 0.5     | 9.00 (SS) |
| 8       |           |
| 10      |           |

| Entrada | Saída     |
|---------|-----------|
| 0.75    | 7.12 (MI) |
| 8       |           |
| 4.5     |           |

| Entrada | Saída     |
|---------|-----------|
| 0.75    | 5.86 (MI) |
| 4.75    |           |
| 9.2     |           |

| Entrada | Saída     |
|---------|-----------|
| 0.75    | 1.81 (II) |
| 1.75    |           |
| 2       |           |
