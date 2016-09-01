/**      @file: ForcasDoAmbiente.pde
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Define como o ambiente aplica forças no agente, influenciando seus movimentos. */

/** Acumula as forças aplicadas no agente. */ 
PVector acumula_forcas(Agente a) {
    PVector forca_resultante = new PVector(0, 0);

    forca_resultante.add(evita_parede(a));
    forca_resultante.add(passeio_aleatorio());
    // forca_resultante.add(gosta_do_mouse(a));

    return forca_resultante;
}

/** Calcula a distância do agente até a parede mais próxima a ele. */ 
PVector distancia_ate_parede_mais_proxima(PVector posicao) {
    PVector dist = new PVector(0, 0);

    if (posicao.x > width/2)
        dist.x = width - posicao.x;
    else
        dist.x = -posicao.x;

    if (posicao.y > height/2)
        dist.y = height - posicao.y;
    else
        dist.y = -posicao.y;

    return dist;
}

/** Define uma força inversamente proporcional a proximidade do agente a parede e
 * no sentido oposto a ela. */
PVector evita_parede(Agente a) {
    PVector forca_resultante = new PVector(0, 0);

    PVector dist = distancia_ate_parede_mais_proxima(a.fisica.posicao);

    if (abs(dist.x) < a.forma.raio)
        forca_resultante.x = -2*a.forma.raio/dist.x;
    if (abs(dist.y) < a.forma.raio)
        forca_resultante.y = -2*a.forma.raio/dist.y;

    return forca_resultante;
}

/** Define uma força aleatória. */ 
PVector passeio_aleatorio() {
    return forca_aleatoria();
}

/** Define uma força aleatória. */ 
PVector gosta_do_mouse(Agente a) {
    PVector mouse = new PVector(mouseX, mouseY);
    PVector dist = mouse.sub(a.fisica.posicao);

    int limiar = min(width, height)/2;

    float intensidade = 0;
    if (dist.mag() < limiar) /* Perto o suficiente para surtir efeito... */ 
        intensidade = (FORCA_MAX*dist.mag())/limiar;
        dist.normalize();

    dist.mult(intensidade);
    return dist;
}