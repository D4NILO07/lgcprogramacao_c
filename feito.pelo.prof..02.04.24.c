#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main (){
 setlocale (LC_ALL, "portuguese");
 
 int valor, somaGeral = 0, somaPares = 0, contadorGeral = 0;
 int pares = 0, imapres = 0;
 float mediaGeral, mediaPares;
 
 printf("Digite um valor: ");
 scanf("%i", &valor);
 
 while (valor != 0){
 	if (valor > 0 ){
 		contadorGeral++;
 		somaGeral+= valor;
 		
 		if (valor % 2 ==0 ) {
 			pares ++;
 			
 			somaPares += valor;
		 } else {
		 	imapres++;
		 }
	 }  
	 
	 printf("Digite um número: ");
	 scanf("%i", &valor);
	 
	 } 
	 
	 if (contadorGeral == 0 ){
	 	printf("Não foi informado um número postivo.");
	 } else {
	 	mediaGeral = somaGeral / (float) contadorGeral;
	 	mediaPares = somaPares / (float) pares;
	 	
	 	printf("Quantidade de números pares: %i \n", pares);
	 	printf("Quantidade de números impares: %i \n", imapres);
	 	printf("Média Geral: %1f \n", mediaGeral);
	 	printf("Média de números pares: %1f \n", mediaPares);
	 }
 
 return 0;
}
