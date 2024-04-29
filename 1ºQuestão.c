#include <stdio.h> 
#define TAM 6
#include <locale.h>
int main(){
	setlocale (LC_ALL, "portuguese");
	int i;
	int numerosPar = 0, numeroImpar = 0;
	int vetor [TAM];
	int numero;
	
	
	for(i = 0; i < TAM; i++) {
		printf("Digite o %iº número: ", i+1);
		scanf("%i", &numero);

		vetor [i] = numero;

	if (numero % 2 ==0) {
		numerosPar++;
	}
	
	 
	else {
		numeroImpar++;
	}  	
	
	}
	
	
	
	printf("\nNúmeros Pares: %i", numerosPar);
	printf("\nNúmeros Impares: %i", numeroImpar);
	
	return 0;
}
