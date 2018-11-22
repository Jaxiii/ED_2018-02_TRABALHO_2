#include "lista.h"
#include "ninja.h"
#include <stdio.h>
#include <stdlib.h>

t_lista* aloca_lista(){
    t_lista* lista = (t_lista*)malloc(sizeof(t_lista));	
    lista->primeiro = NULL;
    lista->fim = NULL;

    return lista;
}

t_elemento* aloca_elemento(char* nome, char* element, int nin, int gen, int tai, int def, int posicao){
    t_elemento* elemento = (t_elemento*)malloc(sizeof(t_elemento));
    elemento->ninja = ninja_create(nome, element, nin, gen, tai, def);
	elemento->posicao = posicao;
	elemento->proxima = NULL;
    elemento->anterior = NULL;

    return elemento;
}

int inserir_Fim(t_lista* lista, char* nome, char* element, int nin, int gen, int tai, int def, int posicao){
	t_elemento* elemento = aloca_elemento(nome,element,nin,gen,tai,def,posicao); 		
	lista->fim->proxima = elemento;												
	lista->fim = elemento;		

	return 1;	
}

int inserir_Inicio(t_lista* lista, char* nome, char* element, int nin, int gen, int tai, int def, int posicao){
	if (lista->primeiro == NULL){												// CONDICIONAL CASO A LISTA ESTEJA VAZIA.
		t_elemento* elemento = aloca_elemento(nome,element,nin,gen,tai,def,posicao); 	// INVOCAMOS A FUNÇÃO DE ALOCAÇÃO DE ELEMENTO.
		lista->primeiro = elemento; 											// NESTE CASO O ELELENTO É O PRIMEIRO DA LISTA.
		lista->fim = elemento;													// E TAMBEM O ÚLTIMO.													// INCREMENTA-SE EM UM A QUANTIDADE DE ELEMENTOS NA LISTA.
		return 1;
	} 
	else {																		// CONDICIONAL CASO A LISTA NÃO ESTEJA VAZIA.		
		t_elemento* elemento = aloca_elemento(nome,element,nin,gen,tai,def,posicao); 
		elemento->proxima = lista->primeiro;									// O PRIMEIRO ELEMENTO SE TORNA O NOVO SUCESSOR DO ELEMENTO A SER INSERIDO
		lista->primeiro = elemento;												// O ELEMENTO A SER INSERIDO SE TORNA O NOVO PRIMEIRO DA LISTA, 													// INCREMENTA-SE EM UM A QUANTIDADE DE ELEMENTOS NA LISTA.
		return 1;
	}
}

void imprime_Lista(t_lista* lista){  											// FUNCAO CRIADA PARA AUXILIAR NO DEBUGG/AVALIACAO DO PROGRAMA
	if (lista->primeiro != NULL){    											// IMPRIME OS ELEMENTOS ENQUANTO O ELEMENTO LIDO FOR != NULL		
		t_elemento* atual = lista->primeiro;
		while (atual != NULL) {
			printf("[%i] -> ", atual->posicao);
			printf("%s,", atual->ninja->nome);
			printf("%s, ", atual->ninja->elemento);
			printf("%i, ", atual->ninja->ninjutsu);
			printf("%i, ", atual->ninja->genjutsu);
			printf("%i, ", atual->ninja->taijutsu);
			printf("%i\n", atual->ninja->defesa);
			atual = atual->proxima;
		}
	}
}