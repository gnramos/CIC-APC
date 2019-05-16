#  -*- coding: utf-8 -*-
#    @package: Newton-Raphson.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implemente as funções aproxima_raiz4/erro_raiz4 e
# aproxima_raiz6/erro_raiz6, e complete a função
# Newton-Raphson. Esta versão funciona "apenas" para raízes
# simples (encontrar k tal que r^k == n).


#############################################################
#                  Aproxima a raiz quadrada                 #
#############################################################
def aproxima_raiz2(r, n):
    # A função que representa o polinômio é:
    def raiz2(n, r):
        return (r * r) - n

    # E a derivada dela é:
    def raiz2_p(n, r):
        return 2 * r

    # Newton mostrou que uma boa aproximação é:
    return r - (raiz2(n, r) / raiz2_p(n, r))


# Indica o erro associado a uma aproximação da raiz quadrada.
def erro_raiz2(r, n):
    return abs((r * r) - n)


#############################################################
#                   Aproxima a raiz cúbica                  #
#############################################################
def aproxima_raiz3(r, n):
    # A função que representa o polinômio é:
    def raiz3(n, r):
        return (r * r * r) - n

    # E a derivada dela é:
    def raiz3_p(n, r):
        return 3 * r * r

    # Newton mostrou que uma boa aproximação é:
    return r - (raiz3(n, r) / raiz3_p(n, r))


# Indica o erro associado a uma aproximação da raiz cúbica.
def erro_raiz3(r, n):
    return abs((r * r * r) - n)


#############################################################
#                   Aproxima a raiz quarta                  #
#############################################################
def aproxima_raiz4(r, n):
    pass


# Indica o erro associado a uma aproximação da raiz quarta.
def erro_raiz4(r, n):
    pass


#############################################################
#                   Aproxima a raiz sexta                   #
#############################################################
def aproxima_raiz6(r, n):
    pass


# Indica o erro associado a uma aproximação da raiz sexta.
def erro_raiz6(r, n):
    pass


#############################################################
def valor_inicial(n):
    return n / 2


def Newton_Raphson(n, iteracoes, precisao, aproxima, erro):
    '''Retorna a aproximação para a raiz do polinômio. Recebe:
               n: número n para aproximar a raiz do polinômio
       iteracoes: quantidade máxima de iterações a realizar
        precisao: precisão mínima para o resultado
              ? : ponteiro para a função que aproxima a raiz do
                  polinômio
              ? : ponteiro para a função que indica o erro
                  associado estimativa da raiz do polinômio
    '''

    r = valor_inicial(n)

    for _ in range(iteracoes):
        r = aproxima(r, n)

        if precisao >= erro(r, n):
            break

    return r


if __name__ == '__main__':
    PRECISAO = 0.001
    ITERACOES = 100

    n = float(input('Digite o número de testes: '))

    r = Newton_Raphson(n, ITERACOES, PRECISAO, aproxima_raiz2, erro_raiz2)
    print('raiz2({:.3f}) = {:.3f}'.format(n, r))

    r = Newton_Raphson(n, ITERACOES, PRECISAO, aproxima_raiz3, erro_raiz3)
    print('raiz3({:.3f}) = {:.3f}'.format(n, r))

    r = Newton_Raphson(n, ITERACOES, PRECISAO, aproxima_raiz4, erro_raiz4)
    print('raiz4({:.3f}) = {:.3f}'.format(n, r))

    r = Newton_Raphson(n, ITERACOES, PRECISAO, aproxima_raiz6, erro_raiz6)
    print('raiz6({:.3f}) = {:.3f}'.format(n, r))
