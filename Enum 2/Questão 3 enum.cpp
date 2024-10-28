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
	enum Dias_semana Dia;
	
	for(Dia = Domingo; Dia <= Sabado; Dia++){
		if( Dia == Domingo || Dia == Sabado){
		printf("Digite a temperatura registrada no %s: \n", matriz[Dia-1]);
		scanf("%f", &Temp[Dia-1]);
		media=media + Temp[Dia-1];
		}else{
		printf("Digite a temperatura registrada na %s: \n", matriz[Dia-1]);
		scanf("%f", &Temp[Dia-1]);
		media=media + Temp[Dia-1];
		}
	}
	
	media=media/7;
	
	printf ("\nA media eh: %.2f\n", media);
	for(Dia = Domingo; Dia <= Sabado; Dia++){
		if(Temp[Dia-1] >= media){
			if( Dia == Domingo || Dia == Sabado){
			printf("A temperatura no %s estava acima da media\n", matriz[Dia-1]);
			qtd = qtd + 1;
			}else{
			printf("A temperatura na %s estava acima da media\n", matriz[Dia-1]);
			qtd = qtd + 1;
			}
		}
	}
	
	printf ("\nA quantidade de dias da semana em que a temperatura esteve acima da media eh de %d dias", qtd);
	
	return 0;
}

