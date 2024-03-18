#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	setlocale(LC_ALL, "");
	
	//Variaveis
	
	char nome[200] ;
	int idade;
	float primeiraNota, segundaNota, terceiraNota, quartaNota;
	float media;
	
	//Dados
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	
	printf("Digite sua primeira nota: ");
	scanf("%f", &primeiraNota);
	
	printf("Digite sua segunda nota: ");
	scanf("%f", &segundaNota);
	
	printf("Digite sua terceira nota: ");
	scanf("%f", &terceiraNota);
	
	printf("Digite sua quarta nota: ");
	scanf("%f", &quartaNota);
	

	
	//calculos
	
	media = (primeiraNota + segundaNota + terceiraNota + quartaNota / 4); 
	
	
	//Resultados
	system("cls");
	
	printf("\n===EXIBINDO DADOS===");
	
	printf("\nNome: %s", nome);
	printf("\nIdade: %i", idade);
	printf("\nPrimeira Nota: %.0f", primeiraNota);
	printf("\nSegunda Nota: %.0f", segundaNota);
	printf("\nTerceira Nota: %.0f", terceiraNota);
	printf("\nQuarta Nota: %.0f", quartaNota);
	printf("\nMédia: %.0f", media);
	
	
	
}
