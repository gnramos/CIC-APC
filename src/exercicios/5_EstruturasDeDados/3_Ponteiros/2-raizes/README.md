Exercício: Raízes
====================


Problema
--------

O método de Newton-Raphson é uma técnica usada para obter aproximações de raízes de equações algébricas.
Funciona assim: É escolhido um 'chute' para o valor da raiz. Damos a esse chute o nome x0.
Feito isso, a cada iteração da expressão Xn+1 = Xn - f(Xn)/f'(Xn) tendemos a ter um valor mais preciso da raiz, sendo f' a derivada de f.
(https://pt.wikipedia.org/wiki/M%C3%A9todo_de_Newton-Raphson)

Implemente uma versão simplificada do método, que resolve equações do estilo

a * X^n = k.

Entrada
-----

Duas linhas, uma contendo uma frase, a outra contendo um inteiro X.


Saída
-----

A saída deve ser a frase deslocada X espaços para a direita. Os caracteres que passam do final entram no começo.


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
