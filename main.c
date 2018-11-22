#include <stdio.h>
#include "exam_logic.h"

int main() {
    int input;

    do
    {
        printf("\nMenu:\n");
        printf("\n[1] Exame Chunin\n");
        printf("[2] Sair\n");
        printf("\n-> ");
        scanf("%i", &input);

        switch (input)
        {
            case 1:
                file();
                break;
            case 2:
                printf("%s", "Finalizando...\n");
                break;
            default:
                printf("%s", "Opcao invalida! Tente novamente\n");
                break;
        }
    } while (input != 2);
}

