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
	
	for( i = 1; i<= 2; i++){
	
		do {
	printf("Digite a %i� nota do aluno: ", i);
	scanf("%f", &notas);
	} while (notas < 0 || notas > 10);
	soma = soma + notas;
	}
	
	media = soma/2;
	
	//Resultados..


printf("\n===EXIBINDO RESULTADOS===\n");
printf("\nM�dia: %.0f", media);

return 0;

}
