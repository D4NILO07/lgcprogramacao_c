#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int numero, antecessor, sucessor;
	
	printf("Digote um n�mero inteiro: ");
	scanf("%i", &numero);
	
	antecessor= numero -1;
	sucessor= numero +1;
	
	printf("\n===EXIBINDO RESULTADOS===");
	printf("\nN�mero: %i", numero);
	printf("\nN�mero sucessor: %i", sucessor);
	printf("\nN�mero antecessor: %i", antecessor);
	
	
	
	
}
