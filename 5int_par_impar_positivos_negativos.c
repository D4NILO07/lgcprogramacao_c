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
	       
		    printf("Digite o %i� n�mero inteiro: ", i+1);
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
	printf("%i� n�mero: %i \n", i+1, vetor[i]);
	printf("N�meros pares: %i\n", numeroPar);
	printf("N�meros �mpares: %i\n", numeroImpar);
	printf("N�meros Positivos: %i\n", quantidadePositivos);
	printf("N�meros Negativos: %i\n", quantidadeNegativos);
	printf("N�meros Inseridos: %i\n", contador);
	
	return 0;
}
