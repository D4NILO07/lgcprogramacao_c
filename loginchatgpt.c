#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "portuguese");
	
    //Variáveis.
    char name[200];
    char email[200];
    char senha[200];
    char senha_correta[] = "00507";
    char email_correto[] = "daniloalmeidapaulo@gmail.com";
	
    //Dados.
    do {
        printf("Digite seu nome: ");
        scanf("%s", name);
	
        printf("Digite seu email: ");
        scanf("%s", email);
	
        printf("Digite sua senha: ");
        scanf("%s", senha);
	
        if (strcmp(email, email_correto) != 0 || strcmp(senha, senha_correta) != 0) {
            printf("Email ou senha incorretos!!\n");
        } else {
            printf("Seja bem-vindo!!\n");
            break; // Sair do loop se as credenciais estiverem corretas.
        }
    } while (1); // Loop infinito, quebrado apenas quando as credenciais estiverem corretas.

    return 0; 
}

