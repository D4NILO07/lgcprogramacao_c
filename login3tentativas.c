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
	char email_correto [] = "daniloalmeidapaulo@gmail.com";
	int i;
	
	//Dados.
	for (i = 1; i<=3; i++); { 
	
	printf("Digite seu nome: ");
	scanf("%s", &name);
	
	printf("Digite seu email: ");
	scanf("%s", &email);
	
	printf("Digite sua senha: ");
	scanf("%s", &senha);
	
	
	if (strcmp(email, email_correto) != 0 || strcmp(senha, senha_correta) != 0) {
	
		printf("Email ou senha incorretos!!\n");
		printf("Tentativa i% de 3 \n", i);
		sleep(3);
		printf("Usu�rio Bloqueado!!");
		system("cls || clear");
		} else {
	printf("Seja bem-vindo!!");
	break; }
	
	}  		
 return 0; 

}
	//Executar.
	


	
	
	
	
	//Resultados.
