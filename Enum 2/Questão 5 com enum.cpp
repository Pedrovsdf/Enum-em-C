#include <stdio.h>

enum Paises_UE{Alemanha = 1, Austria, Belgica, Bulgaria, Chequia, Chipre, Croacia, Dinamarca, Eslovaquia, Eslovenia, Espanha, Estonia,
Finlandia, Franca, Grecia, Hungria, Irlanda, Italia, Letonia, Lituania, Luxemburgo, Malta, Paises_Baixos, Polonia, Portugal, Romenia, Suecia};

char matriz[][20] =
{
  "Alemanha",
  "Austria",
  "Belgica",
  "Bulgaria",
  "Chequia",
  "Chipre",
  "Croacia",
  "Dinamarca",
  "Eslovaquia",
  "Eslovenia",
  "Espanha",
  "Estonia",
  "Finlandia",
  "Franca",
  "Grecia",
  "Hungria",
  "Irlanda",
  "Italia",
  "Letonia",
  "Lituania",
  "Luxemburgo",
  "Malta",
  "Paises_Baixos",
  "Polonia",
  "Portugal",
  "Romenia",
  "Suecia"
};

int main(){
	int N=0, j=0, R=1;
	enum Paises_UE Paises;
	enum Paises_UE Pais;
	
	do{
	printf("Digite um numero: ");
	scanf("%d", &N);
	
	if(N < 1 || N > 27){
		printf("Nao ha um pais correspondente a esse numero!\n");
		printf("Deseja continuar? Digite 1 para sim e 2 para nao.\n");
		scanf("%d", &R);
	}else{
		for( Pais = Alemanha; Pais <= Suecia; Pais++){
			if(N == Pais){
				printf("O pais que corresponde a esse numero eh: %s\n", matriz[Paises+j]);
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

