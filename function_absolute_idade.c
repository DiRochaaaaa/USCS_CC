#include <stdio.h>
#include <locale.h>



int idade(){ //entrada
	int i;
	
	printf("Digite uma idade: ");
		scanf("%d", &i);
	
	while(i<=0 || i>=110){
		printf("Digite uma idade coerente: ");
		scanf("%d", &i);
	}
	return i;
}

int abs(int x){  //função abs
	if (x < 0) x = (-1) * x;
	return x;
}


int main(){ //saida
	 setlocale(LC_ALL, "Portuguese");
	int id1, id2, dif;
	
	id1 = idade();
	id2 = idade();
		dif = id1 - id2;
		printf("Dif: %d", abs(dif));

	return 0;
}
