#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	//variaveis
	
	float primeiraNota, segundaNota, terceiraNota;
	float media;
	int idade;
	char nome [200];
	
	//dados
	
	
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
	
	//calculos
	
	media = (primeiraNota + segundaNota + terceiraNota / 3); 
	
	
	//Resultados
	system("cls");
	
	printf("\n===EXIBINDO DADOS===");
	
	printf("\nNome: %s", nome);
	printf("\nIdade: %i", idade);
	printf("\nPrimeira Nota: %.0f", primeiraNota);
	printf("\nSegunda Nota: %.0f", segundaNota);
	printf("\nTerceira Nota: %.0f", terceiraNota);
	
	if (media>=7) {
	printf("\nAluno Aprovado!!");

	}
	else printf("\nAluno Reprovado!!");
	
	
	




	
}
	
