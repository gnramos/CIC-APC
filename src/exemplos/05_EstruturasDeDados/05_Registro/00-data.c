/**      @file: registro/0-data.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de uso de registros. */

#include <stdio.h>

int leia_int(char* mensagem) {
    int i;

    printf("%s", mensagem);
    scanf("%d", &i);

    return i;
}

void leia_string(char* mensagem, char* string) {
    printf("%s", mensagem);
    scanf("%[^\n]", string);
}

int main() {
    struct {
        int dia, mes, ano;
        char descricao[50];
    } data;

    leia_string("Digite a descrição: ", data.descricao);
    data.ano = leia_int("Digite o ano: ");
    data.mes = leia_int("Digite o mes: ");
    data.dia = leia_int("Digite o dia: ");

    printf("%s:\n%02d/%02d/%04d\n", data.descricao,
                                    data.dia,
                                    data.mes,
                                    data.ano);

    return 0;
}