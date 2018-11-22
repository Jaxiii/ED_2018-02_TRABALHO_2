#ifndef ARVORE_H_INCLUDED
#define ARVORE_H_INCLUDED

#include "lista.h"
#include "ninja.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    Ninja* ninja;
    struct node* left;
    struct node* right;
} t_node;

t_node* node_create();
t_node* tree_create();
void inOrder(t_node* raiz);
void inOrder2(t_node* raiz);
void lista_arvore(t_node* raiz, t_elemento* elemento); //MONITORIA
void imprime_folhas(t_node* raiz);
int profundidadeMax(t_node* raiz);
#endif