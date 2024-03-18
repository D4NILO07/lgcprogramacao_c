#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int numero, antecessor, sucessor;
	
	printf("Digote um número inteiro: ");
	scanf("%i", &numero);
	
	antecessor= numero -1;
	sucessor= numero +1;
	
	printf("\n===EXIBINDO RESULTADOS===");
	printf("\nNúmero: %i", numero);
	printf("\nNúmero sucessor: %i", sucessor);
	printf("\nNúmero antecessor: %i", antecessor);
	
	
	
	
}
