#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	//Variaveis.
	
	char name[200];
	char email [200];
	char senha[200];
	char senha_correta[] = "00507";
	
	//Dados.
	
	printf("Digite seu nome: ");
	scanf("%s", &name);
	
	printf("Digite seu email: ");
	scanf("%s", &email);
	
	printf("Digite sua senha: ");
	scanf("%s", &senha);
	
	//Executar.
	
	if (strcmp(email, "daniloalmeidapaulo@gmail.com") == 0 && strcmp(senha, senha_correta) == 0) {
		printf("Seja bem-vindo!!");
	}
	
	else {
	printf("Email ou senha incorretos!!");
	}
	
	
	
	
	//Resultados.
	
	
	
	

	
	system ("\npause");
	getchar();
	return 0;
	
	
	




	
}
