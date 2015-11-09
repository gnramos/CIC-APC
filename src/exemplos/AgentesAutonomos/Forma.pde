/**      @file: Forma.pde
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Define a forma de um agente e como exibí-la. Para simplificar, todos os
 * agentes são circulares. */

/** Define a estrutura para desenho 2D de uma forma. */
class Forma {
    /* Define o raio da forma. */
    float raio;

    /* Define a cor da forma. */
    color cor;

    /* Construtor. */
    Forma(float r, color c) {
assert r > 0:
        "Não é possível criar algo com raio não positivo.";

        raio = r;
        cor = c;
    }
}

/** Define como atualizar a forma a cada iteração. */
void atualiza_forma(Forma f) {
    /* Nada, mas poderia alterar um pouco a cor ou o raio da forma. */
}

/** Desenha a forma fornecida. */
void desenha_forma(Forma f, PVector posicao) {
    /* O Processing facilita o processo de desenho. */
    fill(f.cor);
    ellipse(posicao.x, posicao.y, f.raio, f.raio);
}
