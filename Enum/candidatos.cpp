#include <stdio.h>
#include <stdlib.h>

enum Nome_candidatos{DrMarconesSa=1, ClebelCordeiro, Nemedio, DrCacau, PauloAfonso};

char matriz[][20] =
{
"Dr Marcones Sa",
"Clebel Cordeiro",
"Nemedio",
"Dr Cacau",
"Paulo Afonso"
};

int main(){
	int i=1, j=0, votos[5];
	enum Nome_candidatos Candidatos;
	
	printf("\n---------- Coleta de dados dos candidatos ----------\n");
	for( i = DrMarconesSa; i <= PauloAfonso; i++ ){
		printf("\nDigite a quantidade de votos do candidato: %s\n", matriz[Candidatos+j]);
		scanf("%d", &votos[i-1]);
		j++;
	}
	
	j=0;
	
	int menor = votos[0], menorid = 1;
	
	for( i = DrMarconesSa; i < PauloAfonso; i++ ){
		if( menor >= votos[i-1] ){
			menor = votos[i-1];
			menorid = i;
		}
	}
	
	if( menor > votos[4] ){
		menorid = 5;
	}
	
	printf("\n---------- Resultado dos dados coletados ----------\n");
	
	for( i = DrMarconesSa; i <= PauloAfonso; i++ ){
		if( menorid == i ){
			printf("O candidato com a menor quantidade de votos foi: %s\n", matriz[Candidatos+j]);
		}
		j++;
	}
	
	return 0;
}
