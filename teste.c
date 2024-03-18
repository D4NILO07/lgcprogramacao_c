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
	
	printf("Digite o primeiro número: ");
	scanf("%f", &primeiroNumero);
	
	printf("Digite o segundo número: ");
	scanf("%f", &segundoNumero);
	
	//calculos
	
	soma = (primeiroNumero + segundoNumero);
	subtracao = (primeiroNumero - segundoNumero);
	multiplicacao = (primeiroNumero * segundoNumero);
	divisao = (primeiroNumero / segundoNumero);
	
	//Resultados
	
	printf("Soma: %.0f ", soma);
	printf("\nSubtração: %.0f ", subtracao);
	printf("\nMultiplicação: %.0f ", multiplicacao);
	printf("\nDivisão: %.0f ", divisao);
	
	
	
}
