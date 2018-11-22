#include "ninja.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Ninja* ninja_create(char* nome, char* element, int nin, int gen, int tai, int def){ 	
	Ninja* ninja = (Ninja*)malloc(sizeof(Ninja));				   		
	ninja->nome = (char*)malloc(2*sizeof(nome));
    ninja->elemento = (char*)malloc(2*sizeof(element));							   	
	strcpy(ninja->nome, nome);
    strcpy(ninja->elemento, element);											   		
    ninja->ninjutsu = nin;
    ninja->genjutsu = gen;
    ninja->taijutsu = tai;
    ninja->defesa = def;	
    
    return ninja;														
}