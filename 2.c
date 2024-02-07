//2 - Faça um programa que receba 2 valores e retorne a soma, subtração, multiplicação e divisão dos valores informados.
#include <stdio.h>

int main () {
	float a, b, soma, mult, div, sub;
	
	printf ("Digite o primeiro valor: ");
	scanf("%f", &a);
	
	printf ("Digite o segundo valor: ");
	scanf("%f", &b);
	
	soma = a + b;
	div = a/b;
	mult = a*b;
	sub = a-b;
	
	printf ("Sua soma eh de: %.2f\n ", soma);
	printf ("Sua divisao eh de: %.2f\n ", div);
	printf ("Sua subtracao eh de: %.2f\n ", sub);
	printf ("Sua mult eh de: %.2f\n ", mult);
	
}
