#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	setlocale(LC_ALL, "");
	
	//Variaveis
	
	float soma, subtracao, multiplicacao, divisao;
	float primeiroNumero, segundoNumero;
	
	//Dados
	
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &primeiroNumero);
	
	printf("Digite o segundo n�mero: ");
	scanf("%f", &segundoNumero);
	
	//calculos
	
	soma = (primeiroNumero + segundoNumero);
	subtracao = (primeiroNumero - segundoNumero);
	multiplicacao = (primeiroNumero * segundoNumero);
	divisao = (primeiroNumero / segundoNumero);
	
	//Resultados
	
	printf("Soma: %.0f ", soma);
	printf("\nSubtra��o: %.0f ", subtracao);
	printf("\nMultiplica��o: %.0f ", multiplicacao);
	printf("\nDivis�o: %.0f ", divisao);
	
	
	
}
