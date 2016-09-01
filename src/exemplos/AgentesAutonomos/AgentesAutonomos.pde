/**      @file: AgentesAutonomos.pde
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * O funcionamento da execução pode ser simplificado considerando uma
 * implementação com o seguinte laço:
 *
 * void main() {
 *     setup();
 *     while(true)
 *         draw();
 * }
 *
 * Certas condições forçam o fim da simulação, por exemplo, apertar o botão
 * "Stop" ou a tecla "Esc". O ambiente testa estas condições automaticamente. */



/**************************************
 * Funções Obrigatórias do Processing *
 **************************************/

/** Função padrão do Processing, chamada uma única vez no início de cada
 * simulação. */
void setup() {
    // Configuração inicial do ambiente. 
    fullScreen();
    surface.setResizable(false);

    inicializa_agentes();
}

/** Função padrão do Processing, chamada uma vez a cada iteração da simulação. */
void draw() {
    atualiza_ambiente();
    atualiza_agentes();

    desenha_ambiente();
    desenha_agentes();
}




/******************
 * Demais Funções *
 ******************/

/** Inicialização dos agentes. */ 
void inicializa_agentes() {
    for (int i = 0; i < NUM_AGENTES; ++i)
        agentes[i] = agente_aleatorio();
}

/** Atualiza os elementos do ambiente (que não são agentes). */ 
void atualiza_ambiente() {
    // Nada, mas poderia, por exemplo, alterar um pouco a cor do fundo de tela.
}

/** Atualiza todos os elementos do agentes. */ 
void atualiza_agentes() {
    for (Agente a : agentes)
        atualiza_agente(a);

    /* O laço acima é equivalente ao abaixo, e é mais "intuitivo".
     for (int i = 0; i < NUM_AGENTES; ++i)
         atualiza_agente(agentes[i]); */
}

/** Exibe todos os elementos do ambiente (que não são agentes). */ 
void desenha_ambiente() {
    background(COR_DE_FUNDO);
}

/** Exibe todos os agentes. */ 
void desenha_agentes() {
    for (Agente a : agentes)
        desenha_agente(a);
}