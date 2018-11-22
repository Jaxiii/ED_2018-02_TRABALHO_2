#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ninja.h"

/*###############################################################
#																#
#																#
#	    Bruno Sanguinetti R. de Barros 	            			#
#		Brasília, 7 de Setembro de 2018 						#
#		Universidade de Brasília								#
#		Departamento de Ciência da Computação					#
#		Estruturas de Dados – Turma A – 2018/2					#
#		Prof. Dr. Marcos Caetano 								#
#																#
#																#
################################################################*/

/*! 
    \brief Estrutura abstrata do tipo Lista , contendo estruturas do tipo Ninja.
    
    Esta estrutura abstrata do tipo lista duplamente encadeada
    guarda informações do ninja correspondende, assim como o ninja anterior e posterior
    na lista.
*/ 
typedef struct elemento{
    Ninja* ninja; /*!< Estrutura do tipo ninja */
    struct elemento* anterior; /*!< elemento (ninja) anterior */
    struct elemento* proxima; /*!< elemento (ninja) posterior */
    int posicao;
} t_elemento;

/*! 
    \brief Estrutura abstrata do tipo t_lista , contendo estruturas do tipo elemento (Ninjas).
    
    Esta estrutura abstrata para facilitar a manipulacao de uma lista duplamente encadeada que
    guarda informações do ninja correspondende, assim como o ninja anterior e posterior
    na lista.
*/ 
typedef struct lista{
    t_elemento* primeiro; /*!< Primeiro elemento na lista */
    t_elemento* fim; /*!< Ultimo elemento na lista */
} t_lista;

// Assinaturas:

t_lista* aloca_lista(); 
/*! \fn Estrutura alocada dinamicamente, tendo os ponteiros primeiro e fim
apontados para NULL e quantidade = 0;*/

t_elemento* aloca_elemento();

void remove_lista(t_lista* lista);
/*A função remove todos os elementos da lista e toda a memória alocada
de forma dinâmica.*/

int inserir_Inicio(t_lista* lista, char* nome, char* element, int nin, int gen, int tai, int def, int posicao);
/*Função auxuliar para a função inserir(...). 
Adiciona um elemento na primeira posição da lista, estando ela vazia ou não, 
e incrementa a quantiade de elementos na lista. 
Parte das condicionais para essa função estão na função principal de inserção */

int inserir_Fim(t_lista* lista, char* nome, char* element, int nin, int gen, int tai, int def, int posicao);
/*Função auxuliar para a função inserir(...). Adiciona um elemento 
na ultima posição da lista e incrementa a quantidade de elementos na lista em um. 
As condicionais para essa função são feitas pela função principal de inserção */

void imprime_Lista(t_lista* lista);

#endif
