#include <stdio.h>

int main(){
	float nota1=0, nota2=0, nota3=0, nota4=0, nota5=0, nota6=0, nota7=0, nota8=0, nota9=0, nota10=0, nota11=0, nota12=0, nota13=0, nota14=0, nota15=0;
	float mediaind1=0, mediaind2=0, mediaind3=0, mediaind4=0, mediaind5=0;
	float mediatotal=0;
	
	printf("\n---------- Coleta de dados dos alunos ----------\n");
	
	printf("\nDigite as 3 notas da aluna: Andressa\n");
	scanf("%f", &nota1);
	scanf("%f", &nota2);
	scanf("%f", &nota3);
	
	printf("\nDigite as 3 notas do aluno: Andre\n");
	scanf("%f", &nota4);
	scanf("%f", &nota5);
	scanf("%f", &nota6);
	
	printf("\nDigite as 3 notas do aluno: Pedro\n");
	scanf("%f", &nota7);
	scanf("%f", &nota8);
	scanf("%f", &nota9);
	
	printf("\nDigite as 3 notas do aluno: Kayke\n");
	scanf("%f", &nota10);
	scanf("%f", &nota11);
	scanf("%f", &nota12);
	
	printf("\nDigite as 3 notas do aluno: Wesley\n");
	scanf("%f", &nota13);
	scanf("%f", &nota14);
	scanf("%f", &nota15);
	
	mediaind1 = (nota1 + nota2 + nota3)/3;
	mediaind2 = (nota4 + nota5 + nota6)/3;
	mediaind3 = (nota7 + nota8 + nota9)/3;
	mediaind4 = (nota10 + nota11 + nota12)/3;
	mediaind5 = (nota13 + nota14 + nota15)/3;
	
	mediatotal = (mediaind1 + mediaind2 + mediaind3 + mediaind4 + mediaind5)/5;
	
	printf("\n---------- Resultado dos dados coletados ----------\n");
	
	printf("\nA media total eh de: %.2f\n", mediatotal);
	printf("\nOs alunos que estao acima da media e suas notas sao:\n ");
	
	if (mediaind1 >= mediatotal){
		printf("\nAluna: Andressa\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind1, nota1, nota2, nota3);
	}
	if (mediaind2 >= mediatotal){
		printf("\nAluno: Andre\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind2, nota4, nota5, nota6);
	}
	if (mediaind3 >= mediatotal){
		printf("\nAluno: Pedro\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind3, nota7, nota8, nota9);
	}
	if (mediaind4 >= mediatotal){
		printf("\nAluno: Kayke\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind4, nota10, nota11, nota12);
	}
	if (mediaind5 >= mediatotal){
		printf("\nAluno: Wesley\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind5, nota13, nota14, nota15);
	}
	
	return 0;
}
