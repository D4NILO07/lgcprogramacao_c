#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>
#include <time.h>


int main (){
 setlocale (LC_ALL, "portuguese");
 
 int opcao, quantidadeFamilias = 0, quantidadeSalarios = 0;
 int filhos, quantidadeFilhos = 0, somaFilhos = 0;
 float salario, mediaFilhos, somaSalario = 0, mediaSalario;
 float maiorSalario = INT_MIN, menorSalario = INT_MAX;
 
 
 do{
 
 system("cls || clear");
 printf("=======MENU======");
 printf("\n 1 - Adicionar familia");
 printf("\n 2 - Sair e exibir resultados \n");
 printf("Digite a opção desejada: ");
 scanf("%i",&opcao);
 
 switch(opcao) {
 	case 1:
 		 system("cls || clear");
         printf("======= PESQUISA =======");
 
 		printf("\nDigite a quantidade de filhos: ");
 		scanf("%i", &filhos);
 		
 		printf("\nDigite o salário da família: ");
 		scanf("%f", &salario);
 		
 		quantidadeFamilias++;
 		quantidadeFilhos++;
 		quantidadeSalarios++;
 		
 		somaSalario += salario;
 		somaFilhos += filhos;
 		
 		if (salario > maiorSalario) {
 				maiorSalario = salario;
			 }
			 if (salario < menorSalario) {
			 	menorSalario = salario;
			 }
 	
 		break;
 		case 2:
 			break;
 			default:
 				printf("Opção Inválida. /n");
 				sleep(4);
 				system("cls||clear");
 							
 } 
 
 } while (opcao != 2);
 
 if (quantidadeFamilias == 0) {
 				printf("\nNão foram informados dados necessários. ");
			 } else {
 			mediaSalario = somaSalario / (float) quantidadeSalarios;
 			mediaFilhos = somaFilhos / (float) quantidadeFilhos; 
 			
 			system("cls || clear");
 			printf("\n===Exibindo resultados ===\n");
 			printf("Quantidade de famílias: %i \n", quantidadeFamilias);
 			printf("Média Salarial: R$ %2.f\n", mediaSalario);
 			printf("Média de Filhos: %2.f\n", mediaFilhos);
 			printf("Maior Salário: R$ %2.f\n", maiorSalario);
 			printf("Menor Salário: R$ %2.f\n", menorSalario);
 		}
 
 return 0;
 


 }
 
 
 
 
 
 
 
 
 
 
 

