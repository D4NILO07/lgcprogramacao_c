#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
setlocale (LC_ALL, "");
char alunos [2][200];
float notas [2][3];
int i,j;

printf("=== Solicitando dados para o usuário === \n");
for (i = 0; i < 2; i++){
printf("Digite o nome do %iº aluno: ", i+1);
scanf ("%s", &alunos[i]);

for (j = 0; j < 3; j++){
printf ("Digite a %iº nota: ", j+1);
scanf ("%f", &notas [i][j]);
}
}

printf ("\n");

printf ("=== Exibindo dados para o usuário ===");
for (i = 0; i < 2; i++){
printf("\nnome do %iº aluno: %s", i+1, alunos [i]);

for (j = 0; j < 3; j++){
printf ("\n%iº nota: %.1f ",j+1, notas [i][j]);

}
}
}

