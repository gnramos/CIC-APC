/**      @file: 1-multiplos.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de uso de registros. */

#include <stdio.h>

/* Definição do tipo. */
typedef struct {
    int dia, mes, ano;
} data_t;

/* Composição por múltiplos registros. */
typedef struct {
    char nome[50];
    data_t data;
} aniversario_t;

/* Ponteiro para registro */
void mostra_data(data_t *data) {
    printf("%02d/%02d/%04d\n", data->dia,
                               data->mes,
                               data->ano);
}

/* Ponteiro para registro */
void mostra(aniversario_t *aniversario) {
    printf("%s:\n", (*aniversario).nome);
    mostra_data(&((*aniversario).data));
}

int leia_int(char* mensagem) {
    int i;

    printf("%s", mensagem);
    scanf("%d", &i);

    return i;
}

void leia_string(char* mensagem, char* string) {
    getchar(); /* Limpar o buffer */
    printf("%s", mensagem);
    scanf("%[^\n]", string);
}

void valida(data_t data) {
    if(1 > data.dia || data.dia > 31) /* correto? */
        printf("Dia %d inválido.\n", data.dia);

    if(1 > data.mes || data.mes > 12)
        printf("Mes %d inválido.\n", data.mes);

    if(0 > data.ano) /* correto? */
        printf("Ano %d inválido.\n", data.ano);
}

data_t le_data() {
    data_t data;

    data.ano = leia_int("Digite o ano: ");
    data.mes = leia_int("Digite o mes: ");
    data.dia = leia_int("Digite o dia: ");

    return data;
}

aniversario_t le_aniversario() {
    aniversario_t aniversario;

    leia_string("Digite o nome: ", aniversario.nome);
    aniversario.data = le_data();

    return aniversario;
}

int main() {
    /* Vetor de registros. */
    aniversario_t aniversarios[5];
    int i;

    for(i = 0; i < 5; ++i) {
        aniversarios[i] = le_aniversario();
        valida(aniversarios[i].data);
        mostra(aniversarios + i);
    }

    return 0;
}