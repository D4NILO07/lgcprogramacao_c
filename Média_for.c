#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	//Variáveis..
	
	float notas, media, soma;
	int i;
	
	
	//Dados..
	
	for( i = 1; i<= 3; i++) {
		printf("Digite a %iª nota: ", i);
		scanf("%f", &notas);
		
		soma = soma + notas; 
	}
	

	//Executando..
	
		media = soma/3;
	
	
	//Resultados..
	printf("\n===EXIBINDO RESULTADOS===");
	printf("\nMédia: %.0f", media);
	if (media >= 7){
		printf("\nAluno Aprovado!!");
	} else {
		printf("\nAluno Reprovado!!");
	}
}

