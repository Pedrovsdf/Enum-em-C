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
	enum Dias_semana Semana;
	
	for(i = Domingo; i <= Sabado; i++){
		if( i == Domingo || i == Sabado){
		printf("Digite o numero de vendas no %s: \n", matriz[i-1]);
		scanf("%d", &vendas[i-1]);
		}else{
		printf("Digite o numero de vendas na %s: \n", matriz[i-1]);
		scanf("%d", &vendas[i-1]);
		}
	}
	
	menor=vendas[0];
	maior=vendas[0];
	
	for(i = Domingo; i <= Sabado; i++){
		if( menor >= vendas[i-1] ){
			menor= vendas[i-1];
			menorid= i;
		}
		if( maior <= vendas[i-1] ){
			maior= vendas[i-1];
			maiorid= i;
		}
	}
	
	for(i = Domingo; i <= Sabado; i++){
		if( menorid == i ){
			printf("O dia com menor numero de vendas foi %s, com %d vendas.\n", matriz[i-1], menor);
		}
		if( maiorid == i ){
			printf("O dia com maior numero de vendas foi %s, com %d vendas.\n", matriz[i-1], maior);
		}
	}
	
	return 0;
}
