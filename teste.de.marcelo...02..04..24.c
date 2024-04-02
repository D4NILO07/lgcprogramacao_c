#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main (){

int contadorPar=0, contadorImpar=0, numero;

float mediaPar, mediaGeral, somaTotal=0, somaPares=0;

setlocale(LC_ALL, "");

 printf("Digite um valor: ");
 scanf("%d", &numero);
 system("cls");

while (numero !=0){

if (numero % 2 == 0){

somaPares += numero;
contadorPar++;

}else {
contadorImpar++;
}
somaTotal += numero;

printf("Digite um valor: ");
    scanf("%d", &numero);

system("cls");

}



if (contadorPar > 0 && contadorImpar > 0){
mediaPar = somaPares / contadorPar;
mediaGeral = somaTotal / (contadorPar + contadorImpar);

printf("\nQuantidade de números pares: %d", contadorPar);
printf("\nQuantidade de números impares: %d", contadorImpar);
printf("\nMédia dos pares: %.2f", mediaPar);
printf("\nMédia geral: %.2f", mediaGeral);

}else if (contadorPar > 0 && contadorImpar == 0){
mediaPar = somaPares / contadorPar;
mediaGeral = somaTotal / contadorPar;

printf("\nQuantidade de números pares: %d", contadorPar);
printf("\nMédia dos pares: %.2f", mediaPar);
printf("\nMédia geral: %.2f", mediaGeral);
}else if (contadorPar == 0 && contadorImpar > 0){
mediaGeral = somaTotal / contadorImpar;


printf("\nQuantidade de números impares: %d", contadorImpar);
printf("\nMédia geral: %.2f", mediaGeral);

}else if (contadorPar == 0 && contadorImpar == 0) {

printf("\nNenhum número válido foi digitado.");
}else{
printf("\nNenhum número válido foi digitado.");
}

return 0;

}
