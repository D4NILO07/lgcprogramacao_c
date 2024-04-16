#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    char disciplinas[3][200]; // Array para armazenar os nomes das disciplinas
    float notas[3][2]; // Array para armazenar as notas das disciplinas

    // Obtendo nomes das disciplinas
    printf("Digite o nome da primeira disciplina: ");
    scanf("%s", disciplinas[0]);
    printf("Digite o nome da segunda disciplina: ");
    scanf("%s", disciplinas[1]);
    printf("Digite o nome da terceira disciplina: ");
    scanf("%s", disciplinas[2]);

    // Obtendo notas das disciplinas
    for (int i = 0; i < 3; i++) { // Iterando sobre as disciplinas
        printf("\n=== Notas da disciplina %s ===\n", disciplinas[i]);
        for (int j = 0; j < 2; j++) { // Duas notas para cada disciplina
            printf("Digite a %iª nota: ", j+1);
            scanf("%f", &notas[i][j]);
        }
    }

    // Calculando e exibindo a média das notas para cada disciplina
    printf("\n=== Média das notas por disciplina ===\n");
    for (int i = 0; i < 3; i++) { // Iterando sobre as disciplinas
        float soma = notas[i][0] + notas[i][1];
        float media = soma / 2.0;
        printf("Disciplina: %s, Média: %.2f\n", disciplinas[i], media);
    }

    return 0;
}

