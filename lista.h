#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
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

/*! 
    \brief Estrutura abstrata do tipo Lista , contendo estruturas do tipo Ninja.
    
    Esta estrutura abstrata do tipo lista duplamente encadeada
    guarda informações do ninja correspondende, assim como o ninja anterior e posterior
    na lista.
*/ 
typedef struct lista{
    Ninja* ninja; /*!< Estrutura do tipo ninja */
    struct lista* anterior; /*!< elemento (ninja) anterior */
    struct lista* proxima; /*!< elemento (ninja) posterior */
} Lista ;
#endif