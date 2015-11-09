/**      @file: Agente.pde
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Define um agente e como atualizá-lo. */

/** Classe que define um agente. */
class Agente {
    /* Controla a movimentação 2D. */
    Fisica2D fisica;

    /* Define a forma do agente */
    Forma forma;

    /* Construtor. */
    Agente(float m, float r, color c) {
        fisica = new Fisica2D(m);
        forma = new Forma(r, c);
    }
}

/** Atualiza o agente a cada iteração. */
void atualiza_agente(Agente a) {
    atualiza_fisica(a);
    atualiza_forma(a.forma);
}

/** Desenha o agente fornecido. */
void desenha_agente(Agente a) {
    desenha_forma(a.forma, a.fisica.posicao);
}
