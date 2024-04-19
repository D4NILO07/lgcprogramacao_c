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

printf("=== Solicitando dados para o usuário === \n");
for (i = 0; i < 3; i++){
printf("Digite o nome da %iª Banda: ", i+1);
scanf ("%s", &banda[i]);


for (j = 0; j < 5; j++){
	
printf ("Digite o %iº Integrante: ", j+1);
scanf ("%s", &integrantes [i][j]);

//soma += notas [i][j];
}

//media [i] = soma / 2;
//soma = 0;
}


printf ("\n");

printf ("\n=== Exibindo dados para o usuário ===");
for (i = 0; i < 3; i++){
printf("\nnome da %iº Banda: %s", i+1, banda [i]);

for (j = 0; j < 5; j++){
printf ("\n%iº Integrante: %s ", j+1, integrantes [i][j]);


}
}
}

