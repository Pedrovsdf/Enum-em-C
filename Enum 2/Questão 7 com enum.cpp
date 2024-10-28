#include <stdio.h>

enum Dias_semana{Domingo=1, Segunda, Terca, Quarta, Quinta, Sexta, Sabado};

char matriz[][20] =
{
"Domingo",
"Segunda",
"Terca",
"Quarta",
"Quinta",
"Sexta",
"Sabado"
};

int main (){
	int i=0, vendas[7], menor=0, maior=0, menorid=0, maiorid=0;
	enum Dias_semana Dia;
	
	for(Dia = Domingo; Dia <= Sabado; Dia++){
		if( Dia == Domingo || Dia == Sabado){
		printf("Digite o numero de vendas no %s: \n", matriz[Dia-1]);
		scanf("%d", &vendas[Dia-1]);
		}else{
		printf("Digite o numero de vendas na %s: \n", matriz[Dia-1]);
		scanf("%d", &vendas[Dia-1]);
		}
	}
	
	menor=vendas[0];
	maior=vendas[0];
	
	for(Dia = Domingo; Dia <= Sabado; Dia++){
		if( menor >= vendas[Dia-1] ){
			menor= vendas[Dia-1];
			menorid= Dia;
		}
		if( maior <= vendas[Dia-1] ){
			maior= vendas[Dia-1];
			maiorid= Dia;
		}
	}
	
	for(Dia = Domingo; Dia <= Sabado; Dia++){
		if( menorid == Dia ){
			printf("O dia com menor numero de vendas foi %s, com %d vendas.\n", matriz[Dia-1], menor);
		}
		if( maiorid == Dia ){
			printf("O dia com maior numero de vendas foi %s, com %d vendas.\n", matriz[Dia-1], maior);
		}
	}
	
	return 0;
}
