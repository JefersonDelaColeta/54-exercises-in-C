//4 - Escreva um programa em C para ler dois valores para as vari�veis A e B, e efetuar as trocas dos valores de forma que a vari�vel
// A passe a possuir o valor da vari�vel B e a vari�vel B passe a possuir o valor da vari�vel A. Apresentar os valores trocados.
#include <stdio.h>

int main () {
	
	float a, b,c;
	
	printf ("Digite o primeiro valor: ");
	scanf("%f", &a);
	
	printf ("Digite o segundo valor: ");
	scanf("%f", &b);
	
	c=a;
	a=b;

	
	
	printf ("Sua variavel A e: : %.2f \n", a);
	printf ("Sua variavel b e: %.2f\n ", c);
	


}

