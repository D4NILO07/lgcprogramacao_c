#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
  setlocale(LC_ALL, "portuguese");
char banda [3][200];
float soma = 0, media[3]; 
char integrantes[3][5][1000];
int i,j;

printf("=== Solicitando dados para o usu�rio === \n");
for (i = 0; i < 3; i++){
printf("Digite o nome da %i� Banda: ", i+1);
scanf ("%s", &banda[i]);


for (j = 0; j < 5; j++){
	
printf ("Digite o %i� Integrante: ", j+1);
scanf ("%s", &integrantes [i][j]);

//soma += notas [i][j];
}

//media [i] = soma / 2;
//soma = 0;
}


printf ("\n");

printf ("\n=== Exibindo dados para o usu�rio ===");
for (i = 0; i < 3; i++){
printf("\nnome da %i� Banda: %s", i+1, banda [i]);

for (j = 0; j < 5; j++){
printf ("\n%i� Integrante: %s ", j+1, integrantes [i][j]);


}
}
}

