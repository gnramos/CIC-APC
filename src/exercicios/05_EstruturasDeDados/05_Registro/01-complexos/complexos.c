/**      @file: 1-complexos.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implemente as funções abaixo para que todos os testes
 * passem (um teste passa quando não acusa erro). */

#include <assert.h> /* A função assert é muito interessante, indica exatamente
                       onde houve erro. */


/******************************************************************************
 *                             Definição do tipo                              *
 ******************************************************************************/
typedef struct {
    /* Defina aqui os componentes de um número complexo */
} num_complexo;


/******************************************************************************
 ******************************************************************************
 **                                                                          **
 **                         Implemente estas funções                         **
 **                                                                          **
 ******************************************************************************
 ******************************************************************************/

/* Recebe um num_complexo e retorna apenas a parte real dele. */
float real(num_complexo n) {
    /* Implemente seu código aqui. */
}

/* Recebe um num_complexo e retorna apenas a parte imaginária dele. */
float imaginario(num_complexo n) {
    /* Implemente seu código aqui. */
}

/* Recebe valores para as partes real e imaginária e retorna o num_complexo
composto por elas. */
num_complexo novo(float Re, float Im) {
    /* Implemente seu código aqui. */
}

/* Retorna 1 caso sejam os num_complexos sejam iguais, 0 caso contrário. */
char iguais(num_complexo a, num_complexo b) {
    /* Implemente seu código aqui. */
}

/* Retorna 1 caso sejam os num_complexos sejam diferentes, 0 caso contrário. */
char diferentes(num_complexo a, num_complexo b) {
    /* Implemente seu código aqui. */
}

/* Retorna o conjugado do num_complexo dado. */
num_complexo conjugado(num_complexo n) {
    /* Implemente seu código aqui. */
}

/* Retorna o num_complexo resultante da operação a+b. */
 num_complexo soma(num_complexo a, num_complexo b) {
    /* Implemente seu código aqui. */
}

/* Retorna o num_complexo resultante da operação a-b. */
num_complexo subtrai(num_complexo a, num_complexo b) {
    /* Implemente seu código aqui. */
}

/* Retorna o num_complexo resultante da operação a*b. */
num_complexo multiplica(num_complexo a, num_complexo b) {
    /* Implemente seu código aqui. */
}

/* Retorna o num_complexo resultante da operação a/b. Assume-se que b != 0 + i0. */
num_complexo divide(num_complexo a, num_complexo b) {
    /* Implemente seu código aqui. */
}


/******************************************************************************
 *                                   Testes                                   *
 ******************************************************************************/

/* Não altere o código a partir daqui! */
void testa_real() {
    float Re;
    num_complexo n;

    for(Re = -1.5; Re < 1.5; Re += 0.1) {
        n = novo(Re, 0);
        assert(real(n) == Re);
    }
}

void testa_imaginario() {
    float Im;
    num_complexo n;

    for(Im = -1.5; Im < 1.5; Im += 0.1) {
        n = novo(0, Im);
        assert(imaginario(n) == Im);
    }
}

void testa_novo() {
    float Re, Im;
    num_complexo n;

    for(Re = -1.5; Re < 1.5; Re += 0.1)
        for(Im = -10; Im < 10; Im++) {
            n = novo(Re, Im);
            assert(real(n) == Re);
            assert(imaginario(n) == Im);
        }
}

void testa_iguais() {
    float Re, Im;
    num_complexo a, b, c, d;

    for(Re = -1.5; Re < 1; Re += 0.1)
        for(Im = 1; Im < 10; Im++) {
            a = novo(Re, Im);
            b = novo(Re, Im);
            c = novo(-Re, Im);
            d = novo(Re, -Im);
            assert(iguais(a, a) == 1);
            assert(iguais(b, a) == 1);
            assert(iguais(a, b) == 1);
            assert(iguais(b, b) == 1);
            assert(iguais(a, c) == 0);
            assert(iguais(a, d) == 0);
            assert(iguais(c, a) == 0);
            assert(iguais(c, d) == 0);
        }
}

void testa_diferentes() {
    float Re, Im;
    num_complexo a, b, c, d;

    for(Re = -1.5; Re < 1.5; Re += 0.1)
        for(Im = 1; Im < 10; Im++) {
            a = novo(Re, Im);
            b = novo(Re, Im);
            c = novo(-Re, Im);
            d = novo(Re, -Im);
            assert(diferentes(a, a) == 0);
            assert(diferentes(b, a) == 0);
            assert(diferentes(a, b) == 0);
            assert(diferentes(b, b) == 0);
            assert(diferentes(a, c) == 1);
            assert(diferentes(a, d) == 1);
            assert(diferentes(c, a) == 1);
            assert(diferentes(c, d) == 1);
        }
}

void testa_conjugado() {
    float Re, Im;
    num_complexo a, b;

    for(Re = -1.5; Re < 1.5; Re += 0.1)
        for(Im = 1; Im < 10; Im++) {
            a = novo(Re, Im);
            b = conjugado(a);

            assert(real(a) == real(b));
            assert(imaginario(a) == -imaginario(b));
        }
}

void testa_soma() {
    num_complexo a, b, n;

    a = novo(1, 1);
    b = novo(2, 0);

    n = soma(a, a);
    assert(real(n) == 2 && imaginario(n) == 2);
    n = soma(a, b);
    assert(real(n) == 3 && imaginario(n) == 1);
    n = soma(b, a);
    assert(real(n) == 3 && imaginario(n) == 1);
    n = soma(b, b);
    assert(real(n) == 4 && imaginario(n) == 0);
}

void testa_subtrai() {
    num_complexo a, b, n;

    a = novo(1, 1);
    b = novo(2, 0);

    n = subtrai(a, a);
    assert(real(n) == 0 && imaginario(n) == 0);
    n = subtrai(a, b);
    assert(real(n) == -1 && imaginario(n) == 1);
    n = subtrai(b, a);
    assert(real(n) == 1 && imaginario(n) == -1);
    n = subtrai(b, b);
    assert(real(n) == 0 && imaginario(n) == 0);
}

void testa_multiplica() {
    num_complexo a, b, n;

    a = novo(1, 1);
    b = novo(2, 0);

    n = multiplica(a, a);
    assert(real(n) == 0 && imaginario(n) == 2);
    n = multiplica(a, b);
    assert(real(n) == 2 && imaginario(n) == 2);
    n = multiplica(b, a);
    assert(real(n) == 2 && imaginario(n) == 2);
    n = multiplica(b, b);
    assert(real(n) == 4 && imaginario(n) == 0);
}

void testa_divide() {
    num_complexo a, b, n;

    a = novo(1, 1);
    b = novo(2, 0);
    n = divide(a, a);
    assert(real(n) == 1 && imaginario(n) == 0);
    n = divide(a, b);
    assert(real(n) == 0.5 && imaginario(n) == 0.5);
    n = divide(b, a);
    assert(real(n) == 1 && imaginario(n) == -1);
}

/* Não altere o código! */
int main() {
    testa_real();
    testa_imaginario();
    testa_novo();
    testa_iguais();
    testa_conjugado();
    testa_soma();
    testa_subtrai();
    testa_multiplica();
    testa_divide();

    return 0;
}
