/**      @file: 0-divisao.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Lê 2 números e mostra o resultado da divisão do primeiro
 * pelo segundo. */

#include <stdio.h> /* Biblioteca de E/S */

int main() {
    float numerador, denominador; /* variáveis */

    printf("Digite o numerador: ");
    scanf("%f", &numerador);   /* Lê o numerador */
    printf("Digite o denominador: ");
    scanf("%f", &denominador); /* Lê o denominador */

    /* Só agora é possível computar o resultado */
    printf("A divisão é: %f\n", numerador/denominador);

    return 0;
}