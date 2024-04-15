#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>



int main() {
	setlocale (LC_ALL, "portuguese");
	
	const int TAM = 5;
	int numero;
	int i, quantidadeNegativos = 0, quantidadePositivos = 0;
	int vetor[TAM];
	int numeroPar = 0, numeroImpar = 0;
	int contador = 0;
	
	
	for( i = 0; i < TAM; i++) { 
	       
		    printf("Digite o %iº número inteiro: ", i+1);
			scanf("%i", &numero);
	
	 vetor[i] = numero;
	 
	 if(numero < 0){
	 	quantidadeNegativos++;
	
	 
	 if(numero % 2 == 0){
	 	numeroPar++;
	 } else {
	 	numeroImpar++;
	 }  
	 
	 }
	 
	 if(numero > 0){
	 	quantidadePositivos++;
	
	 if(numero % 2 == 0){
	 	numeroPar++;
	 } else {
	 	numeroImpar++;
	 }  
	 
	 }
	 system ("cls");
	 
	 
		contador++;
		
	} 
	
	for(i = 0; i < TAM; i++)
	printf("%iº número: %i \n", i+1, vetor[i]);
	printf("Números pares: %i\n", numeroPar);
	printf("Números Ímpares: %i\n", numeroImpar);
	printf("Números Positivos: %i\n", quantidadePositivos);
	printf("Números Negativos: %i\n", quantidadeNegativos);
	printf("Números Inseridos: %i\n", contador);
	
	return 0;
}
