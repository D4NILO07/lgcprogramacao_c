#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
setlocale (LC_ALL, "");
char disciplina [3][200];
float soma = 0, media[3], notas [2][2];
int i,j;

printf("=== Solicitando dados para o usu�rio === \n");
for (i = 0; i < 3; i++){
printf("Digite o nome da %i� disciplina: ", i+1);
scanf ("%s", &disciplina[i]);

for (j = 0; j < 2; j++){
printf ("Digite a %i� nota: ", j+1);
scanf ("%f", &notas [i][j]);

soma += notas [i][j];
}
media [i] = soma / 3;
soma = 0;
}

printf ("\n");

printf ("\n=== Exibindo dados para o usu�rio ===");
for (i = 0; i < 3; i++){
printf("\nnome do %i� aluno: %s", i+1, disciplina [i]);

for (j = 0; j < 2; j++){
printf ("\n%i� nota: %.1f ",j+1, notas [i][j]);

}
printf ("\nM�dia: %.1f", media[i]);
}
}
