/******************************************************************************

Diego Rocha Guilien Rodrigues

*******************************************************************************/
#include <stdio.h>
#define TAM 3

 typedef struct Banda{
        char nome[50];
        char tipo[50];
        int qnt;
        int rank;
    } BANDA;
    
    void LeBanda (BANDA *x){
        for(int i=0;i<TAM;i++){
        printf("\nNome da banda: "); scanf("%s", x[i].nome);
        printf("Estilo Musical: "); scanf("%s", x[i].tipo);
        printf("Numero de integrantes: "); scanf("%d", &x[i].qnt);
        printf("Posição no ranking "); scanf("%d", &x[i].rank);
        }
    }
    
    void MostraBanda (BANDA *show){
        for(int i=0;i<TAM;i++){
        printf("\nNome da banda: %s \n", show[i].nome); 
        printf("Estilo Musical: %s \n",  show[i].tipo); 
        printf("Numero de integrantes: %d\n", show[i].qnt); 
        printf("Posição no ranking %d \n", show[i].rank); 
    }
}
int main()
{
   
    BANDA b[TAM];
    
    LeBanda(b);
    printf("\n\n---------------Lista de bandas:-------------------\n\n");
    MostraBanda(b);
    
    
    return 0;
}
