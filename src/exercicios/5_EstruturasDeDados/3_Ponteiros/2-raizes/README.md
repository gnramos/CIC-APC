Exercício: Raízes
====================


Problema
--------

O método de Newton-Raphson é uma técnica usada para obter aproximações de raízes de equações algébricas.
Funciona assim: É escolhido um 'chute' para o valor da raiz. Damos a esse chute o nome X_0.
Feito isso, a cada iteração da expressão X_n+1 = X_n - f(X_n)/f'(X_n) tendemos a ter um valor mais preciso da raiz, sendo f' a derivada de f.
(https://pt.wikipedia.org/wiki/M%C3%A9todo_de_Newton-Raphson)

Implemente uma versão simplificada do método, que resolve equações do estilo

a * X^n = k.

Entrada
-----

Uma linha contendo expressões do estilo a*X^n=k .
a sempre diferente de 0 e n inteiro maior  0.


Saída
-----

O valor aproximado de X após 10 iterações do método, ou seja, X_10.

  
Exemplo(s)
----------

| Entrada               | Saída                 |
|-----------------------|-----------------------|
| 1*x^4=16 | 2.0 |
    
| Entrada                                              | Saída                                                |
|------------------------------------------------------|------------------------------------------------------|
| 2*x^3=16 | 2.0 |


| Entrada                                         | Saída                                         |
|-------------------------------------------------|-----------------------------------------------|
| 0.5*x^1=4  | 8.0  |

| Entrada                                         | Saída                                         |
|-------------------------------------------------|-----------------------------------------------|
| 2.5*x^8=32  | 1.37531204387  |



