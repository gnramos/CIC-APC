/**      @file: jogo_da_velha.h
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Estruturas de dados e funções utilizadas no jogo "Jogo da Velha". */

#ifndef UNB_CIC_APC_JOGO_DA_VELHA_H
#define UNB_CIC_APC_JOGO_DA_VELHA_H

typedef struct {
    char marca_atual;
    char situacao[4][4];
} jogo_da_velha_t;


void escreve_regras() {
    printf("*****************\n");
    printf("* JOGO DA VELHA *\n");
    printf("*****************\n\n");

    printf("Os jogadores alternam marcações até que alguém consiga alinhar 3 "
           "marcas iguais ou não seja mais possível marcar.\n\n");

    printf("Bom jogo!\n");
    printf("*********\n\n");
}

int linha_completa(char situacao[4][4], char marca) {
    if(((marca == situacao[1][1]) && (situacao[1][1] == situacao[1][2]) && (situacao[1][2] == situacao[1][3])) ||
       ((marca == situacao[2][1]) && (situacao[2][1] == situacao[2][2]) && (situacao[2][2] == situacao[2][3])) ||
       ((marca == situacao[3][1]) && (situacao[3][1] == situacao[3][2]) && (situacao[3][2] == situacao[3][3])) ||
       ((marca == situacao[1][1]) && (situacao[1][1] == situacao[2][1]) && (situacao[2][1] == situacao[3][1])) ||
       ((marca == situacao[1][2]) && (situacao[1][2] == situacao[2][2]) && (situacao[2][2] == situacao[3][2])) ||
       ((marca == situacao[1][3]) && (situacao[1][3] == situacao[2][3]) && (situacao[2][3] == situacao[3][3])) ||
       ((marca == situacao[1][1]) && (situacao[1][1] == situacao[2][2]) && (situacao[2][2] == situacao[3][3])) ||
       ((marca == situacao[1][3]) && (situacao[1][3] == situacao[2][2]) && (situacao[2][2] == situacao[3][1])))
        return 1;
   return 0;
}

void inicializa(char situacao[4][4]) {
    int i, j;

    for(i = 1; i < 4; ++i)
        for(j = 1; j < 4; ++j)
            situacao[i][j] = ' ';
}

int invalidas(int X, int Y) {
   return ((1 > X) || (X > 3) || (1 > Y) || (Y > 3));
}

void leia_coordenadas(char marca, int * X, int * Y) {
    printf("[%c] Digite as coordenadas Y e X: ", marca);
    scanf("%d %d", X, Y);
}

void mostra(char situacao[4][4]) {
    printf("\n %c | %c | %c", situacao[1][1], situacao[1][2], situacao[1][3]);
    printf("\n---+---+---");
    printf("\n %c | %c | %c", situacao[2][1], situacao[2][2], situacao[2][3]);
    printf("\n---+---+---");
    printf("\n %c | %c | %c\n\n", situacao[3][1], situacao[3][2], situacao[3][3]);
}

void parabenize_vencedor(char situacao[4][4], char marca){
    if(linha_completa(situacao, marca))
        printf("\nParabéns %c\n\n", marca);
    else
        printf("\nDeu velha!\n\n");
}

int possivel_marcar(char situacao[4][4]) {
    int i, j;

    for(i = 1; i < 4; ++i)
        for(j = 1; j < 4; ++j)
            if(situacao[i][j] == ' ')
              return 1;
    return 0;
}

char proxima_marca(char marca) {
  return (marca == 'O' ? 'X' : 'O');
}

#endif
