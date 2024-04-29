#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	char nome[200];
	int idade;
	char email[200];
	int telefone;
	int opcao;
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	
	printf("Digite seu email: ");
	scanf("%s", &email);
	
	printf("Digite seu número de telefone: ");
	scanf("%i", &telefone);
	
	do {
		system ("cls||clear");
		
		printf("\n===MENU===");
		printf("\nTecle 1 para exibir o nome e a idade: ");
		
		printf("\nTecle 2 para exibir o nome e o email: ");
		
		
		printf("\nTecle 3 para exibir o nome e o telefone: ");
		
		
		printf("\nTecle 4 para exibir todas as informações: ");
		
		
		printf("\nTecle 0 para sair do programa: ");
		
		printf("\nEscolha uma opção:");
		scanf("%i", &opcao);
		
		switch (opcao) {
			
			case 1:
				printf("\nNome: %s", nome);
				printf("\nIdade: %i", idade);
				break;
			case 2:
				printf("\nNome: %s", nome);
				printf("\nE-mail: %s", email);
				break;
			case 3:
				printf("\nNome: %s", nome);
				printf("\nTelefone: %d", telefone);
				break;
			case 4: 
				printf("\nNome: %s", nome);
				printf("\nIdade: %i", idade);
				printf("\nE-mail: %s", email);
				printf("\nTelefone: %i", telefone);
				break;
			case 0: 
				printf("\nSaindo do programa...");
				break;
		
			default:
				printf("\nOpção incorreta, tente novamente.");
				break;
						
		}
		printf("\nPressione enter para continuar... ");
		getchar();
		getchar();
	} while (opcao != 0);
	

	return 0;
} 
