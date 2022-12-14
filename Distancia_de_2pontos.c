	/******************************************************************************
              05/10/22
            Diego Rocha Guilien Rodrigues
            Fabio Stampone Miranda
    *******************************************************************************/

#include <stdio.h>
#define K 3



//struct apelido-------------------------------
typedef struct ponto
{
  int x;
  int y;
} Ponto;

//funcao para calcular distancia---------------------
int calculaDistancia (int x1, int y1, int x2, int y2)
{
  return ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
//---------------------
int
main ()
{


  //typedef------------------------
  Ponto pontos[3];


  pontos[0].x = -4;
  pontos[0].y = 7;

  pontos[1].x = 2;
  pontos[1].y = -9;

  pontos[2].x = 5;
  pontos[2].y = 3;

//Calcula dittancia---------------------------
  int dist = 0;

  dist = calculaDistancia (pontos[0].x, pontos[0].y, pontos[1].x, pontos[1].y);
  printf ("Distancia = %d\n\n", dist);


//Ver pontos acima da reta X------------------------
  for (int i = 0; i < K; i++)
    {
      if (pontos[i].y > 0)
	{
	  printf ("Ponto %d (x = %d y = %d)  PONTO ACIMA DA RETA X\n", i, pontos[i].x, pontos[i].y);
	}
	else{
	    printf ("Ponto %d (x = %d y = %d)  PONTO ABAIXO DA RETA X\n", i, pontos[i].x, pontos[i].y);
	}
    }
  return 0;
}
