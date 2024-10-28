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
	enum Nome_alunos Aluno;
	
	printf("\n---------- Coleta de dados dos alunos ----------\n");
	
	for( Aluno = Andressa; Aluno <= Wesley; Aluno++ ){
		if(Aluno == Andressa){
			printf("\nDigite as 3 notas da aluna: %s\n", matriz[Aluno-1]);
			scanf("%f", &nota[Aluno][k-1]);
			scanf("%f", &nota[Aluno][k]);
			scanf("%f", &nota[Aluno][k+1]);
		}else{
			printf("\nDigite as 3 notas do aluno: %s\n", matriz[Aluno-1]);
			scanf("%f", &nota[Aluno][k-1]);
			scanf("%f", &nota[Aluno][k]);
			scanf("%f", &nota[Aluno][k+1]);
		}
		j++;
	}
	
	for( Aluno = Andressa; Aluno <= Wesley; Aluno++ ){
		mediaind[Aluno] = (nota[Aluno][k-1]+nota[Aluno][k]+nota[Aluno][k+1])/3;
		}
	
	for( Aluno = Andressa; Aluno <= Wesley; Aluno++ ){
		mediatotal = mediaind[Aluno] + mediatotal;
		}

	mediatotal = mediatotal/5;
	j=0;
	
	printf("\n---------- Resultado dos dados coletados ----------\n");
	
	printf("\nA media total eh de: %.2f\n", mediatotal);
	printf("\nOs alunos que estao acima da media e suas notas sao: \n ");
	
	for( Aluno = Andressa; Aluno <= Wesley; Aluno++ ){
		if( Aluno == Andressa && mediaind[Aluno] >= mediatotal ){
			printf("\nAluna: %s\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", matriz[Aluno-1], mediaind[Aluno], nota[Aluno][k-1], nota[Aluno][k], nota[Aluno][k+1]);
			}
		if( mediaind[Aluno] >= mediatotal && Aluno != Andressa){
			printf("\nAluno: %s\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", matriz[Aluno-1], mediaind[Aluno], nota[Aluno][k-1], nota[Aluno][k], nota[Aluno][k+1]);
			}
		j++;
		}
	
	return 0;
}
