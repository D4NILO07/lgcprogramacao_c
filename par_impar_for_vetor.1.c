 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <locale.h>
 


int main(){
	setlocale(LC_ALL, "portuguese");
	
	const int TAM = 6;
	int numero;
	int i;
	int vetor[TAM];
	int numeroPar = 0, numeroImpar = 0;
	
	
	for(i = 0; i < TAM; i++) {
		printf("Digite o %i� n�mero: ", i+1);
		scanf("%i", &numero);
		
		vetor[i] = numero;
		
		if(numero % 2 == 0){
			numeroPar++;
		} else {
			numeroImpar++;
		}
		system ("cls");
		
			
	}
	
	for(i = 0; i < TAM; i++) 
	printf("%i� n�mero: %i \n", i+1, vetor[i]);
	printf("N�meros Pares: %i\n", numeroPar);
	printf("N�meros �mpares: %i", numeroImpar);
	
	return 0;
}
