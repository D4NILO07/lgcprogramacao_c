#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
setlocale(LC_ALL, "");

float nota;

do {
	printf("Digite a nota do aluno: ");
	scanf("%f", &nota);
} while (nota < 0 || nota > 10);

printf("\n===EXIBINDO RESULTADOS===\n");
printf("Nota: %.1f \n", nota);


return 0;

}
