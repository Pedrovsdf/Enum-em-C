#include <stdio.h>

enum Nome_bandas{Queen=1, Guns_N_Roses, Bon_Jovi, Iron_Maiden};

char matriz[][20] =
{
  "Queen",
  "Guns_N_Roses",
  "Bon_Jovi",
  "Iron_Maiden"
};

int main(){
	int i=1, N=0, j=0, R=1;
	enum Nome_bandas Bandas;
	
	do{
	printf("Digite um numero: ");
	scanf("%d", &N);
	
	if(N < 1 || N > 4){
		printf("\nNao ha nenhuma banda correspondente a esse numero!\n");
		printf("Deseja continuar? Digite 1 para sim e 2 para nao.\n");
		scanf("%d", &R);
	}else{
		for( i = Queen; i <= Iron_Maiden; i++){
			if(N == i){
				printf("A banda que corresponde a esse numero eh: %s\n", matriz[Bandas+j]);
			}
			j++;
		}
		printf("Deseja continuar? Digite 1 para sim ou outro numero para nao.\n");
		scanf("%d", &R);
		j=0;
	}
	}while(R == 1);
	
	printf("\nPrograma encerrado!\n");
	
	return 0;
}
