#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	//Variaveis
	
	float numero, reajuste; 
	
	printf("Digite um valor qualquer: ");
	scanf("%f", &numero);
	
	//calculos
	
	reajuste = numero - (numero*0.10);
	//Resultados
	
	printf("\n===EXIBINDO RESULTADOS===");
	printf("\nValor com reajuste de 10%%: %.0f\n", reajuste);
	
	
	system ("\npause");
	
	
}
