/**      @file: 1-iniciante.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de erro simples para depuração. */

#include <stdio.h>

int main() {
    int a, b;

    printf("Digite um número inteiro:");
    scanf("%d", &a);

    printf("Digite outro número inteiro:");
    scanf("%d", &b);

    if(a != b)
        printf("São diferentes.\n");
    else
        printf("São iguais (mas não deveriam ser).\n");
        b = a + 1;

    /* Realizar tarefas com valores diferentes. Mas... a lógica está correta
    para todas as possibilidades (de valores para "a" e "b")? */

    return 0;
}