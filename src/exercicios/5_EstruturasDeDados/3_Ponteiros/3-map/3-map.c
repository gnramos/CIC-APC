#include <stdio.h>
#include <stdlib.h>


struct vetor
{
	int 	tamanho;
	int*	elementos;
};

typedef struct vetor Vetor;

typedef int (*Funcao)(int);


Vetor novo_vetor(int tamanho)
{
	Vetor v;
	v.tamanho = tamanho;
	v.elementos = malloc(sizeof(int) * tamanho);

	return v;
}



void destroi_vetor(Vetor v)
{
	free(v.elementos);
}


void map(Vetor v, Funcao pred)
{
	for (int i = 0; i < v.tamanho; ++i)
	{
		v.elementos[i] = pred(v.elementos[i]);
	}
}



int main()
{

}
