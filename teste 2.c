#include <stdio.h>

int main(){
	//Declaração variáveis.
	char nome[200] = "Marta"; // Cadeia
	char sexo = 'F'; // Caracter
	int idade = 20; // Inteiro
	float peso = 58.400; // Real
	
	//Exibindo resultados.
	printf("\n=== Exibindo resultados ===\n");
	printf("Nome: %s \n", nome); // %s -> string -> cadeia
	printf("Sexo: %c \n", sexo); // %c -> char -> caracter
	printf("Idade: %i \n", idade); // %i -> into -> inteiro
	printf("Peso: %f \n", peso); // %f -> float -> real
	
	return 0;
}
