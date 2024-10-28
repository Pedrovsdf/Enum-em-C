#include <stdio.h>

enum Nome_regioes{Norte=1, Nordeste, Centro_Oeste, Sudeste, Sul};

char matriz[][20] =
{
  "Norte",
  "Nordeste",
  "Centro_Oeste",
  "Sudeste",
  "Sul"
};

int main(){
	int N=0, j=0, R=1, Area[5];
	enum Nome_regioes Regioes;
	enum Nome_regioes Regiao;

	
	Area[0]= 3870000;
	Area[1]= 1554000;
	Area[2]= 1612000;
	Area[3]= 924511;
	Area[4]= 576774;
	
	do{
	printf("Digite um numero: ");
	scanf("%d", &N);
	
	if(N < 1 || N > 5){
		printf("\nDigite um valor valido!\n");
		printf("Deseja continuar? Digite 1 para sim e 2 para nao.\n");
		scanf("%d", &R);
	}else{
		for( Regiao = Norte; Regiao <= Sul; Regiao++){
			if(N == Regiao){
				printf("A regiao que corresponde a esse numero eh: %s\n", matriz[Regioes+j]);
				printf("Sua area eh: %dkm\n", Area[Regiao-1]);
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

