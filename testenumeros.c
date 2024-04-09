 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <locale.h>
 
 int main (){
 	setlocale(LC_ALL, "portuguese");
 	
 	int numero[5];
 	 numero [0] = 1;
     numero [1] = 2;
 	 numero [2] = 3;
 	 numero [3] = 4;
 	 numero [4] = 5;
 	
 	printf("%d\n", numero[0]);
 	printf("%d\n", numero[1]);
 	printf("%d\n", numero[2]);
 	printf("%d\n", numero[3]);
 	printf("%d\n", numero[4]);
 	
 }
