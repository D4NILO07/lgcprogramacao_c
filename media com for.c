#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i;
	float media, notas, soma
	;
	
	for(i = 1; i<=4; i++){
		
		printf("Digite a %.iº nota: ", i);
		scanf("%f", &notas);
			soma = soma + notas;
		
	}

	
	media = soma/4;
	
	printf("\nMédia: %.1f", media);
}
