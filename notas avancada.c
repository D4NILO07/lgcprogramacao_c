#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	//Variaveis
	
	char nome [200];
	float notaUm, notaDois;
	float media;
	char conceito;
	
	//Dados
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite sua nota 1: ");
	scanf("%f", &notaUm);
	
	printf("Digite sua nota 2: ");
	scanf("%f", &notaDois);
	
	//Executando...
	
	media = (notaUm + notaDois)/2;
	
	if (media>=9){
	    conceito = 'A';
	} 
	 else if (media>=7.5){
	    conceito = 'B';
	}  
	 else if (media>= 6){
		conceito = 'C';
	} 
	 else if (media>=4 ){
		conceito = 'D';
	} 
	 else if (media<4){
		conceito = 'E';
	}
	
	//Resultados
	
	printf("\n===Exibindo Resultados===");
	printf("\nNome do aluno: %s", nome);
	printf("\nNota 1: %.1f", notaUm);
	printf("\nNota 2: %.1f", notaDois);
	printf("\nMédia: %.1f" ,media);
	printf("\nConceito: %c", conceito);
	
	
	if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
	printf("\nAluno Aprovado!!");
	} else { printf("\nAluno Reprovado!!");
	}
	
	system("\npause");
	getchar();
	return 0;
}
