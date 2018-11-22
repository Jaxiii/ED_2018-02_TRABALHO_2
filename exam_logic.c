#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "exam_logic.h"
#include "ninja.h"
#include "lista.h"
#include "arvore.h"


void file(){
    t_lista* lista = aloca_lista();
    FILE *file = fopen("ninjas.txt", "r");
    char str[30];
    char *endptr;
    const char s[2] = ",";
    const char s2[2] = " ";
    char *token1, *token2, *token3, *token4, *token5, *token6;
    int nin,gen,tai,def, posicao;
    int random = rand();


    fgets (str, 60, file);

    token1 = strtok(str, s);
    token2 = strtok(NULL, s);
    token3 = strtok(NULL, s);
    token4 = strtok(NULL, s);
    token5 = strtok(NULL, s);
    token6 = strtok(NULL, s);

    nin = strtol(token3, &endptr, 10);
    gen = strtol(token4, &endptr, 10);
    tai = strtol(token5, &endptr, 10);
    def = strtol(token6, &endptr, 10);
    posicao = 1;

    inserir_Inicio(lista,token1, token2, nin, gen, tai, def, posicao);

    if (file) {
        while (fgets (str, 60, file) != NULL){
            token1 = strtok(str, s);
            token2 = strtok(NULL, s);;
            token3 = strtok(NULL, s);
            token4 = strtok(NULL, s);
            token5 = strtok(NULL, s);
            token6 = strtok(NULL, s);

            nin = strtol(token3, &endptr, 10);
            gen = strtol(token4, &endptr, 10);
            tai = strtol(token5, &endptr, 10);
            def = strtol(token6, &endptr, 10);
            posicao++;

            inserir_Fim(lista,token1, token2, nin, gen, tai, def, posicao);
        }
        imprime_Lista(lista);
    fclose(file);
    }
    t_node* tree = tree_create(3);
    inOrder(tree);
    lista_arvore(tree, lista->primeiro);
}