 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <locale.h>
 


int main(){
	setlocale(LC_ALL, "portuguese");
	
	const int TAM = 5;
	char idade;
	int i;
	int vetor[TAM];

	
	for(i = 0; i < TAM; i++) {
		printf("Digite seu nome e idade - n�o utilize espa�o: ", i+1);
		scanf("%s", &idade);
		
		
		
		}
		system ("cls");
		
		for(i = 0; i < TAM; i++) 
	printf("%s� nome e idade: %s \n", idade);
	
	





return 0;	
}
