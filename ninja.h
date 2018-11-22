#ifndef NINJA_H_INCLUDED
#define NINJA_H_INCLUDED
/*! 
    \brief Estrutura abstrata do tipo Ninja.

    Esta estrutura abstrata do tipo ninja
    guarda informações do ninja correspondende, como o seu nome, 
    elemento, defesa e a forca de seus justus.
*/

typedef struct ninja{ /*!< \typedef Nome do Ninja */
    char* nome;  /*!< Nome do Ninja */
    char* elemento; /*!< Elemento do ninja (AGUA, FOGO...) */
    int ninjutsu ; /*!< 0 ... 100 */
    int genjutsu ; /*!< 0 ... 100 */
    int taijutsu ; /*!< 0 ... 100 */
    int defesa ; /*!< 0 ... 100 */
} Ninja ;

Ninja* ninja_create(char* nome, char* elemento, int nin, int gen, int tai, int def);

#endif