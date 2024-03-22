#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	//Variaveis
	
	float valor, valorTotal, desconto;
	char macas [200];
	int numero;
	char resposta[200]  = "sim";
	char sim[200];
	
	//Dados
	
	printf("Olá seja bem-vindo a loja de Maçãs.\nQuantas você vai querer hoje? ");
	scanf("%i", &numero);
	
	printf("O valor da unidade é R$1,30 mas saiba que se o senhor comprar mais de 12 Maçãs o valor da unidade fica por R$1,00.");
	
	printf("\nO senhor gostaria de fazer alguma mudança no pedido? ");
	scanf("%s", &resposta );
	
	if (strcmp(resposta, "sim") == 0) {
		printf("\nEntão quantas Maçãs o senhor vai querer? ");
		scanf("%i", &numero);
	} else {
		printf("Então vamos dar continuidade a compra.");
	}
	
	if (numero>12) {
	 valor = 1.00;
	} else {
	 valor = 1.30;
	}
	
	valorTotal = (numero * valor);
	
	printf("Valor Total = %.2f", valorTotal);
	
	
	
}
