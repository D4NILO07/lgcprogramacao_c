 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <locale.h>
 #define TAM 10
 
 int main (){
 	setlocale(LC_ALL, "portuguese");
 	
 	int vetor [TAM];
 	int i;
 	
 	printf("Digite os elementos do vetor: \n");
for (i = 0; i < TAM; i++) {

printf("Elemento %d: ", i + 1);
scanf("%d", &vetor[i]);
}


for (i = 0; i < TAM; i++) {
printf("\nElemento %d: %d\n", i+1, vetor[i]);

} 
return 0;
 	
 	
 }
 
