#include <stdio.h>

enum Nome_componentes{Monitor=1, Placa_mae, Processador, Memoria_RAM, Placas_de_expansao, Fonte_de_alimentacao, Unidade_CD_DVD, Disco_rigido, Teclado, Mouse};

char matriz[][30] =
{
  "Monitor",
  "Placa-mae",
  "Processador",
  "Memoria_RAM",
  "Placas_de_expansao",
  "Fonte_de_alimentacao",
  "Unidade_CD_DVD",
  "Disco_rigido",
  "Teclado",
  "Mouse"
};

int main(){
	int i=1, N=0, j=0, R=1;
	enum Nome_componentes Componentes;
	
	do{
	printf("Digite um numero: ");
	scanf("%d", &N);
	
	if(N < 1 || N > 10){
		printf("\nNao ha um componente correspondente a esse numero!\n");
		printf("Deseja continuar? Digite 1 para sim e 2 para nao.\n");
		scanf("%d", &R);
	}else{
		for( i = Monitor; i <= Mouse; i++){
			if(N == i){
				printf("O componente que corresponde a esse numero eh: %s\n", matriz[Componentes+j]);
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
