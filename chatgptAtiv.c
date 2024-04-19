#include <stdio.h>

int main() {
    char disciplinas[3][50];
    float notas_disciplinas[3][3];
    int pesos[] = {3, 3, 4};
    int i, j;
    float media;
    float calcular_media_ponderada(float notas[], int pesos[], int tamanho) {
        float soma_notas = 0;
        int soma_pesos = 0;
   
  
        for (i = 0; i < tamanho; i++) {
            soma_notas += notas[i] * pesos[i];
            soma_pesos += pesos[i];
			
        }
        return soma_notas / soma_pesos;
    }

  
    for ( i = 0; i < 3; i++) {
        printf("Nome da disciplina %d: ", i + 1);
        scanf("%s", disciplinas[i]);
        for (j = 0; j < 3; j++) {
            printf("%da nota (entre 0 e 10): ", j + 1);
            scanf("%f", &notas_disciplinas[i][j]);
        }
    }

    
    for (i = 0; i < 3; i++) {
        media = calcular_media_ponderada(notas_disciplinas[i], pesos, 3);
        printf("Média da disciplina %s: %.1f\n", disciplinas[i], media);
    }

    return 0;
}

