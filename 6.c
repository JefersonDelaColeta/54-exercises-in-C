//6 - Escreva um programa que leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
// A f�rmula de convers�o �: �C = (�F - 32)*5/9 sendo F a temperatura em Fahrenheit e C a
//temperatura em Celsius.

#include <stdio.h>
int main () {
		float f, formula;
	
	printf ("Digite o valor em Fahrenheit ");
	scanf("%f", &f);
	
	formula = (f - 32)*5/9;
	
	printf ("O valor em Graus � %.2f: ", formula);
}


	
