#include <stdio.h>

enum Nome_jogos{Call_of_Duty_Modern_Warfare=1, NBA_2K20, Madden_NFL_20, Borderlands_3, Mortal_Kombat_11};

char matriz[][30] =
{
  "Call_of_Duty:Modern_Warfare",
  "NBA_2K20",
  "Madden_NFL_20",
  "Borderlands_3",
  "Mortal_Kombat_11"
};

int main(){
	int i=1, N=0, j=0, R=1;
	enum Nome_jogos Jogos;
	
	do{
	printf("Digite um numero: ");
	scanf("%d", &N);
	
	if(N < 1 || N > 5){
		printf("\nDigite um valor valido!\n");
		printf("Deseja continuar? Digite 1 para sim e 2 para nao.\n");
		scanf("%d", &R);
	}else{
		for( i = Call_of_Duty_Modern_Warfare; i <= Mortal_Kombat_11; i++){
			if(N == i){
				printf("O jogo que corresponde a esse numero no ranking eh: %s\n", matriz[Jogos+j]);
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
