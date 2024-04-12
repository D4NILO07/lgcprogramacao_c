#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    const int TAM = 5;
    char nome[TAM][20]; // Array de strings para armazenar os nomes
    int idade[TAM];     // Array para armazenar as idades
    int i;

    for (i = 0; i < TAM; i++) {
        printf("Digite o nome e a idade da pessoa %d: ", i + 1);
        scanf("%s %d", nome[i], &idade[i]); // Lendo o nome e a idade
    }
    system("cls");

    for (i = 0; i < TAM; i++)
        printf("%dº nome: %s \nidade: %d\n", i + 1, nome[i], idade[i]);

    return 0;
}

