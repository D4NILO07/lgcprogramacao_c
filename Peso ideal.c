#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	//Variaveis
	
	char genero;
	float altura, peso;
	
	
	//Dados
	
	printf("Digite seu gênero - ultilize M ou F: ");
	scanf("%s", &genero);
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	genero = toupper (genero);
	
	//Executando
	
	switch (genero){
		    case 'M':
			peso = (72.7 * altura) - 58;
			break;
			case 'F':
			peso = (62.1 * altura) - 44.7;
			break;		
	}
	
	printf("SEU PESO IDEAL É: %.2f", peso);
	
	


	
}
