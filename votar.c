#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	char name[200];
	int idade;
	
	
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	
	if (idade>=18){
		printf("Você é obrigado a votar!!");
	}
	
	else printf("você não é obrigado a votar!!");
	
	return 0;
	
	
	
	
	
	
	
}
