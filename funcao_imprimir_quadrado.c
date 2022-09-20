
#include <stdio.h>

int imprime (int l, int c, char x){
    for(int linha=1; linha<=l; linha++){
        for(int coluna=1; coluna<=c; coluna++){
            printf("%c", x);
        }
        printf("\n");
    }
    return l*c;
}


int main()
{
   
   printf("Quantidade de caracteres = %d", imprime(4,4,'A'));

    return 0;
}
