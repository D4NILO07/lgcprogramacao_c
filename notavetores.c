 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <locale.h>
 #define TAM 3
 
 int main (){
 	setlocale(LC_ALL, "portuguese");
 	
 	int vetor [TAM];
 	int i;
 	
 	printf("Digite uma nota: \n");
for (i = 0; i < TAM; i++) {

printf("Nota %d: ", i + 1);
scanf("%d", &vetor[i]);
}
system ("cls || clear");

for (i = 0; i < TAM; i++) {
printf("Nota %d: %d\n", i+1, vetor[i]);

} 
return 0;
 	
 	
 }
 
