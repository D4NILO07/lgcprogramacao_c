#include <stdio.h>

int main() {
int contador = 0;
char continua; // Nao precisamos inicializar a variavel 'continua' pois o teste é feito depois.

do {
// Comandos a serem repetidos.

printf("Repentindo .... \n");

contador = contador + 1;

printf("Tecle 's' se deseja continuar\n");
scanf("%c",&continua);
setbuf(stdin, 0);

} while (continua == 's') ;

printf("O bloco foi repetido %d vezes", contador);

return 0;

}
