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
 printf("Digite a op��o desejada: ");
 scanf("%i",&opcao);
 
 switch(opcao) {
 	case 1:
 		 system("cls || clear");
         printf("======= PESQUISA =======");
 
 		printf("\nDigite a quantidade de filhos: ");
 		scanf("%i", &filhos);
 		
 		printf("\nDigite o sal�rio da fam�lia: ");
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
 				printf("Op��o Inv�lida. /n");
 				sleep(4);
 				system("cls||clear");
 							
 } 
 
 } while (opcao != 2);
 
 if (quantidadeFamilias == 0) {
 				printf("\nN�o foram informados dados necess�rios. ");
			 } else {
 			mediaSalario = somaSalario / (float) quantidadeSalarios;
 			mediaFilhos = somaFilhos / (float) quantidadeFilhos; 
 			
 			system("cls || clear");
 			printf("\n===Exibindo resultados ===\n");
 			printf("Quantidade de fam�lias: %i \n", quantidadeFamilias);
 			printf("M�dia Salarial: R$ %2.f\n", mediaSalario);
 			printf("M�dia de Filhos: %2.f\n", mediaFilhos);
 			printf("Maior Sal�rio: R$ %2.f\n", maiorSalario);
 			printf("Menor Sal�rio: R$ %2.f\n", menorSalario);
 		}
 
 return 0;
 


 }
 
 
 
 
 
 
 
 
 
 
 

