Exercício: Raízes
====================


Problema
--------

O método de Newton-Raphson é uma técnica usada para obter aproximações de raízes de equações algébricas.
Funciona assim: É escolhido um 'chute' para o valor da raiz. Damos a esse chute o nome x0.
Feito isso, a cada iteração da expressão X_n+1 = X_n - f(X_n)/f'(X_n) tendemos a ter um valor mais preciso da raiz, sendo f' a derivada de f.
(https://pt.wikipedia.org/wiki/M%C3%A9todo_de_Newton-Raphson)

Implemente uma versão simplificada do método, que resolve equações do estilo

a * X^n = k.

Entrada
-----

uma linha contendo expressões do estilo a*X^n=k.


Saída
-----

O valor aproximado de X após 10 iterações do método, ou seja, X_10.


Exemplo(s)
----------

| Entrada               | Saída                 |
|-----------------------|-----------------------|
| Luke, eu sou seu pai! | u seu pai!Luke, eu so |
| 10                    |                       |

| Entrada                                              | Saída                                                |
|------------------------------------------------------|------------------------------------------------------|
| A vinganca nunca eh plena! Mata a alma e a envenena. | A vinganca nunca eh plena! Mata a alma e a envenena. |
| 52                                                   |                                                      |

| Entrada                                         | Saída                                         |
|-------------------------------------------------|-----------------------------------------------|
| Batatinha quando nasce espalha rama pelo chao.  | rama pelo chao.Batatinha quando nasce espalha |
| 16                                              |                                               |
