/**      @file: sim_ou_nao.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implemente as funções responda_S_N e positiva. */

#include <stdio.h>

/* Pede ao usuário que forneça a resposta a pergunta dada.
 * Caso a resposta não seja 'S' ou 'N', indica o erro e
 * repete a pergunta até que o usuário responda corretamente. */
char responda_S_N(char* str) {
    /* Escreva o código aqui. */
}

/* Indica se a resposta é positiva ou não. Retorna:
 *    1 caso seja 's' ou 'S'
 *    0 caso contrário. */
int positiva(char resposta) {
    /* Escreva o código aqui. */
}

int main() {
    char resposta = responda_S_N("Tudo bem?");

    if(positiva(resposta))
        printf("Que bom!\n");
    else {
        resposta = responda_S_N("Posso ajudar?");
        if(positiva(resposta))
            printf("Chego em 10 minutos.\n");
        else
            printf("Espero que melhore!\n");
    }

    return 0;
}