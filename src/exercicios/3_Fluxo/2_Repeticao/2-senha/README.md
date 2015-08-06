Exercício: Senha
================


Problema
--------

Uma das formas mais simples de aumentar a segurança de um sistema é implementar um esquema de autenticação por senha. O sistema só permite acesso as partes "interessantes" se o usuário fornecer a senha correta.

Implemente que lê uma senha numérica, e depois lê uma quantidade indefinida de números até que seja da a senha correta.


Entrada
-------

A entrada consiste em um número inteiro positivo S, que define a senha, seguido de uma quantidade indefinida de números inteiros positivos como tentativas. A entrada termina com o valor correto da senha.

Saída
-------

Para cada tentativa, escreva ":)" caso a senha dada seja correta, "BEEP!" caso contrário.


Exemplo(s)
----------

| Entrada | Saída |
|---------|-------|
| 123     | BEEP! |
| 0       | BEEP! |
| 0       | :)    |
| 123     |       |

| Entrada | Saída |
|---------|-------|
| 0       | :)    |
| 0       |       |

| Entrada | Saída |
|---------|-------|
| 54321   | BEEP! |
| 123456  | BEEP! |
| 12345   | BEEP! |
| 1234    | BEEP! |
| 123     | BEEP! |
| 12      | BEEP! |
| 1       | BEEP! |
| 0       | BEEP! |
| 1       | BEEP! |
| 21      | BEEP! |
| 321     | BEEP! |
| 4321    | :)    |
| 54321   |       |

