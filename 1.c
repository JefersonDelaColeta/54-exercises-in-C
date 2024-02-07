//1 - Faça um programa em C que receba 2 valores e calcule a sua médi
#include <stdio.h>

int main () {
	
	float a, b;
	
	printf ("Digite o primeiro valor: ");
	scanf("%f", &a);
	
	printf ("Digite o segundo valor: ");
	scanf("%f", &b);
	
	float media = a / b;
	
	printf ("Sua media eh de: %.2f ", media);
}
