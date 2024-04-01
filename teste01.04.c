#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
setlocale(LC_ALL, "portuguese");
 
 int media, nota;
 int contador = 0;
 char opcao;
   int soma = 0;
 
 while (1){
 printf("\nEscolha uma opção:\n");
 printf("S - Inserir uma uma nota: \n");
 printf("N - Calcular a média aritmética das notas informadas\n");
        printf("\nEscolha: ");
        scanf(" %c", &opcao);
        switch (opcao) {
            case 'S':
            case 's':
                printf("Insira uma nota positiva e inteira: ");
                scanf("%i", &nota);
                soma += nota;
                contador++;
                break;
                case 'N':
            case 'n':
                if (contador > 0) {
                    int media = soma / contador;
                    printf("A média aritmética das notas inseridas?: %.0i\n", media);
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
