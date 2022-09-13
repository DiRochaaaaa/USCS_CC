/*Faça um programa que receba os três lados de um triângulo e faça as seguintes atividades: retornar se os três lados
realmente formam um triângulo e que tipo de triângulo é este. Cada uma destas atividades deve ser uma função.*/

#include <stdio.h>

int aprovarTriangulo(int a, int b, int c){ //função para validar triangulo
   
    int s1 = a + b;
    int s2 = b + c;
    int s3 = a + c;

    
    if (s1 > c && s2 > a && s3 > b){
        printf("É um triangulo\n");
        
    }
    else{
        printf("Não é um triangulo\n");
       
        return 0;
    }
    
    return 1;
}

int tipoTriangulo (int a, int b, int c){
    

    
        if(a == b && a == c && b == c){
            printf("É um triangulo Equilátero");
        }
        else if (a == b && a != c && b != c) {
             printf("É um triangulo isoceles");
        }
        else if (a != b && a == c && b != c) {
            printf("É um triangulo isoceles"); 
        }
        else if (a != b && a != c && b == c) {
            printf("É um triangulo isoceles"); 
        }
        else if (a != b && a != b && b !=c){
            printf("É um triangulo escaleno");
        }
      
    
    
}

int main()
{ 
  
    int a, b, c;
  scanf("%d %d %d", &a,&b,&c);
  
  if(aprovarTriangulo(a,b,c) == 0){
    
   
  }
  else  {
    
    tipoTriangulo(a,b,c);
  }
  
    return 2;
}