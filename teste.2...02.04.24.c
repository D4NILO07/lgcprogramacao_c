#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	
	int contadorPar, contadorImpar, numero, somaTotal, somaPares;
	float mediaPar, mediaGeral;
	char opcao;
    float nota, soma = 0;
	int contador = 0;

    while (1) {
        printf("\nEscolha uma opção:\n");
        printf("S - Digite um número positivo: \n");
        printf("P - Média de valores pares: \n");
        printf("N - Calcular a média dos valores lidos: \n");
        printf("\nEscolha: ");
        scanf(" %c", &opcao); 
        
                switch (opcao) {
            case 'S':
            case 's':
                printf("Insira mais um número: ");
                scanf("%f", &numero);
                soma += numero;
                contador++;
                break;
            case 'P':
            case 'p':
                printf("Foram inseridas %d numeros pares \n", contador);
                break;
            case 'N':
            case 'n':
                if (contador > 0) {
                    float media = soma / contador;
                    printf("A média de números pares?: %.2f\n", mediaGeral);
                } else {
                    printf("Nenhuma numero inserido.\n");
                }
                break;
            default:
                printf("Opção inválida.\n");
        }

        if (opcao == 'N' || opcao == 'n') {
            break;
        }
}
}
