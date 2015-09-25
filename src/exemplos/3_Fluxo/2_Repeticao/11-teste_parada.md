/*	Universidade de Brasilia
 *	Pseudocodigo -   Exemplo do laço de repetição WHILE. 
 *	Author: M. Vieira Coelho Neto
 * 	File: 11-teste_parada.md
 * 	Descrição feita pelo professor Guilherme N. Ramos (gnramos@unb.br)
 *	Disciplina: Algoritmos e Programação de Computadores */

Início
Variáveis
Inteiro: i <- 0;
Caractere deve_parar <- 0;
/* A condição de parada deve ser modificada dentro do próprio laço. */

i <- 0;
Faça
    ++i;
    deve_parar <- ((i%31) == 0); /* para quando for múltiplo de 31 */

	/* Poderia ser a leitura de um dado do usuário... */
Enquanto !deve_parar;

Mostra "Saiu do laço do-while porque deve_parar."

deve_parar <- 0;

Enquanto !deve_parar {
	deve_parar <- (((++i)%31) == 0);
    /* ... */
Fim-Enquanto

Mostra "Saiu do laço while porque deve_parar."

Para , até !deve_parar
    /* ... */
    deve_parar <- !(i%31);
Fim-Para

Mostra "Saiu do laço for porque deve_parar"

/* É possível indicar o fim do laço dentro do próprio laço. */
i <- 0;
Enquanto 1 /* Laço infinito! */
        /* ... */
	Se (((++i)%31) == 0)
	Fim-Se
    pare /* Sai quando for múltiplo de 31 */
	/* ... */
Fim-Enquanto
    
Mostra "Saiu do laço while porque (_ % 31) == 0.\n", i

i <- 0;
Faça
    /* ... */
	Se(((++i)%31) == 0)
    pare /* Sai quando for múltiplo de 31 */
	/* ... */
Enquanto 1; /* Laço infinito! */

Mostra "Saiu do laço do-while porque (_ %% 31) == 0.\n", i

Para, até, 
	/* Laço infinito! */
    /* ... */
    pare
Fim-Para

Mostra "Saiu do laço for porque executou 'pare'"

Fim