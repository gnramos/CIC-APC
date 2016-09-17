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

/*Verifica se um inteiro é par*/
int par(int x)
{
	return !(x % 2);
}

/*Retorna o triplo de um elemento*/
int triplo(int x)
{
	return 3 * x;
}

/*Aplica pred() em cada elemento presente no vetor*/
Vetor map(Vetor v, Funcao pred)
{
	Vetor novo = novo_vetor(v.tamanho);
	for (int i = 0; i < v.tamanho; ++i)
	{
		novo.elementos[i] = pred(v.elementos[i]);
	}
	destroi_vetor(v);

	return novo;
}

/* Retira do vetor os elementos que não satisfazem pred()*/
Vetor filter(Vetor v, Funcao pred)
{
	int satisfazem = 0;
	for (int i = 0; i < v.tamanho; ++i)
		if(pred(v.elementos[i]))
			satisfazem++;

	Vetor novo = novo_vetor(satisfazem);
	for (int i = 0 , j = 0; i < v.tamanho; ++i)
	{
		if(pred(v.elementos[i]))
		{
			novo.elementos[j] = v.elementos[i];
			j++;
		}
	}
	destroi_vetor(v);
	return novo;
}


void imprime_vetor(Vetor v)
{
	printf("===========\n");
	for (int i = 0; i < v.tamanho; ++i)
		printf("%d\n",v.elementos[i]);
	printf("===========\n");
}

int main()
{
	/*Criando vetor e inicializando com valores {0,1,2,3,4}*/
	Vetor v = novo_vetor(5);
	for (int i = 0; i < v.tamanho; ++i)
		v.elementos[i] = i;	
	imprime_vetor(v);
		
	v = map(v,triplo);
	imprime_vetor(v);
	
	v = filter(v,par);
	imprime_vetor(v);	



	destroi_vetor(v);
}
