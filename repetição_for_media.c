#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	//Vari�veis..
	
	float notaUm, media, soma, notaDois;
	
	
	
	//Dados..
	
		do {
	printf("Digite a 1� nota do aluno: ");
	scanf("%f", &notaUm);
	printf("Digite a 2� nota do aluno: ");
	scanf("%f", &notaDois);
	
	soma = notaUm + notaDois;
	media = soma/2;
} while (notaUm < 0 || notaUm > 10 || notaDois < 0 || notaDois > 10);

printf("\n===EXIBINDO RESULTADOS===\n");
printf("\nM�dia: %.0f", media);

return 0;

}
