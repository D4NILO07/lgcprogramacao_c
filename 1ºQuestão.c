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
		printf("Digite o %i� n�mero: ", i+1);
		scanf("%i", &numero);

		vetor [i] = numero;

	if (numero % 2 ==0) {
		numerosPar++;
	}
	
	 
	else {
		numeroImpar++;
	}  	
	
	}
	
	
	
	printf("\nN�meros Pares: %i", numerosPar);
	printf("\nN�meros Impares: %i", numeroImpar);
	
	return 0;
}
