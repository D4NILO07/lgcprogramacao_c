#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
		//Vari�veis..
	
	float notas, media, soma;
	int i;
	
	//Dados..
	
	for( i = 1; i<= 3; i++) {
	
		do {
	printf("Digite a %i� nota do aluno: ", i);
	scanf("%f", &notas);
	} while (notas < 0 || notas > 10);
	soma = soma + notas;
	}
	
	media = soma/3;
	
	//Resultados..


printf("\n===EXIBINDO RESULTADOS===\n");
printf("\nM�dia: %.0f", media);

if (media>=7) {
	printf("\nAluno Aprovado!!");
} else if (media>=5) {
	printf("\nAluno em recupera��o!!");
} else {
	printf("\nAluno Reprovado!!");
}

}
	
	
	
	
	
	

