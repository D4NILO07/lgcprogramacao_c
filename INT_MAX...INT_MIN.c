#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>


int main (){
 setlocale (LC_ALL, "portuguese");
 
 int valor, somaGeral = 0, somaPares = 0, contadorGeral = 0;
 int pares = 0, impares = 0, menor = INT_MAX, maior = INT_MIN;
 float mediaGeral, mediaPares;
 
 
 printf("Digite um valor: ");
 scanf("%i", &valor);
 
 while (valor != 0){
 	if (valor > 0 ){
 		contadorGeral++;
 		somaGeral+= valor;
 		
 		if (valor > maior)
 		 maior = valor;
 		if (valor < menor)
 		menor = valor;
 		
 		if (valor % 2 ==0 ) {
 			pares ++;
 			
 			somaPares += valor;
		 } else {
		 	impares++;
		 }
	 }  
	 
	 printf("Digite um n�mero: ");
	 scanf("%i", &valor);
	 
	 } 
	 
	 if (contadorGeral == 0 ){
	 	printf("N�o foi informado um n�mero postivo.");
	 } else {
	 	mediaGeral = somaGeral / (float) contadorGeral;
	 	mediaPares = somaPares / (float) pares;
	 	
	 	printf("Quantidade de n�meros pares: %i \n", pares);
	 	printf("Quantidade de n�meros impares: %i \n", impares);
	 	printf("M�dia Geral: %1f \n", mediaGeral);
	 	printf("M�dia de n�meros pares: %1f \n", mediaPares);
	 	printf("Maior valor: %d \n", maior);
	 	printf("Menor valor: %d \n", menor);
	 }
 
 return 0;
}
