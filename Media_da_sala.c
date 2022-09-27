/******************************************************************************
 * Diego Rocha Guilien Rodrigues
Struct - Exemplo Média aluno 

*******************************************************************************/
#include <stdio.h>
#define tamanho 2
 float calculamedia( float N1, float N2)
{
    float md;
    md = (N1 + N2)/2;
    return (md);
}




int main() {
    
    float mediaTotal, aux;
    
    struct estruturaAluno {
             int matricula;
             float N1;
             float N2;
             float media;
    };
    struct estruturaAluno aluno[tamanho];
    
    // Entrada de DADOS
    for(int i=0; i < tamanho; i++ ){
       printf( "||||||||||||||||||||DADOS DO ALUNO||||||||||||||||||| \n\n");
       printf( "Matrícula do aluno: ");
       scanf ("%d" ,&aluno[i].matricula);
       printf( "Nota N1: ");
       scanf ("%f", &aluno[i].N1);
       printf( "Nota N2: ");
       scanf ("%f", &aluno[i].N2);
       
        // Processamento
       aluno[i].media = calculamedia(aluno[i].N1,aluno[i].N2);
       
       //media da sala
       
       aux += aluno[i].media;
       mediaTotal = aux/tamanho;
    }
   
    
        

    // Saída - Impressão do Boletim do Aluno
    for(int i=0; i < tamanho; i++ ){
        printf( "\n\nBOLETIM DO ALUNO: %d\n", aluno[i].matricula);
        printf( "\nNota N1: %.1f", aluno[i].N1);
        printf( "\nNota N2: %.1f", aluno[i].N2);
        printf( "\nMedia..: %.1f", aluno[i].media);
       
    }
    printf("\n\n-------------------------------------");
    printf("\nNumero de alunos: %d\n", tamanho);
    
   
    printf("Media da sala: %.1f", mediaTotal);
    
       return (0);
}



