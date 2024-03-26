#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	//Variaveis
	
	float notas, media, soma;
	int i;
	char resposta[200] = "sim";
	int contador = 0;
	char continua;
	
	//Dados
	
	for( i = 1; i<= 2; i++) {
	
		do {
	printf("Digite a %iª nota do aluno: ", i);
	scanf("%f", &notas);
	printf("Gostaria de acrescentar mais alguma nota? ");
	scanf("%s", &resposta);
	contador = contador + 1;
	setbuf(stdin, 0);
	} while ((resposta, "sim") == 0);
	
	soma = soma + notas;
	}
	
	media = soma/2;
	
	printf("\n===EXIBINDO RESULTADOS===\n");
	printf("Média: %.1f \n", media);
	printf("O bloco foi repetido %d vezes", contador);
}
	

