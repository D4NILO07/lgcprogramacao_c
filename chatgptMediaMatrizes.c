#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
    setlocale (LC_ALL, "");
    char alunos [4][200];
    float notas [4][3];
    float media[4]; // Array para armazenar as médias
    int i,j;

    printf("=== Solicitando dados para o usuário === \n");
    for (i = 0; i < 4; i++){ // Corrigindo o loop para iterar sobre os 4 alunos
        printf("Digite o nome do %iº aluno: ", i+1);
        scanf ("%s", &alunos[i]);

        for (j = 0; j < 3; j++){
            printf ("Digite a %iº nota: ", j+1);
            scanf ("%f", &notas [i][j]);
        }

        // Calculando a média do aluno atual
        media[i] = 0; // Inicializando a média do aluno
        for (j = 0; j < 3; j++) {
            media[i] += notas[i][j]; // Somando as notas do aluno
        }
        media[i] /= 3.0; // Calculando a média
    }

    printf ("\n");

    printf ("=== Exibindo dados para o usuário ===");
    for (i = 0; i < 4; i++){ // Corrigindo o loop para iterar sobre os 4 alunos
        printf("\nnome do %iº aluno: %s", i+1, alunos [i]);

        for (j = 0; j < 3; j++){
            printf ("\n%iº nota: %.1f ",j+1, notas [i][j]);
        }

        // Exibindo a média do aluno
        printf("\nMédia do aluno: %.2f\n", media[i]);
    }

    return 0;
}

