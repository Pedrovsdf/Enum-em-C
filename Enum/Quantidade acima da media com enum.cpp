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
	int i=0, j=0, qtd=0;
	float Temp[7], media=0;
	enum Dias_semana Semana;
	
	for(i = Domingo; i <= Sabado; i++){
		if( i == Domingo || i == Sabado){
		printf("Digite a temperatura registrada no %s: \n", matriz[Semana+j]);
		scanf("%f", &Temp[i]);
		media=media + Temp[i];
		j++;
		}else{
		printf("Digite a temperatura registrada na %s: \n", matriz[Semana+j]);
		scanf("%f", &Temp[i]);
		media=media + Temp[i];
		j++;
		}
	}

	media=media/7;
	
	printf ("\nA media eh: %.2f\n", media);

	for(i = Domingo; i <= Sabado; i++){
		if(Temp[i] > media){
			qtd++;
		}
	}
	
	printf ("\nA quantidade de dias da semana em que a temperatura esteve acima da media eh de %d dias", qtd);
	
	return 0;
}
