#include <stdio.h>

enum Meses_ano{Janeiro=1, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro, Novembro, Dezembro};

char matriz[][20] =
{
  "Janeiro",
  "Fevereiro",
  "Marco",
  "Abril",
  "Maio",
  "Junho",
  "Julho",
  "Agosto",
  "Setembro",
  "Outubro",
  "Novembro",
  "Dezembro"
};

int main(){
	int i=1, N=0, j=0, R=1;
	enum Meses_ano Meses;
	enum Meses_ano Mes;

	
	do{
	printf("Digite um numero: ");
	scanf("%d", &N);
	
	if(N < 1 || N > 12){
		printf("Nao ha um mes correspondente a esse numero!\n");
		printf("Deseja continuar? Digite 1 para sim e 2 para nao.\n");
		scanf("%d", &R);
	}else{
		for( Mes = Janeiro; Mes <= Dezembro; Mes++){
			if(N == Mes){
				printf("O mes que corresponde a esse numero eh: %s\n", matriz[Meses+j]);
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

