/**      @file: registro/0-data.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de uso de registros. */

#include <stdio.h>

int main() {
    /* Definição da estrutura do registro (identificado como "data"): */
    struct {
        int dia, mes, ano;  /* Armazenam "data" em si. */
        char descricao[50]; /* Armazenam uma descrição da data. */
    } data;

    printf("Digite a descrição: ");
    scanf("%[^\n]", data.descricao); /* Armazene a informação lida da entrada
                                        padrão no espaço identificado como
                                        "descricao" dentro da variável "data"
                                        (registro). */

    printf("Digite o ano: ");
    scanf("%d", &(data.ano)); /* Armazene a informação lida da entrada padrão no
                                 espaço identificado como "ano" dentro da
                                 variável "data" (registro). */
    printf("Digite o mês: ");
    scanf("%d", &(data.mes)); /* Armazene a informação lida da entrada padrão no
                                 espaço identificado como "mes" dentro da
                                 variável "data" (registro). */
    printf("Digite o dia: ");
    scanf("%d", &(data.dia)); /* Armazene a informação lida da entrada padrão no
                                 espaço identificado como "dia" dentro da
                                 variável "data" (registro). */

    /* Acesse as informações armazenadas e mostre-as. */
    printf("%s:\n%02d/%02d/%04d\n", data.descricao,
                                    data.dia,
                                    data.mes,
                                    data.ano);

    return 0;
}