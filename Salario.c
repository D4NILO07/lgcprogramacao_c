#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	//Variaveis
	
	char nome [200];
	float salario, salariosMinimos;
	
	
	//Dados
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite seu salário: ");
	scanf("%f", &salario);
	
	//Calculo
	
	salariosMinimos = salario / 1412;
	
	//Resultados
	
	system("cls");
	
	printf("===EXIBINDO RESULTADOS===");
	printf("\nSalarios Minimos: %.0f", salariosMinimos);
	
	
}


	
	
	
	
	
	

	
	
	
