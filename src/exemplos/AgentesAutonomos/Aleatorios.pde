/**      @file: Aleatorios.pde
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Contem as funções para gerar elementos aleatórios. */

/** Retorna um agente com configurações aleatórias. */
Agente agente_aleatorio() {
    Agente a = new Agente(massa_aleatoria(), raio_aleatorio(), cor_aleatoria());

    a.fisica.posicao = posicao_aleatoria();

    return a;
}

/** Retorna um valor aleatório de cor. */
color cor_aleatoria() {
    return color(random(255), random(255), random(255));
}

/** Retorna um valor aleatório de massa para o agente. */
float massa_aleatoria() {
    return random(MASSA_MIN, MASSA_MAX);
}

/** Retorna um valor aleatório de posição para o agente. */
PVector posicao_aleatoria() {
    return new PVector(random(width), random(height));
}

/** Retorna um valor aleatório de raio para a forma do agente. */
float raio_aleatorio() {
    return random(RAIO_MIN, RAIO_MAX);
}

/** Define uma força aleatória. */
PVector forca_aleatoria() {
	float x = random(-FORCA_MAX, FORCA_MAX);
	float y = random(-FORCA_MAX, FORCA_MAX);

    return new PVector(x, y);
}
