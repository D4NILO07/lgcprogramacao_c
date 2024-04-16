#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
    setlocale (LC_ALL, "");
    char alunos [4][200];
    char disciplinas[3][200]; // Array para armazenar os nomes das disciplinas
    float notas [4][3][2]; // Alteração: 3 notas para 2 avaliações em cada disciplina
    float media[4]; // Array para armazenar as médias
    int i,j,k;

    printf("=== Solicitando dados para o usuário === \n");
    // Obtendo nomes dos alunos
    for (i = 0; i < 4; i++){ // Corrigindo o loop para iterar sobre os 4 alunos
        printf("Digite o nome do %iº aluno: ", i+1);
        scanf ("%s", &alunos[i]);
    }

    // Obtendo nomes das disciplinas
    for (i = 0; i < 3; i++) {
        printf("Digite o nome da %iª disciplina: ", i+1);
        scanf ("%s", &disciplinas[i]);
    }

    // Obtendo notas dos alunos para cada disciplina
    for (i = 0; i < 4; i++){ // Corrigindo o loop para iterar sobre os 4 alunos
        for (j = 0; j < 3; j++) { // Iterando sobre as disciplinas
            printf("\n=== Notas do aluno %s na disciplina %s ===\n", alunos[i], disciplinas[j]);
            for (k = 0; k < 2; k++) { // Iterando sobre as duas notas de cada disciplina
                printf("Digite a %iª nota: ", k+1);
                scanf ("%f", &notas[i][j][k]);
            }
        }
    }

    // Calculando média para cada aluno
    for (i = 0; i < 4; i++) { // Corrigindo o loop para iterar sobre os 4 alunos
        media[i] = 0; // Inicializando a média do aluno
        for (j = 0; j < 3; j++) { // Iterando sobre as disciplinas
            float soma_notas = 0;
            for (k = 0; k < 2; k++) { // Iterando sobre as notas de cada disciplina
                soma_notas += notas[i][j][k];
            }
            media[i] += soma_notas / 2.0; // Calculando média para a disciplina
        }
        media[i] /= 3.0; // Calculando média geral do aluno
    }

    // Exibindo dados para o usuário
    printf ("\n=== Exibindo dados para o usuário ===\n");
    for (i = 0; i < 4; i++){ // Corrigindo o loop para iterar sobre os 4 alunos
        printf("\nNome do %iº aluno: %s\n", i+1, alunos[i]);
        for (j = 0; j < 3; j++) { // Iterando sobre as disciplinas
            printf("Disciplina: %s\n", disciplinas[j]);
            for (k = 0; k < 2; k++) { // Iterando sobre as notas de cada disciplina
                printf("Nota %i: %.1f\n", k+1, notas[i][j][k]);
            }
        }
        printf("Média do aluno: %.2f\n", media[i]); // Exibindo média do aluno
    }

    return 0;
}

