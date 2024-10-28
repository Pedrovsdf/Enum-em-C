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
	int i=0, qtd=0;
	float Temp[7], media=0;
	enum Dias_semana Semana;
	
	for(i = Domingo; i <= Sabado; i++){
		if( i == Domingo || i == Sabado){
		printf("Digite a temperatura registrada no %s: \n", matriz[i-1]);
		scanf("%f", &Temp[i-1]);
		media=media + Temp[i-1];
		}else{
		printf("Digite a temperatura registrada na %s: \n", matriz[i-1]);
		scanf("%f", &Temp[i-1]);
		media=media + Temp[i-1];
		}
	}
	
	media=media/7;
	
	printf ("\nA media eh: %.2f\n", media);
	for(i = Domingo; i <= Sabado; i++){
		if(Temp[i-1] >= media){
			if( i == Domingo || i == Sabado){
			printf("A temperatura no %s estava acima da media\n", matriz[i-1]);
			qtd = qtd + 1;
			}else{
			printf("A temperatura na %s estava acima da media\n", matriz[i-1]);
			qtd = qtd + 1;
			}
		}
	}
	
	printf ("\nA quantidade de dias da semana em que a temperatura esteve acima da media eh de %d dias", qtd);
	
	return 0;
}
