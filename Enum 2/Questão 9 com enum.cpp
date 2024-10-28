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
	enum Nome_candidatos Candidato;
	
	printf("\n---------- Coleta de dados dos candidatos ----------\n");
	for( Candidato = DrMarconesSa; Candidato <= PauloAfonso; Candidato++ ){
		printf("\nDigite a quantidade de votos do candidato: %s\n", matriz[Candidatos+j]);
		scanf("%d", &votos[Candidato-1]);
		j++;
	}
	
	j=0;
	
	int menor = votos[0], menorid = 1;
	
	for( Candidato = DrMarconesSa; Candidato < PauloAfonso; Candidato++ ){
		if( menor >= votos[Candidato-1] ){
			menor = votos[Candidato-1];
			menorid = Candidato;
		}
	}
	
	if( menor > votos[4] ){
		menorid = 5;
	}
	
	printf("\n---------- Resultado dos dados coletados ----------\n");
	
	for( Candidato = DrMarconesSa; Candidato <= PauloAfonso; Candidato++ ){
		if( menorid == Candidato ){
			printf("O candidato com a menor quantidade de votos foi: %s\n", matriz[Candidatos+j]);
		}
		j++;
	}
	
	return 0;
}
