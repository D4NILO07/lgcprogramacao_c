#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main() {
setlocale(LC_ALL, "portuguese");
    char opcao;
    float nota, soma = 0;
    int contador = 0;

    while (1) {
        printf("\nEscolha uma opção:\n");
        printf("S - Inserir mais uma nota\n");
        printf("P - Ver quantas notas foram inseridas\n");
        printf("N - Calcular a média aritmética das notas informadas\n");
        printf("\nEscolha: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case 'S':
            case 's':
                printf("Insira uma nota: ");
                scanf("%f", &nota);
                soma += nota;
                contador++;
                break;
            case 'P':
            case 'p':
                printf("Foram inseridas %d nota(s)\n", contador);
                break;
            case 'N':
            case 'n':
                if (contador > 0) {
                    float media = soma / contador;
                    printf("A média aritmética das notas inseridas?: %.2f\n", media);
                } else {
                    printf("Nenhuma nota inserida.\n");
                }
                break;
            default:
                printf("Opção inválida.\n");
        }

        if (opcao == 'N' || opcao == 'n') {
            break;
        }
    }

    return 0;
}
