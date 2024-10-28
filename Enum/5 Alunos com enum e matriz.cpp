#include <stdio.h>
#include <stdlib.h>

enum Nome_alunos{Andressa=1, Andre, Pedro, Kayke, Wesley};

char matriz[][20] =
{
"Andressa",
"Andre",
"Pedro",
"Kayke",
"Wesley"
};

int main(){
	int i=1, j=0, k=1;
	float nota[6][3], mediaind[5], mediatotal=0;
	enum Nome_alunos Alunos;
	
	printf("\n---------- Coleta de dados dos alunos ----------\n");
	
	for( i = Andressa; i <= Wesley; i++ ){
		if(i == Andressa){
			printf("\nDigite as 3 notas da aluna: %s\n", matriz[Alunos]);
			scanf("%f", &nota[i][k-1]);
			scanf("%f", &nota[i][k]);
			scanf("%f", &nota[i][k+1]);
		}else{
			printf("\nDigite as 3 notas do aluno: %s\n", matriz[Alunos+j]);
			scanf("%f", &nota[i][k-1]);
			scanf("%f", &nota[i][k]);
			scanf("%f", &nota[i][k+1]);
		}
		j++;
	}
	
	for( i = Andressa; i <= Wesley; i++ ){
		mediaind[i] = (nota[i][k-1]+nota[i][k]+nota[i][k+1])/3;
		}
	
	for( i = Andressa; i <= Wesley; i++ ){
		mediatotal = mediaind[i] + mediatotal;
		}
	
	mediatotal = mediatotal/5;
	j=0;
	
	printf("\n---------- Resultado dos dados coletados ----------\n");
	
	printf("\nA media total eh de: %.2f\n", mediatotal);
	printf("\nOs alunos que estao acima da media e suas notas sao: \n ");
	
	for( i = Andressa; i <= Wesley; i++ ){
		if( i == Andressa && mediaind[i] >= mediatotal ){
			printf("\nAluna: %s\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", matriz[Alunos], mediaind[i], nota[i][k-1], nota[i][k], nota[i][k+1]);
			}
		if( mediaind[i] >= mediatotal && i != Andressa){
			printf("\nAluno: %s\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", matriz[Alunos+j], mediaind[i], nota[i][k-1], nota[i][k], nota[i][k+1]);
			}
		j++;
		}
	
	return 0;
}
