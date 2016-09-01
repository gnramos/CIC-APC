/**      @file: Fisica2D.pde
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Define como simular a dinâmica de um corpo. */

/** Define a estrutura para movimentacao 2D. */ 
class Fisica2D {
    // Deslocamento em relacao a origem.
    PVector posicao;

    // Velocidade do centro de massa.
    PVector velocidade;

    // Massa do corpo. */ 
    float massa;

    /** Construtor. */ 
    Fisica2D(float m) {
assert m > 0:
        "Não é possível criar uma entidade física sem massa.";

        massa = m;
        posicao = new PVector();
        velocidade = new PVector();
    }
}

/** Atualiza a posição física conforme as leis de Newton a cada iteração. */ 
void atualiza_fisica(Agente a) {
    // Acumula as forcas exercidas.
    PVector forca_resultante = acumula_forcas(a);

    // Define a nova velocidade.
    PVector aceleracao_resultante = PVector.div(forca_resultante, a.fisica.massa);
    a.fisica.velocidade.add(aceleracao_resultante);

    // Define a nova posicao.
    a.fisica.posicao.add(a.fisica.velocidade);
}