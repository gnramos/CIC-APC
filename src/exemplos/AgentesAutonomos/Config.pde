/**      @file: Config.pde
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Centraliza as definições que configuram a simulação. Cuidado ao manipular as
 * variáveis globais. */

/** Define a cor do fundo de tela no padrão RGB. */ 
static color COR_DE_FUNDO = #FFFFFF;

/** Número de agentes a simular. */ 
final static int NUM_AGENTES =  10;

/** Vetor de agentes. */ 
Agente[] agentes = new Agente[NUM_AGENTES];

/** Valor mínimo para massa de um agente. */ 
final static float MASSA_MIN = 10;

/** Valor máximo para massa de um agente. */ 
final static float MASSA_MAX = 50;

/** Magnitude máxima da força que pode ser aplicada a um agente. */ 
static float FORCA_MAX = 2;

/** Valor mínimo para o raio de um agente. */ 
final static float RAIO_MIN = 10;

/** Valor máximo para o raio de um agente. */ 
final static float RAIO_MAX = 50;