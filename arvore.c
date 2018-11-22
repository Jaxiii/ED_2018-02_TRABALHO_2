#include "arvore.h"

t_node* node_create(){
    t_node* node = (t_node*)malloc(sizeof(t_node));
    node->ninja = NULL;
    node->left = NULL;
    node->right = NULL;

    return node;
}

t_node* tree_create(int a){
    t_node* raiz = node_create();
    while (a != 0){
        raiz->ninja = NULL;
        raiz->left = tree_create(a-1);
        raiz->right = tree_create(a-1);
        return raiz;
    }
    return raiz;
}

void lista_arvore(t_node* raiz, t_elemento* elemento){ 
    if (raiz != NULL && elemento != NULL){
        lista_arvore(raiz->left, elemento);
        raiz->ninja = elemento->ninja;
        lista_arvore(raiz->right, elemento->proxima);
        raiz->ninja = elemento->ninja;
    }
}

void imprime_folhas(t_node* raiz){
    if(raiz == NULL){   
        return;
    } else {
        if (raiz->left != NULL){
            imprime_folhas(raiz->left);
        } else {
            printf("%s\n", raiz->ninja->nome);
        }
        if (raiz->right != NULL){
            imprime_folhas(raiz->right);
        } else {
            printf("%s\n", raiz->ninja->nome);
        }
    }
}

void inOrder(t_node* raiz){
    if (raiz != NULL){
        inOrder(raiz->left);
        printf("%p\n", raiz);
        inOrder(raiz->right);
    }
    return;
}

void inOrder2(t_node* raiz){
    if(raiz!=NULL){
        if(raiz->ninja!=NULL){
            printf("%s\n", raiz->ninja->nome);  
        }
        inOrder2(raiz->left);
        inOrder2(raiz->right);
    }
}


int profundidadeMax(t_node* raiz){
    if (raiz == NULL){
        return 0;
    } else {
        int maxEsq = (profundidadeMax(raiz->left));
        int maxDir = (profundidadeMax(raiz->right));

        if (maxEsq > maxDir){
            return (maxEsq+1);
        } else {
            return (maxDir+1);
        }
    }
}