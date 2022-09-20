/******************************************************************************
 Diego Rocha 19/09/22 - Impressao de Triangulo de Caracteres
*******************************************************************************/
#include <stdio.h>
int imprime (char var, int x) {
    for (int l=1; l<=x; l++){
        for (int c=1; c<=l; c++){
            printf ("%c", var);
        }
        printf ("\n");
    }
    return ((1 + x)*x)/2;
}

int main() {
    int qnt = imprime ('*',5);
    printf("Quantidade de caracteres = %d", qnt);
}



